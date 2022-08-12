/*Para executar, utilize os comandos " gcc abreviacao.c -o abreviacao " // "abreviacao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

/*

    */

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    char linha[128];
    int i = 0;

    printf("\nInsira seu nome completo: ");
    fgets(linha, 128, stdin);

    printf("%c. ", linha[i]);

    for (i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
    {
        if (linha[i] == ' ')
        {
            i++;
            printf("%c. ", linha[i]);
        }
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
