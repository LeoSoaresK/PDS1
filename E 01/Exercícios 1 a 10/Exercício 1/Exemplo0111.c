/*
Exemplo0111 - v1.1. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0111 Exemplo0111.c
Windows: gcc -o Exemplo0111.exe Exemplo0111.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0111
Windows: Exemplo0111
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> //para valores logicos
#include <string.h>  //para cadeias de caracteres
#include <math.h>    //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
  //definir dado
  double x = 0.0; // lado do quadrado
  double y = 0.0; // area do quadrado
  double z = 0.0; // area do quadrado dividida por 4
  double a = 4;   //numero 4

  //identificar
  printf("%s\n", "Exemplo0111 - Programa = v1.1"); // identificar programa
  printf("%s\n", "Autor: Leo Soares");             //identificar autor
  printf("\n");                                    // mudar de linha

  //mostrar valores iniciais
  printf("%s%lf\n", "x = ", x);

  // OBS.: O formato para double -> %lf

  //ler do teclado
  printf("\nEntrar com um valor real, referente ao lado do quadrado: "); //pedido para inserir o caractere
  scanf("%lf", &x);                                                      // ler o caractere inserido

  // OBS.: Necessário indicar os endereços -> &x

  //operar valores

  y = pow(x, 2); //elevar lado a 2 para obter a area
  z = y / a;     //dividir a area por 4

  //mostrar valor da area do quadrado

  printf("\nArea do quadrado = (%lf)", y);

  //mostrar valor da area do quadrado dividida por 4
  printf("\nArea do quadrado dividida por 4 = (%lf)", z);

  //encerrar
  printf("\n\nApertar ENTER para terminar."); //pedido para encerrar
  fflush(stdin);                              // limpar a entrada de dados
  getchar();                                  // aguardar por ENTER
  return (0);                                 // voltar ao SO (sem erros)

} // fim main( )
  /*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/