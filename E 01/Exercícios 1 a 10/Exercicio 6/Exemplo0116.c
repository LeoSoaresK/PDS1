/*
Exemplo0116 - v1.6. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0116 Exemplo0116.c
Windows: gcc -o Exemplo0116.exe Exemplo0116.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0116
Windows: Exemplo0116
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
  double lado = 0.0;   //lado do triangulo equilatero
  double altura = 0.0; //altura do triangulo equilatero

  double perimetro = 0.0; //perimetro do triangulo equilatero
  double area = 0.0;      //area do triangulo equilatero

  //identificar
  printf("%s\n", "Exemplo0116 - Programa = v1.6"); // identificar programa
  printf("%s\n", "Autor: Leo Soares");             //identificar autor
  printf("\n");                                    // mudar de linha

  //mostrar valores iniciais
  printf("%s%lf\n", "Lado do triangulo equilatero = ", lado);

  // OBS.: O formato para double -> %lf

  //ler do teclado
  printf("\nEntrar com um valor real, referente ao lado do triangulo equilatero: "); //pedido para inserir o caractere
  scanf("%lf", &lado);                                                               // ler o caractere inserido

  // OBS.: Necessário indicar os endereços -> &x

  //operar valores

  altura = lado * sqrt(3) / 2;
  perimetro = lado * 3;
  area = pow(lado, 2) * sqrt(3) / 4;

  //mostrar o valor da altura do triangulo
  printf("\nAltura do triangulo = (%lf)", altura);

  //mostrar o valor do perimetro do triangulo
  printf("\nPerimetro do triangulo = (%lf)", perimetro);

  //mostrar o valor da area do triangulo
  printf("\nArea do triangulo = (%lf)", area);

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
1.6 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.6 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/