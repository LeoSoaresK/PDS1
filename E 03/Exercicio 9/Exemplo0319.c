/*
Exemplo0319 - v3.19. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0319 Exemplo0319.c
Windows: gcc -o Exemplo0319.exe Exemplo0319.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0319
Windows: Exemplo0319
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int intervaloA;
    int intervaloB;
    int quantidade;
    int termosAnalisados;

    printf("%s\n", "Exemplo0319 - Programa = v3.19"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");              //identificar autor

    printf("\nEntrar com dois valores inteiros, para estabelecer um intervalo:\n"); //pedido para dois valores inteiros
    scanf("\n%d", &intervaloA);                                                     //escanear o numero digitado e armazenar em A
    scanf("\n%d", &intervaloB);                                                     //escanear o numero digitado e armazenar em B

    printf("\nO intervalo e %d,%d\n", intervaloA, intervaloB); //apresentar a palavra digitada
    printf("\n");

    printf("\nEntrar com um valor inteiro, para estabelecer uma quantidade de digitos a serem analisados dentro do intervalo:\n"); //pedido para dois valores inteiros
    scanf("\n%d", &quantidade);                                                                                                    //escanear o numero digitado e armazenar em quantidade

    printf("\nA quantidade de termos a serem analisados dentro do intervalo %d,%d e (%d)\n", intervaloA, intervaloB, quantidade);
    printf("\n");

    termosAnalisados = intervaloA;

    while (0 < quantidade)
    {

        termosAnalisados = termosAnalisados + 1;

        if (quantidade < intervaloB - intervaloA)
        {
            if (termosAnalisados % 2 == 0)
            {
            }
            else
            {
                printf("%d e impar\n", termosAnalisados);
            }
            quantidade = quantidade - 1;
        }
        else
        {
            printf("Favor inserir uma quantidade que comporta o intervalo estabelecido\n", termosAnalisados);
            quantidade = 0;
        }
    }

    getch();
    return 0;
} //fim do main