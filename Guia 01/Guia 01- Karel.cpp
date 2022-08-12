PUC-Minas - Ci�ncia da Computa��o
AED1 � Guia 01
Tema: Introdu��o � programa��o
Atividade: Montagem de programas - Karel
01.) Editar e salvar um esbo�o de programa,
o nome do arquivo dever� ser Guia0101.cpp,
concordando mai�sculas e min�sculas, sem espa�os em branco, acentos ou cedilha:
/*
Guia0101 - v0.0. - __ / __ / _____
Author: __________________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0101 ./Guia0101.cpp
No Windows: g++ -o Guia0101.exe Guia0101.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0101
No Windows: Guia0101
*/
// lista de dependencias
#include "karel.hpp" (necessario estar na mesma pasta)
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0101.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0101.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->move( ) // andar
robot->move( );
robot->turnLeft( ); // virar 'a esquerda
robot->move( );
robot->move( );
robot->turnLeft( );
robot->move( );
robot->move( );
robot->turnLeft( );
robot->move( );
robot->move( );
robot->turnLeft( );
robot->turnLeft( );
robot->turnOff ( ); // desligar-se
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( ) identificacao de programa
*/
02.) Compilar o programa.
Se houver erros, identificar individualmente a refer�ncia para a linha onde ocorrem.
Consultar atentamente o modelo acima na linha onde ocorreu o erro (e tamb�m linhas pr�ximas),
editar as modifica��es necess�rias.
Compilar novamente e proceder assim at� que todos os erros tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
OBS.: O ajuste de velocidade dever� ser feito para compatibilizar-se com o sistema operacional.
Recomenda-se, entretanto, n�o usar valores que acelerem demais o processo.
DICA: Se precisar de ajuda sobre como proceder a compila��o,
consultar os v�deos com as demonstra��es sobre algumas formas para faz�-lo.
SUGEST�O: Para se acostumar ao tratamento de erros,
registrar a mensagem de erro (como coment�rio)
e o que foi feito para resolv�-lo.
03.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
//
04.) Copiar a vers�o atual do programa para outra (nova) � Guia0102.cpp.
05.) Editar mudan�as no nome do programa e vers�o,
conforme as indica��es a seguir,
tomando o cuidado de modificar todas as refer�ncias,
inclusive as presentes em coment�rios.
Incluir na documenta��o complementar as altera��es feitas,
acrescentar indica��es de mudan�a de vers�o e
prever novos testes.
/*
Guia_0102 - v0.0. - __ / __ / _____
Author: _____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0102 ./Guia0102.cpp
No Windows: g++ -o Guia0102.exe Guia0102.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0102
No Windows: Guia0102
*/
// lista de dependencias
#include "karel.hpp" // na pasta do programa
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask ( )
{
// executar
move( ); // andar
move( );
turnLeft( ); // virar 'a esquerda
move( );
move( );
turnLeft( );
move( );
move( );
turnLeft( );
move( );
move( );
turnLeft( );
turnLeft( );
// encerrar
turnOff ( ); // desligar-se
} // end doTask ( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0102.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0102.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) teste inicial
0.2 01. ( ) teste da tarefa
*/
06.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
07.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
//
08.) Copiar a vers�o atual do programa para outra (nova) � Guia0103.cpp.
09.) Acrescentar ao programa as modifica��es indicadas abaixo:
/*
Guia0103 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0103 ./Guia0103.cpp
No Windows: g++ -o Guia0103.exe Guia0103.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0103
No Windows: Guia0103
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
move( );
move( );
move( );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
doPartialTask( );
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0103.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0103.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( ) teste da tarefa parcial
*/
10.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
11.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
//
12.) Copiar a vers�o atual do programa para outra (nova) � Guia0104.cpp.
13.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/**
/*
Guia0104 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0104 ./Guia0104.cpp
No Windows: g++ -o Guia0104.exe Guia0104.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0104
No Windows: Guia0104
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
move( );
move( );
move( );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
pickBeeper( ); // apanhar marcador
doPartialTask( );
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0104.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0104.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( ) teste do apanhar marcador
*/
14.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
15.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
//
16.) Copiar a vers�o atual do programa para outra (nova) � Guia0105.cpp.
17.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0105 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0105 ./Guia0105.cpp
No Windows: g++ -o Guia0105.exe Guia0105.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0105
No Windows: Guia0105
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
move( );
move( );
move( );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
pickBeeper( ); // apanhar marcador
doPartialTask( );
putBeeper( ); // colocar marcador
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0105.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0105.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( ) teste do colocar marcador
*/
18.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
19.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
//
20.) Copiar a vers�o atual do programa para outra (nova) � Guia0106.cpp.
21.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0106 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0106 ./Guia0106.cpp
No Windows: g++ -o Guia0106.exe Guia0106.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0106
No Windows: Guia0106
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
moveN - Metodo para mover certa quantidade de passos.
@param steps - passos a serem dados.
*/
void moveN( int steps )
{
// testar se a quantidade de passos e' maior que zero
if ( steps > 0 )
{
// dar um passo
move( );
// tentar fazer de novo, com menos um passo dessa vez
moveN ( steps - 1 );
} // end if
} // end moveN( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
pickBeeper( ); // apanhar marcador
doPartialTask( );
putBeeper( ); // colocar marcador
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0106.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0106.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( ) teste da repeticao do movimento
*/
22.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
23.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
// 0.6 01. ( OK ) teste da repeticao do movimento
//
24.) Copiar a vers�o atual do programa para outra (nova) � Guia0107.cpp.
25.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0107 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0107 ./Guia0107.cpp
No Windows: g++ -o Guia0107.exe Guia0107.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0107
No Windows: Guia0107
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
moveN - Metodo para mover certa quantidade de passos.
@param steps - passos a serem dados.
*/
void moveN( int steps )
{
// testar se a quantidade de passos e' maior que zero
if ( steps > 0 )
{
// dar um passo
move( );
// tentar fazer de novo, com menos um passo dessa vez
moveN ( steps - 1 );
} // end if
} // end moveN( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
// testar se ha' marcador antes ...
if ( nextToABeeper( ) )
{
// ... de tentar carrega-lo
pickBeeper( );
} // end if
doPartialTask( );
// testar se carrega marcador antes ...
if ( beepersInBag( ) )
{
// ... de tentar descarrega-lo
putBeeper( );
} // end if
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0107.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0107.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( ) teste com marcador na posicao (4,4)
02. ( ) teste sem marcador na posicao (4,4)
*/
26.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
27.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
// 0.6 01. ( OK ) teste da repeticao do movimento
// 0.7 01. ( OK ) teste com marcador na posicao (4,4)
// 02. ( OK ) teste com marcador na posicao (4,4)
//
28.) Copiar a vers�o atual do programa para outra (nova) � Guia0008.cpp.
29.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0108 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0108 ./Guia0108.cpp
No Windows: g++ -o Guia0108.exe Guia0108.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0108
No Windows: Guia0108
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
moveN - Metodo para mover certa quantidade de passos.
@param steps - passos a serem dados.
*/
void moveN( int steps )
{
// testar se a quantidade de passos e' maior que zero
if ( steps > 0 )
{
// dar um passo
move( );
// tentar fazer de novo, com menos um passo dessa vez
moveN ( steps - 1 );
} // end if
} // end moveN( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
// testar se ha' marcador antes ...
if ( nextToABeeper( ) )
{
// ... de tentar carrega-lo
pickBeeper( );
} // end if
doPartialTask( );
// testar se carrega marcador antes ...
if ( nbeepers( ) > 0 )
{
// ... de tentar descarrega-lo
putBeeper( );
} // end if
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0108.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0108.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// -------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( OK ) teste com marcador na posicao (4,4)
02. ( OK ) teste sem marcador na posicao (4,4)
0.8 01. ( ) teste com a quantidade de marcadores
*/
30.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
31.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
// 0.6 01. ( OK ) teste da repeticao do movimento
// 0.7 01. ( OK ) teste com marcador na posicao (4,4)
// 02. ( OK ) teste com marcador na posicao (4,4)
// 0.8 01. ( OK ) teste com a quantidade de marcadores
//
32.) Copiar a vers�o atual do programa para outra (nova) � Guia0109.cpp.
33.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0109 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0109 ./Guia0109.cpp
No Windows: g++ -o Guia0109.exe Guia0109.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0109
No Windows: Guia0109
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
moveN - Metodo para mover certa quantidade de passos.
@param steps - passos a serem dados.
*/
void moveN( int steps )
{
// testar se a quantidade de passos e' maior que zero
while ( steps > 0 ) // forma alternativa
{
// dar um passo
move( );
// tentar fazer de novo, com menos um passo
steps = steps - 1;
} // end while
} // end moveN( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
// testar se ha' marcador antes ...
if ( nextToABeeper( ) )
{
// ... de tentar carrega-lo
pickBeeper( );
} // end if
doPartialTask( );
// testar se carrega marcador antes ...
if ( nbeepers( ) > 0 )
{
// ... de tentar descarrega-lo
putBeeper( );
} // end if
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0109.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0109.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// -------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( OK ) teste com marcador na posicao (4,4)
02. ( OK ) teste sem marcador na posicao (4,4)
0.8 01. ( OK ) teste com a quantidade de marcadores
0.9 01. ( ) teste com outra forma de repeticao
*/
34.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
35.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
// 0.6 01. ( OK ) teste da repeticao do movimento
// 0.7 01. ( OK ) teste com marcador na posicao (4,4)
// 02. ( OK ) teste com marcador na posicao (4,4)
// 0.8 01. ( OK ) teste com a quantidade de marcadores
// 0.9 01. ( OK ) teste com outra forma de repeticao
//
36.) Copiar a vers�o atual do programa para outra (nova) � Guia0110.cpp.
37.) Alterar as identifica��es de programa e acrescentar as modifica��es indicadas abaixo:
/*
Guia0110 - v0.0. - __ / __ / _____
Author: ____________________
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0110 ./Guia0110.cpp
No Windows: g++ -o Guia0110.exe Guia0110.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0110
No Windows: Guia0110
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar um marcador no mundo
world->set ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
world->save( fileName );
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
/**
turnRight - Procedimento para virar 'a direita.
*/
void turnRight ( )
{
// testar se o robo esta' ativo
if ( checkStatus ( ) )
{
// o agente que executar esse metodo
// devera' virar tres vezes 'a esquerda
turnLeft ( );
turnLeft ( );
turnLeft ( );
} // end if
} // end turnRight ( )
/**
moveN - Metodo para mover certa quantidade de passos.
@param steps - passos a serem dados.
*/
void moveN( int steps )
{
// definir dado local
int step = 0;
// testar se a quantidade de passos e' maior que zero
for ( step = 1; step < steps; step = step + 1 ) // outra alternativa
{
// dar um passo
move( );
} // end if
} // end moveN( )
/**
doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
doTask - Relacao de acoes para o robo executar.
*/
void doTask( )
{
// especificar acoes da tarefa
doPartialTask( );
doPartialTask( );
// testar se ha' marcador antes ...
if ( nextToABeeper( ) )
{
// ... de tentar carrega-lo
pickBeeper( );
} // end if
doPartialTask( );
// testar se carrega marcador antes ...
if ( nbeepers( ) > 0 )
{
// ... de tentar descarrega-lo
putBeeper( );
} // end if
doPartialTask( );
turnLeft( );
// encerrar
turnOff ( );
} // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
world->create ( "" ); // criar o mundo
decorateWorld ( "Guia0110.txt" );
world->show ( );
// preparar o ambiente para uso
world->reset ( ); // limpar configuracoes
world->read ( "Guia0110.txt" );// ler configuracao atual para o ambiente
world->show ( ); // mostrar a configuracao atual
set_Speed ( 3 ); // definir velocidade padrao
// criar robo
MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
robot->doTask ( );
// encerrar operacoes no ambiente
world->close ( );
// encerrar programa
getchar ( );
return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 0.1 ( OK ) teste inicial
0.2 0.1 ( OK ) teste da tarefa
0.3 0.1 ( OK ) teste da tarefa parcial
0.4 0.1 ( OK ) teste do apanhar marcador
0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( OK ) teste com marcador na posicao (4,4)
02. ( OK ) teste sem marcador na posicao (4,4)
0.8 01. ( OK ) teste com a quantidade de marcadores
0.9 01. ( OK ) teste com outra forma de repeticao
1.0 01. ( ) teste com outra forma de repeticao
01. ( ) teste com outra forma de alternativa
*/
38.) Compilar o programa novamente.
Se houver erros, resolv�-los e compilar novamente, at� que todos tenham sido resolvidos.
Se n�o houver erros, seguir para o pr�ximo passo.
39.) Executar o programa.
Observar as sa�das.
Registrar os resultados.
// ---------------------------------------------- testes
//
// Versao Teste
// 0.1 01. ( OK ) teste inicial
// 0.2 01. ( OK ) teste da tarefa
// 0.3 01. ( OK ) teste da tarefa parcial
// 0.4 01. ( OK ) teste do apanhar marcador
// 0.5 01. ( OK ) teste do colocar marcador
// 0.6 01. ( OK ) teste da repeticao do movimento
// 0.7 01. ( OK ) teste com marcador na posicao (4,4)
// 02. ( OK ) teste com marcador na posicao (4,4)
// 0.8 01. ( OK ) teste com a quantidade de marcadores
// 0.9 01. ( OK ) teste com outra forma de repeticao
// 1.0 01. ( OK ) teste com outra forma de alternativa
//
Exerc�cios:
DICAS GERAIS: Consultar o Anexo CPP para mais informa��es e outros exemplos.
Prever, realizar e registrar todos os dados e os testes efetuados.
Fazer um programa para atender a cada uma das situa��es abaixo
envolvendo defini��es e a��es b�sicas.
Os programas dever�o ser desenvolvidos em C++ usando as bibliotecas indicadas.
01.) Definir um conjunto de a��es em um programa Guia0111 para:
- o rob� partir da posi��o inicial (coluna=1, linha=1), voltado para leste,
com tr�s marcadores ("beepers");
- o rob� dever� colocar um marcador nas posi��es indicadas:
(3,3), (6,3) e (6,6), nessa ordem;
- retornar � posi��o inicial,
voltar-se para o leste. e
desligar-se.
OBS.: Para fazer o rob� come�ar com marcadores, rever sua defini��o inicial:
robot->create ( 1, 1, EAST, 0, "Karel" );
02.) Definir um conjunto de a��es em um programa Guia0112 para:
- configurar o mundo para conter
inicialmente tr�s marcadores ("beepers")
nas posi��es anteriormente indicadas:
(3,3), (6,3) e (6,6) nessa ordem;
- o rob� dever� partir da posi��o inicial (coluna=1, linha=1),
voltado para leste e nenhum marcador;
- buscar os marcadores nas posi��es indicadas,
na ordem inversa � qual foram colocados;
- retornar � posi��o inicial, voltar-se para o leste e desligar-se.
OBS.: Para colocar desde o in�cio os marcadores nas posi��es indicadas,
rever o m�todo decorateworld ( filename ).
03.) Definir um conjunto de a��es em um programa Guia0113 para:
- o rob� dever� partir da posi��o (coluna=1, linha=1), voltado para leste e
sem marcadores
- buscar os marcadores ("beepers")
nas mesmas posi��es iniciais do problema anterior
(configurar o mundo com marcadores nas posi��es)
- descarregar todos os marcadores obtidos
nas posi��es (1,5); (1,4) e (1,3), respectivamente;
- retornar � posi��o inicial, voltar-se para leste e desligar-se.
04.) Definir um conjunto de a��es em um programa Guia0114 para:
- configurar o mundo semelhante ao diagrama abaixo
inicialmente com tr�s marcadores nas posi��es indicadas (1):
10
9
8
7
(1)
6
(1)
5
4
3
(X)
2
(1)
1
K
1
2
3
4
5
6
7
8
9
10
- o rob� dever� partir da posi��o inicial (coluna=1, linha=1),
voltado para leste e com nenhum marcador;
- buscar os tr�s marcadores ("beepers")
e coloc�-los na posi��o indicada por (X);
- retornar � posi��o inicial,
voltar-se para o leste e desligar-se.
05.) Definir um conjunto de a��es em um programa Guia0115 para:
- configurar o mundo semelhante ao diagrama abaixo
inicialmente com seis marcadores
na posi��o indicada (X):
10
9
8
7
(1)
6
(2)
5
4
3
(X)
2
(3)
1
K
1
2
3
4
5
6
7
8
9
10
- o rob� dever� partir da posi��o inicial (coluna=1, linha=1),
voltado para leste e com nenhum marcador;
- buscar os marcadores e distribu�-los
nas quantidades indicadas e
na ordem decrescente das quantidades (1-2-3)
- retornar � posi��o inicial, voltar-se para o leste e desligar-se.
Tarefas extras
E1.) Definir um conjunto de a��es em um programa Guia01E1
para que se possa colocar e pegar v�rios marcadores ( n )
de uma s� vez, se estiver carregando o suficiente.
void putBeepers ( int n )
{
// incluir comandos extras
} // end putBeepers ( )
void pickBeepers ( int n )
{
// incluir comandos extras
} // end putBeepers ( )
Testar o m�todo mediante substitui��o de v�rios usos consecutivos
de chamadas aos m�todos de posicionamento unit�rio,
por chamadas desses novos m�todos.
DICA: Rever a defini��o do exerc�cio anterior para usar repeti��es.
E2.) Redefinir as repeti��es em um programa Guia01E2
para usar varia��es crescentes ao inv�s de decrescentes.
E3.) Definir um conjunto de a��es em um programa Guia01E3
para reunir em um novo arquivo myKarel.hpp
todas as novas defini��es feitas,
que poder�o ser reaproveitadas no futuro,
como o moveN( ), putBeepers( ), pickBeepers( ), e
substituir a depend�ncia por apenas essa.
#include "myKarel.hpp"
Testar todos os m�todos sob essa nova organiza��o.
DICA: Os nomes dever�o ser �nicos, portanto,
se desejar guardar m�todos que realizem a mesma fun��o,
alterar o nome de acordo.
Atividade suplementar
Associar os conceitos de representa��es de dados e a metodologia
sugerida para o desenvolvimento de programa (passo a passo), para
modificar o modelo proposto (e exemplos associados) e
introduzir, pouco a pouco, as modifica��es necess�rias, cuidando
de realizar a documenta��o das defini��es, procedimentos e
opera��es executadas.
Para pensar a respeito
Qual a estrat�gia de solu��o ?
Como definir uma classe com um m�todo principal que execute essa estrat�gia ?
Ser�o necess�rias defini��es pr�vias (extras) para se obter o resultado ?
Como dividir os passos a serem feitos e organiz�-los em que ordem ?
Que informa��es dever�o ser colocadas na documenta��o ?
Como lidar com os erros de compila��o ?
Como lidar com os erros de execu��o ?
Fontes de informa��o
apostila de C++ (anexos)
exemplos (0-9) na pasta de arquivos relacionada
bibliografia recomendada
lista de discuss�o da disciplina
websites
Processo
1 relacionar claramente seus objetivos e
registrar isso na documenta��o necess�ria para o desenvolvimento;
2 organizar as informa��es de cada proposi��o de problema:
2.1 escolher os armazenadores de acordo com o tipo apropriado;
2.2 realizar as entradas de dados ou defini��es iniciais;
2.3 realizar as opera��es;
2.4 realizar as sa�das dos resultados;
2.5 projetar testes para cada opera��o, considerar casos especiais
3 especificar a classe:
3.1 definir a identifica��o do programa na documenta��o;
3.2 definir a identifica��o do programador na documenta��o;
3.3 definir armazenadores necess�rios (se houver)
3.4 definir a entrada de dados para cada valor
3.5 testar se os dados foram armazenados corretamente
3.6 definir a sa�da de cada resultado ou (execu��o de cada a��o)
3.7 testar a sa�da de cada resultado com valores (situa��es) conhecidas
3.8 definir cada opera��o
3.9 testar isoladamente cada opera��o, conferindo os resultados
4 especificar as a��es da parte principal:
4.1 definir o cabe�alho para identifica��o;
4.2 definir as constantes, armazenadores e dados auxiliares (se houver);
4.3 definir a estrutura b�sica de programa que possa permitir a
execu��o de v�rios dos testes programados;
5. realizar os testes isolados de cada opera��o e
depois os testes de integra��o;
5.1 registrar todos os testes realizados.
Dicas
- Digitar os exemplos fornecidos e test�-los.
- Identificar exemplos que possam servir de modelos para os exerc�cios,
e us�-los como sugest�es para o desenvolvimento.
- Fazer rascunhos, diagramas e esquemas para orientar
o desenvolvimento da solu��o, previamente,
antes de come�ar a digitar o novo programa.
- Consultar os modelos de programas e documenta��o dispon�veis.
- Anotar os testes realizados e seus resultados no final do
texto do programa, como coment�rios.
- Anotar erros, d�vidas e observa��es no final do programa,
tamb�m como coment�rios. Usar /* ... */ para isso.
Conclus�o
Analisar cada resultado obtido e avaliar-se ao fim do processo.