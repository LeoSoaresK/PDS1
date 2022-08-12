/*
Exemplo0315 - v3.15. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0315 Exemplo0315.c
Windows: gcc -o Exemplo0315.exe Exemplo0315.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0315
Windows: Exemplo0315
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int i;
    char texto[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; //caracteres aleatorios para aumentar a capacidade de armazenamento da string

    printf("%s\n", "Exemplo0315 - Programa = v3.15"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");              //identificar autor

    printf("\nEntrar com um cadeia de caracteres, para identificar os digitos: "); //pedido para inserir palavra
    scanf("\n%s", &texto);                                            //escanear a palavra digitada

    printf("\nPalavra = %s\n", texto); //apresentar a palavra digitada
    printf("\n");

    for (i = 0; i <= strlen(texto); i++) //percorrer a string, letra por letra

    {
        if ('0' <= texto[i] && texto[i] <= '9') //caso seja um numero
        {
            printf("O elemento %d da cadeia %s (%c) e um numero\n", i, texto, texto[i]);
        }

    } //fim do for
    getch();
    return 0;
} //fim do main
