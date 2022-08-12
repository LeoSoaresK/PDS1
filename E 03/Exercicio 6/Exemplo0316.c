/*
Exemplo0316 - v3.16. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0316 Exemplo0316.c
Windows: gcc -o Exemplo0316.exe Exemplo0316.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0316
Windows: Exemplo0316
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void) //acao principal
{
    int i;
    char texto[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; //caracteres aleatorios para aumentar a capacidade de armazenamento da string

    printf("%s\n", "Exemplo0316 - Programa = v3.16"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");              //identificar autor

    printf("\nEntrar com um cadeia de caracteres, para identificar os digitos: "); //pedido para inserir palavra
    scanf("\n%s", &texto);                                                         //escanear a palavra digitada

    printf("\nPalavra = %s\n", texto); //apresentar a palavra digitada
    printf("\n");

    for (i = 0; i <= strlen(texto); i++) //percorrer a string, letra por letra

    {
        if ('0' <= texto[i] && texto[i] <= '9') //caso seja um numero
        {
            //nao faz nada
        }

        else
        {
            if ('a' <= texto[i] && texto[i] <= 'z') //caso seja minuscula
            {
                //nao faz nada
            }

            else
            {
                if ('A' <= texto[i] && texto[i] <= 'Z') //caso seja maiuscula
                {
                    //nao faz nada
                }

                else //caso nao seja numero ou letra
                {
                    printf("O elemento %d da cadeia %s (%c) nao e um numero nem uma letra\n", i, texto, texto[i]);
                }
            }
        }
    } //fim do for
    getch();
    return 0;
} //fim do main