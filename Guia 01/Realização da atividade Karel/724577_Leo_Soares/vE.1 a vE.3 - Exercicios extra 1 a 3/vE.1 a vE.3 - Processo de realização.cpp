Processo de realização para Guia01E1 - vE.1 a Guia01E3 - vE.3 (Exercicios extra 1 a 3)
Author: 724577 - Leo Soares

Exercicio extra 1)

>> Para a realização do exercício extra 1, a exata situação do exercício 5 foi copiada.

>> Os comandos pickBeepers e putBeepers foram construídos de maneira semelhante ao comando moveN, a partir de um processo de repetição dos comandos pickBeeper e putBeeper

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
	
>> Com os novos comandos, o trajeto do exercício 5 foi repetido, acrescentando as alterações nas ações de pegar e colocar múltiplos beepers.

Exercicio extra 2) 

>> Não consegui fazer

Exercicio extra 3)

>> Para realização do exercício extra 3, foram reunidas todas as definições essenciais criadas para o robô myKarel em um único arquivo

>> Definições referentes a trajetos específicos para apenas uma situação foram dispensadas, uma vez que não seriam úteis para todos os problemas.