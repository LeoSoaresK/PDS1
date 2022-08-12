/*
teste1 - v2.1. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o teste1 teste1.c
Windows: gcc -o teste1.exe teste1.c
Para executar em terminal (janela de comandos):
Linux : ./teste1
Windows: teste1
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

    char x = '_'; //definir variavel com valor inicial

    //identificar
    printf("%s\n", "teste1 - Programa = v2.1"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");        //identificar autor
    printf("\n");                               // mudar de linha

    //mostrar valores iniciais
    printf("%s%c\n", "x = ", x);

    // OBS.: O formato para int--> %d

    //ler do teclado
    printf("\nEntrar com um caractere, para testar se e maiusculo ou minusculo: "); //pedido para inserir o caractere
    scanf("%c", &x);                                                                // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    if ('a' <= x && x <= 'z')
    {
        printf("\n(%c) e minusculo", x);
    }

    if ('A' <= x && x <= 'Z')
    {
        printf("\n(%c) e maiusculo", x);
    }

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