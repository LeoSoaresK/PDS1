/*Para executar, utilize os comandos " gcc abreviacao.c -o abreviacao " // "abreviacao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

#include <string.h>
#include <ctype.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

int calculaOperacao(char str1[], char str2[])
{
    int i = 0;
    int contador = 0;

    if (strlen(str1) < strlen(str2))
    {
        for (int i = strlen(str1); i < strlen(str2); i++)
        {
            str1[i] = ' ';
        }
    }

    while (i < strlen(str2))
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] == ' ')
            {
                str1[i] = 'a';
            }
            else
            {
                (int)str1[i]++;

                if (str1[i] == '{')
                    str1[i] = ' ';
            }
            contador++;
        }
        else
            i++;
    }

    return contador;
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    char str1[128] = "cb";
    char str2[128] = "bda";

    printf("%d", calculaOperacao(str1, str2));

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
