/*
Exemplo0112 - v1.2. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0112 Exemplo0112.c
Windows: gcc -o Exemplo0112.exe Exemplo0112.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0112
Windows: Exemplo0112
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
  double b = 2;   //numero 2
  double c = 0.0; //metade do lado
  double d = 0.0; //perimetro do quadrado de lado = x/2

  //identificar
  printf("%s\n", "Exemplo0112 - Programa = v1.2"); // identificar programa
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

  //operar valores

  c = x / b; //obter metade do lado do quadrado
  d = c * a; //obter perimetro do quadrado de lado = x/2

  //mostrar valor da metade do lado do quadrado
  printf("\nMetade do lado do quadrado = (%lf)", c);

  //mostrar perimetro do quadrado de lado = x/2
  printf("\nPerimetro do quadrado de lado (%lf) = (%lf)", c, d);

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