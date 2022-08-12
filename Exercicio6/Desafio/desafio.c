/*Para executar, utilize os comandos " gcc desafio.c -o desafio " // "desafio" no CMD

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
            while (linha[i] == ' ')
            {
                i++;
            }

            if (linha[i] >= 65 && linha[i] <= 90)
            {
                linha[i] = (int)linha[i] + 32;
            }

            if (linha[i] == 'd' && (linha[i + 1] == 'a' || linha[i + 1] == 'e' || linha[i + 1] == 'o'))
            {
                continue;
            }
            
            linha[i] = (int)linha[i] + -32;
            printf("%c. ", linha[i]);
        }
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
