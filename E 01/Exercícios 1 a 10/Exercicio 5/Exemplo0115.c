/*
Exemplo0115 - v1.5. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0115 Exemplo0115.c
Windows: gcc -o Exemplo0115.exe Exemplo0115.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0115
Windows: Exemplo0115
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
  double base = 0.0;   // base do triangulo
  double altura = 0.0; //altura do triangulo
  double area = 0.0;   //area do triangulo
  double area2 = 0.0;  //area do triangulo com o dobro da altura

  //identificar
  printf("%s\n", "Exemplo0115 - Programa = v1.5"); // identificar programa
  printf("%s\n", "Autor: Leo Soares");             //identificar autor
  printf("\n");                                    // mudar de linha

  //mostrar valores iniciais
  printf("%s%lf\n", "base = ", base);
  printf("%s%lf\n", "altura = ", altura);

  // OBS.: O formato para double -> %lf

  //ler do teclado
  printf("\nEntrar com um valor real, referente a base do triangulo: "); //pedido para inserir o caractere
  scanf("%lf", &base);                                                   // ler o caractere inserido

  printf("\nEntrar com um valor real, referente a altura do triangulo: "); //pedido para inserir o caractere
  scanf("%lf", &altura);                                                   // ler o caractere inserido

  // OBS.: Necessário indicar os endereços -> &x

  //operar valores

  area = base * altura / 2;
  area2 = area * 2;

  //mostrar o valor da area do triangulo
  printf("\nArea do triangulo = (%lf)", area);

  //mostrar o valor da area do triangulo com o dobro da altura
  printf("\nArea do triangulo com o dobro da altura = (%lf)", area2);

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
1.5 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.5 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/