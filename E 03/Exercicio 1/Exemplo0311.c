/*
Exemplo0311 - v3.11. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0311 Exemplo0311.c
Windows: gcc -o Exemplo0311.exe Exemplo0311.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0311
Windows: Exemplo0311
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int i;
    char texto[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; //caracteres aleatorios para aumentar a capacidade de armazenamento da string

    printf("%s\n", "Exemplo0311 - Programa = v3.11"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");              //identificar autor

    printf("\nEntrar com um palavra, para testar se as letras sao maiusculas ou minusculas: "); //pedido para inserir palavra
    scanf("\n%s", &texto);                                                                      //escanear a palavra digitada

    printf("\nPalavra = %s\n", texto); //apresentar a palavra digitada
    printf("\n");
    printf("As letras minusculas sao:\n");

    for (i = 0; i <= strlen(texto); i++) //percorrer a string, letra por letra

    {
        if ('a' <= texto[i] && texto[i] <= 'z') //caso seja minuscula
        {
            printf("(%c)\n", texto[i]);
        }

    } //fim do for
    getch();
    return 0;
} //fim do main