/*
Exemplo0106 - v0.6. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0106 exemplo0106.c
Windows: gcc -o exemplo0106.exe exemplo0106.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0106
Windows: exemplo0106
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> //para valores logicos
#include <string.h>  //para cadeias de caracteres
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
  //definir dado
  int x = 0; // definir variavel com valor inicial
  int y = 0; // definir variavel com valor inicial
  int z = 0; // definir variavel com valor inicial

  //identificar
  printf("%s\n", "Exemplo0106 - Programa = v0.6"); // identificar programa
  printf("%s\n", "Autor: Leo Soares");             //identificar autor
  printf("\n");                                    // mudar de linha

  //mostrar valores iniciais
  printf("%s%d\n", "x = ", x);
  printf("%s%d\n", "y = ", y);

  // OBS.: O formato para int -> %d

  //ler do teclado
  printf("Entrar com um valor inteiro: "); //pedido para inserir o caractere
  scanf("%d", &x);                         // ler o caractere inserido

  printf("Entrar com outro valor inteiro: ");
  scanf("%d", &y);

  // OBS.: Necessário indicar os endereços -> &x e &y

  //operar valores

  z = x * y; //guardar em z o produto de z por y

  //mostrar valor resultante
  printf("%s(%d)*(%d) = (%d)\n", "z = ", x, y, z);

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