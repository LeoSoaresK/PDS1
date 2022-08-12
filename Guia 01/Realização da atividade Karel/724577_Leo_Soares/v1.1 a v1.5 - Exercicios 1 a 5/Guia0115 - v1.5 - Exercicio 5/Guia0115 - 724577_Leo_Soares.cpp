/*
Guia0115 - v1.5. - 11/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia0115.exe Guia0115.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: Guia0115
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld ( const char* fileName ) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
world->set ( 2, 3, VWALL ); //parede vertical na posicao 2,3
world->set ( 2, 4, VWALL ); //parede vertical na posicao 2,4
world->set ( 2, 5, VWALL ); //parede vertical na posicao 2,5
world->set ( 2, 6, VWALL ); //parede vertical na posicao 2,6

world->set ( 5, 3, VWALL ); //parede vertical na posicao 5,3
world->set ( 5, 4, VWALL ); //parede vertical na posicao 5,4
world->set ( 5, 5, VWALL ); //parede vertical na posicao 5,5

world->set ( 3, 2, HWALL ); //parede horizontal na posicao 3,2
world->set ( 4, 2, HWALL ); //parede horizontal na posicao 4,2
world->set ( 5, 2, HWALL ); //parede horizontal na posicao 5,2

world->set ( 3, 6, HWALL ); //parede horizontal na posicao 3,6
world->set ( 4, 6, HWALL ); //parede horizontal na posicao 4,6
world->set ( 5, 6, HWALL ); //parede horizontal na posicao 5,6

world->set ( 2, 6, BEEPER); //beeper na posicao 2,6
world->set ( 2, 6, BEEPER); //outro beeper na posicao 2,6

world->set ( 5, 2, BEEPER); //beeper na posicao 5,2
world->set ( 5, 2, BEEPER); //outro beeper na posicao 5,2
world->set ( 5, 2, BEEPER); //outro beeper na posicao 5,2

world->set ( 5, 7, BEEPER); //beeper na posicao 5,7


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

void pick52 ( ) //pegar beepers na posicao 5,2
{
moveN (4);
turnLeft ( );
move( );
turnLeft ( );
pickBeeper( );
pickBeeper( );
pickBeeper( );
}

void pick26 ( ) //pegar beepers na posicao 2,6
{
moveN (3);
turnRight( );
moveN (4);
pickBeeper( );
pickBeeper( );
}

void pick57 ( ) //pegar beeper na posicao 5,7
{
move( );
turnRight( );
moveN (3);
pickBeeper( );
}

void put53 ( ) //deixar beepers na posicao 5,3
{
move ( );
turnRight( );
move( );
turnRight( );
move ( );
turnLeft ( );
moveN (3);
putBeeper ( );
putBeeper ( );
putBeeper ( );
putBeeper ( );
putBeeper ( );
putBeeper ( );
}

void gohome ( ) //voltar a posicao inicial
{
turnLeft( );
turnLeft( );
moveN (3);
turnRight( );
move( );
turnRight( );
moveN (5);
turnRight( );
moveN (5);
turnLeft( );
turnLeft( );
}

}; // end class MyRobot

int main ( ) //acao principal do robo 
{
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0115.txt" ); //decorar o mundo
world->show ( ); //mostrar o mundo

// preparar o ambiente para uso

world->reset ( ); // limpar configuracoes
world->read ( "Guia0115.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao

// criar robo

MyRobot *robot = new MyRobot( );
robot->create ( 1, 1, EAST, 0, "Karel" ); // posicionar robo no ambiente (situacao inicial):

// executar tarefa

robot->pick52( );
robot->pick26( );
robot->pick57( );
robot->put53( );
robot->gohome( );

robot->turnOff ( ); // desligar-se

world->close ( ); // encerrar operacoes no ambiente

// encerrar programa

getchar ( );
return ( 0 );
}