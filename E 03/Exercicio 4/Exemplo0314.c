/*
Exemplo0314 - v3.14. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0314 Exemplo0314.c
Windows: gcc -o Exemplo0314.exe Exemplo0314.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0314
Windows: Exemplo0314
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int i;
    char texto[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; //caracteres aleatorios para aumentar a capacidade de armazenamento da string

    printf("%s\n", "Exemplo0314 - Programa = v3.14"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");              //identificar autor

    printf("\nEntrar com um palavra, para testar se as letras sao maiusculas ou minusculas: "); //pedido para inserir palavra
    scanf("\n%s", &texto);                                                                      //escanear a palavra digitada

    printf("\nPalavra = %s\n", texto); //apresentar a palavra digitada
    printf("\n");

    for (i = 0; i <= strlen(texto); i++) //percorrer a string, letra por letra

    {
        if ('a' <= texto[i] && texto[i] <= 'z') //caso seja minuscula
        {
            printf("O elemento %d da palavra %s (%c) e minusculo\n", i, texto, texto[i]);
        }

        if ('A' <= texto[i] && texto[i] <= 'Z') //caso seja maiuscula
        {
            printf("O elemento %d da palavra %s (%c) e maiusculo\n", i, texto, texto[i]);
        }
    } //fim do for
    getch();
    return 0;
} //fim do main
