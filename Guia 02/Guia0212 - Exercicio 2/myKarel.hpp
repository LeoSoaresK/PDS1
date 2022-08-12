/*
Guia01E3 - 12/03/2021
Author: 724577 - Leo Soares

>> Comando: g++ -o Guia01E1.exe Guia01E1.cpp (para executar em uma janela de comandos no Windows)

Nome do arquivo: myKarel.hpp

Nesse arquivo, serão definidos apenas definições de utilidade para toda e qualquer situação construída com o sistema Karel
Portanto, definições para trajetos específicos e para criação de mundo serão dispensadas.
*/

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

void pickBeepers (int beepersInGround) //pegar multiplos beepers
{
	if (beepersInGround > 0) //testar se a quantidade de beepers a serem pegos e maior que zero
	{
		pickBeeper( ); //pegar um beeper
		pickBeepers(beepersInGround - 1 ); //repetir o comando, com menos um beeper dessa vez
	} //end if
} //end void

void putBeepers (int beepersInBag) //colocar multiplos beepers
{
	if (beepersInBag > 0) //testar se a quantidade de beepers a serem colocados e maior que zero
	{
		putBeeper( ); //colocar um beeper
		putBeepers(beepersInBag - 1 ); //repetir o comando, com menos um beeper dessa vez
	} //end if
} //end void

