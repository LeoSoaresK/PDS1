/*
Guia0111 - v1.1. - 10/03/2021
Author: 724577 - Leo Soares

g++ -o Guia0111.exe Guia0111.cpp << para executar em uma janela de comandos no Windows

Nome do arquivo: Guia0111
*/

// lista de dependencias

#include "karel.hpp" //(necessario estar na mesma pasta)

//definicoes de metodos

void decorateWorld ( const char* fileName ) //metodo para preparar o cenario (@param fileName - nome do arquivo para guardar a descricao)
{
world->save( fileName ); // salvar a configuracao atual do mundo
} // decorateWorld ( )

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
// definir dado local
int step = 0;
// testar se a quantidade de passos e' maior que zero
for ( step = 1; step < steps; step = step + 1 ) // outra alternativa
{
move( ); // dar um passo
} // end if
} // end moveN( )

void goto33 ( ) //caminho para ir a posicao 3,3 e soltar o beeper
{
	moveN (3);
    turnLeft( ); // virar 'a esquerda
    moveN (3);
    putBeeper( );
    turnRight ( );
}

void goto63 ( ) //caminho para ir a posicao 6,3 e soltar o beeper
{
	moveN (4);
    putBeeper( );
    turnLeft( );
}

void goto66 ( ) //caminho para ir a posicao 6,6 e soltar o beeper
{
	moveN (4);
    putBeeper( );
    turnLeft( );
}

void gohome ( ) //caminho para posicao inicial, virado para E
{
	moveN (6);
    turnLeft( );
    moveN (6);
    turnLeft( );
}

}; // end class MyRobot

int main ( ) //acao principal do robo 
{

world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0111.txt" ); //decorar o mundo
world->show ( ); //mostrar o mundo

// preparar o ambiente para uso

world->reset ( ); // limpar configuracoes
world->read ( "Guia0111.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao

// criar robo

MyRobot *robot = new MyRobot( );
robot->create ( 1, 1, EAST, 3, "Karel" ); // posicionar robo no ambiente (situacao inicial):

// executar tarefa

robot->goto33 ( );
robot->goto63 ( );
robot->goto66 ( );
robot->gohome ( );
robot->turnOff ( ); // desligar-se

world->close ( ); // encerrar operacoes no ambiente

// encerrar programa

getchar ( );
return ( 0 );
} 