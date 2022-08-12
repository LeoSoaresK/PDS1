/*
Guia0113 - v1.3. - 10/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0113.exe Guia0113.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0113
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld ( const char* fileName ) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
world->set ( 3, 3, BEEPER ); //beeper na posicao 3,3
world->set ( 6, 3, BEEPER ); //beeper na posicao 6,3
world->set ( 6, 6, BEEPER ); //beeper na posicao 6,6
world->save( fileName ); // salvar a configuracao atual do mundo
}

class MyRobot : public Robot //definir robo particular (MyRobot) a partir do modelo generico (Robot)
{

public:

void turnRight ( ) //procecimento para virar a direita
{
if ( checkStatus ( ) ) // testar se o robo esta' ativo
{
// o agente que executar esse metodo devera virar tres vezes para a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )

void moveN( int steps ) 
{
if ( steps > 0 ) // testar se a quantidade de passos e' maior que zero
{
move( ); // dar um passo
moveN ( steps - 1 ); // tentar fazer de novo, com menos um passo dessa vez
}
}

void pick66 ( ) //pegar beeper na posicao 6,6
{
turnLeft( );
moveN(5);
turnRight( );
moveN(5);
pickBeeper( );
turnRight( );	
}

void pick63 ( ) //pegar beeper na posicao 6,3
{
moveN(3);
pickBeeper( );
turnRight( );	
}

void pick33 ( ) //pegar beeper na posicao 3,3
{
moveN(3);
pickBeeper( );
}

void putAndgoHome ( ) //colocar os beepers nas posicoes 1,5 > 1,4 > 1,3 respectivamente e voltar para posicao inicial
{
turnRight( );
moveN (2);
turnLeft( );
moveN (2);
turnLeft( );
putBeeper( );
move( );
putBeeper( );
move( );
putBeeper( );
moveN (2);
turnLeft( );
}

}; // end class MyRobot

int main ( ) //acao principal do robo 
{
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0113.txt" ); //decorar o mundo
world->show ( ); //mostrar o mundo

// preparar o ambiente para uso

world->reset ( ); // limpar configuracoes
world->read ( "Guia0113.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao

// criar robo

MyRobot *robot = new MyRobot( );
robot->create ( 1, 1, EAST, 0, "Karel" ); // posicionar robo no ambiente (situacao inicial):

// executar tarefa

robot->pick66( ); 
robot->pick63( ); 
robot->pick33( );
robot->putAndgoHome ( );

robot->turnOff ( ); // desligar-se

world->close ( ); // encerrar operacoes no ambiente

// encerrar programa

getchar ( );
return ( 0 );
}