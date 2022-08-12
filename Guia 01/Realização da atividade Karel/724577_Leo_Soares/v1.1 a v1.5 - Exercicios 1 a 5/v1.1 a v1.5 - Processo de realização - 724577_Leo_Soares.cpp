Processo de realização para Guia0111 - v1.1 a Guia0115 - v.1.5 (Exercicios 1 a 5)
Author: 724577 - Leo Soares

Exercicio 1)

>> Criação do mundo, sem beepers e sem paredes
>> Criação do robô, na posição 1, 1, voltado para E, com 3 beepers

>> O comando moveN, para facilitar a movimentação do robô, foi construído na versão 1.1 a partir de um método de repetição do comando move

>> Realização do trajeto, colocando os beepers nas posicoes (3,3), (6,3) e (6,6), respectivamente
>> Realização do trajeto de volta para a posição inicial

>> Reorganização do trajeto, dividindo-o em 4 etapas:

   > goto33: Caminho para a posição 3,3 e soltar o beeper 
   > goto36: Caminho para a posição 3,6 e soltar o beeper 
   > goto66: Caminho para a posição 6,6 e soltar o beeper 
   > gohome: Caminho para retornar à posição inicial
   
   
Exercicio 2)

>> Criação do mundo, com beepers nas posições (3,3), (6,3) e (6,6) e sem paredes
>> Criação do robô, na posição 1, 1, voltado para E, com 0 beepers

>> O comando moveN, para facilitar a movimentação do robô, foi construído na versão 1.2 a partir de outro método de repetição do comando move, que foi utilizada para todos os exercícios posteriores.

>> Realização do trajeto, pegando os beepers nas posicoes (6,6), (6,3) e (3,3), respectivamente
>> Realização do trajeto de volta para a posição inicial

>> Reorganização do trajeto, dividindo-o em 4 etapas:

   > pick66: Caminho para a posição 6,6 e pegar o beeper
   > pick63: Caminho para a posição 6,3 e pegar o beeper
   > pick33: Caminho para a posição 3,3 e pegar o beeper
   > gohome: Caminho para retornar a posição inicial

   
Exercicio 3)

>> Para criação da situação do exercício 3, foram utilizados os mesmos parâmetros do mundo e do robô do exercício 2

>> Para realização do trajeto do exercício 3, foram utilizados os respectivos comandos do exercício 2:

   > pick66: Caminho para a posição 6,6 e pegar o beeper
   > pick63: Caminho para a posição 6,3 e pegar o beeper
   > pick33: Caminho para a posição 3,3 e pegar o beeper
   
>> Então, após pegar os 3 beepers, foi traçado um novo trajeto para colocar os beepers nas posições (1,5), (1,4) e (1,3), respectivamente

>> O novo trajeto foi agrupado em apenas um comando, que descreve o caminho para colocar os beepers e voltar à posição inicial

   > putAndgoHome: Coloca os beepers nas posições 1,5 > 1,4 > 1,3 e retorna à posição inicial
   

Exercício 4)

>> Criação do mundo, com:

   > Paredes nas posições indicadas pelo diagrama do enunciado
   > Beepers nas posições indicadas pelo diagrama do enunciado

>> Criação do robô, na posição 1, 1, voltado para E, com 0 beepers

>> Realização do trajeto, pegando os beepers nas posições (5,2), (2,6) e (5,7), respectivamente, colocando-os no local desejado e retornando à posição inicial

>> Reorganização do trajeto, dividindo-o em 5 etapas:

   >pick52: Caminho para a posição 5,2 e pegar o beeper
   >pick26: Caminho para a posição 2,6 e pegar o beeper
   >pick57: Caminho para a posição 5,7 e pegar o beeper
   >put53: Caminho para a posição 5,3 e colocar o beeper
   >gohome: Caminho para retornar a posicao inicial
   
   
Exercício 5)

>> Criação do mundo com os mesmos parâmetros do exercício 4, porém, alterando a quantidade de beepers nas posições:

   >(2,6): 2 beepers
   >(5,2): 3 beepers
   
>> Realização do mesmo trajeto do exercício 4, com pequenas alterações nas quantidades de beepers pegos e colocados:

   >pick52: Caminho para a posição 5,2 e pegar 3 beepers
   >pick26: Caminho para a posição 2,6 e pegar 2 beepers
   >pick57: Caminho para a posição 5,7 e pegar 1 beeper
   >put53: Caminho para a posição 5,3 e colocar 6 beepers
   >gohome: Caminho para retornar a posicao inicial

