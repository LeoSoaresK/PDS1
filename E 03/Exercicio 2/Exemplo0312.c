/*
Exemplo0312 - v3.12. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0312 Exemplo0312.c
Windows: gcc -o Exemplo0312.exe Exemplo0312.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0312
Windows: Exemplo0312
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int i;
    char texto[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; //caracteres aleatorios para aumentar a capacidade de armazenamento da string

    printf("%s\n", "Exemplo0312 - Programa = v3.12"); // identificar programa
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
            printf("Elemento %d da palavra %s (%c)\n", i, texto, texto[i]);
        }

    } //fim do for
    getch();
    return 0;
} //fim do main