Processo de realiza��o para Guia01E1 - vE.1 a Guia01E3 - vE.3 (Exercicios extra 1 a 3)
Author: 724577 - Leo Soares

Exercicio extra 1)

>> Para a realiza��o do exerc�cio extra 1, a exata situa��o do exerc�cio 5 foi copiada.

>> Os comandos pickBeepers e putBeepers foram constru�dos de maneira semelhante ao comando moveN, a partir de um processo de repeti��o dos comandos pickBeeper e putBeeper

   > void pickBeepers (int beepersInGround) //comando para pegar multiplos beepers
    {
	if (beepersInGround > 0) //testar se a quantidade de beepers a serem pegos e maior que zero
	   {
	   pickBeeper( ); //pegar um beeper
	   pickBeepers(beepersInGround - 1 ); //repetir o comando, com menos um beeper dessa vez
	   } //end if
    } //end void
	
   > void putBeepers (int beepersInBag) //comando para colocar multiplos beepers
	{
	if (beepersInBag > 0) //testar se a quantidade de beepers a serem colocados e maior que zero
	   {
	   putBeeper( ); //colocar um beeper
	   putBeepers(beepersInBag - 1 ); //repetir o comando, com menos um beeper dessa vez
	   } //end if
	} //end void
	
>> Com os novos comandos, o trajeto do exerc�cio 5 foi repetido, acrescentando as altera��es nas a��es de pegar e colocar m�ltiplos beepers.

Exercicio extra 2) 

>> N�o consegui fazer

Exercicio extra 3)

>> Para realiza��o do exerc�cio extra 3, foram reunidas todas as defini��es essenciais criadas para o rob� myKarel em um �nico arquivo

>> Defini��es referentes a trajetos espec�ficos para apenas uma situa��o foram dispensadas, uma vez que n�o seriam �teis para todos os problemas.