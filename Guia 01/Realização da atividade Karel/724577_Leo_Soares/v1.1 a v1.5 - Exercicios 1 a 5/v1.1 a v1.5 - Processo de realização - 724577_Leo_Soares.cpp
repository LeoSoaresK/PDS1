Processo de realiza��o para Guia0111 - v1.1 a Guia0115 - v.1.5 (Exercicios 1 a 5)
Author: 724577 - Leo Soares

Exercicio 1)

>> Cria��o do mundo, sem beepers e sem paredes
>> Cria��o do rob�, na posi��o 1, 1, voltado para E, com 3 beepers

>> O comando moveN, para facilitar a movimenta��o do rob�, foi constru�do na vers�o 1.1 a partir de um m�todo de repeti��o do comando move

>> Realiza��o do trajeto, colocando os beepers nas posicoes (3,3), (6,3) e (6,6), respectivamente
>> Realiza��o do trajeto de volta para a posi��o inicial

>> Reorganiza��o do trajeto, dividindo-o em 4 etapas:

   > goto33: Caminho para a posi��o 3,3 e soltar o beeper 
   > goto36: Caminho para a posi��o 3,6 e soltar o beeper 
   > goto66: Caminho para a posi��o 6,6 e soltar o beeper 
   > gohome: Caminho para retornar � posi��o inicial
   
   
Exercicio 2)

>> Cria��o do mundo, com beepers nas posi��es (3,3), (6,3) e (6,6) e sem paredes
>> Cria��o do rob�, na posi��o 1, 1, voltado para E, com 0 beepers

>> O comando moveN, para facilitar a movimenta��o do rob�, foi constru�do na vers�o 1.2 a partir de outro m�todo de repeti��o do comando move, que foi utilizada para todos os exerc�cios posteriores.

>> Realiza��o do trajeto, pegando os beepers nas posicoes (6,6), (6,3) e (3,3), respectivamente
>> Realiza��o do trajeto de volta para a posi��o inicial

>> Reorganiza��o do trajeto, dividindo-o em 4 etapas:

   > pick66: Caminho para a posi��o 6,6 e pegar o beeper
   > pick63: Caminho para a posi��o 6,3 e pegar o beeper
   > pick33: Caminho para a posi��o 3,3 e pegar o beeper
   > gohome: Caminho para retornar a posi��o inicial

   
Exercicio 3)

>> Para cria��o da situa��o do exerc�cio 3, foram utilizados os mesmos par�metros do mundo e do rob� do exerc�cio 2

>> Para realiza��o do trajeto do exerc�cio 3, foram utilizados os respectivos comandos do exerc�cio 2:

   > pick66: Caminho para a posi��o 6,6 e pegar o beeper
   > pick63: Caminho para a posi��o 6,3 e pegar o beeper
   > pick33: Caminho para a posi��o 3,3 e pegar o beeper
   
>> Ent�o, ap�s pegar os 3 beepers, foi tra�ado um novo trajeto para colocar os beepers nas posi��es (1,5), (1,4) e (1,3), respectivamente

>> O novo trajeto foi agrupado em apenas um comando, que descreve o caminho para colocar os beepers e voltar � posi��o inicial

   > putAndgoHome: Coloca os beepers nas posi��es 1,5 > 1,4 > 1,3 e retorna � posi��o inicial
   

Exerc�cio 4)

>> Cria��o do mundo, com:

   > Paredes nas posi��es indicadas pelo diagrama do enunciado
   > Beepers nas posi��es indicadas pelo diagrama do enunciado

>> Cria��o do rob�, na posi��o 1, 1, voltado para E, com 0 beepers

>> Realiza��o do trajeto, pegando os beepers nas posi��es (5,2), (2,6) e (5,7), respectivamente, colocando-os no local desejado e retornando � posi��o inicial

>> Reorganiza��o do trajeto, dividindo-o em 5 etapas:

   >pick52: Caminho para a posi��o 5,2 e pegar o beeper
   >pick26: Caminho para a posi��o 2,6 e pegar o beeper
   >pick57: Caminho para a posi��o 5,7 e pegar o beeper
   >put53: Caminho para a posi��o 5,3 e colocar o beeper
   >gohome: Caminho para retornar a posicao inicial
   
   
Exerc�cio 5)

>> Cria��o do mundo com os mesmos par�metros do exerc�cio 4, por�m, alterando a quantidade de beepers nas posi��es:

   >(2,6): 2 beepers
   >(5,2): 3 beepers
   
>> Realiza��o do mesmo trajeto do exerc�cio 4, com pequenas altera��es nas quantidades de beepers pegos e colocados:

   >pick52: Caminho para a posi��o 5,2 e pegar 3 beepers
   >pick26: Caminho para a posi��o 2,6 e pegar 2 beepers
   >pick57: Caminho para a posi��o 5,7 e pegar 1 beeper
   >put53: Caminho para a posi��o 5,3 e colocar 6 beepers
   >gohome: Caminho para retornar a posicao inicial

