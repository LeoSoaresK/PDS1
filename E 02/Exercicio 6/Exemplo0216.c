/*
Exemplo0216 - v2.1. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0216 Exemplo0216.c
Windows: gcc -o Exemplo0216.exe Exemplo0216.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0216
Windows: Exemplo0216
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
    int x = 0;
    int y = 0;

    //identificar
    printf("%s\n", "Exemplo0216 - Programa = v2.6"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%d\n", "x = ", x);
    printf("%s%d\n", "y = ", y);

    // OBS.: O formato para int--> %d

    //ler do teclado
    printf("\nEntrar com dois valores inteiros, para testar se sao par ou impar"); //pedido para inserir o caractere

    printf("\nInserir primeiro valor: "); //pedido para inserir o caractere
    scanf("%d", &x);                      // ler o caractere inserido, armazenar em x

    printf("\nInserir segundo valor: "); //pedido para inserir o caractere
    scanf("%d", &y);                     // ler o caractere inserido, armazenar em y

    // OBS.: Necessário indicar os endereços -> &x, &y

    if (x % 2 == 0) //testar se o resto da divisao do primeiro numero por 2 e igual a zero
    {
        if (y % 2 == 0) //testar se o resto da divisao do segundo numero por 2 e igual a zero
        {
            printf("\nO numero (%d) e o numero (%d) sao pares", x, y);
        }
        else //caso o resto da divisao do segundo numero por 2 e diferente de zero
        {
            printf("\nO numero (%d) e par e o numero (%d) e impar", x, y);
        }
    }

    else //caso o resto da divisao do primeiro numero por 2 e diferente de zero
    {
        if (y % 2 == 0) //testar se o resto da divisao do segundo numero por 2 e igual a zero
        {
            printf("\nO numero (%d) e impar e o numero (%d) e par", x, y);
        }
        else //caso o resto da divisao do segundo numero por 2 e diferente de zero
        {
            printf("\nO numero (%d) e o numero (%d) sao impares", x, y);
        }
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