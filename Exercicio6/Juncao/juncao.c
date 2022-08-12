/*Para executar, utilize os comandos " gcc juncao.c -o juncao " // "juncao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include <string.h>
#include "random.h"

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

int main(int argc, char const *argv[])
{
    int x[60], y[60], z[120];
    int i = 0, j = 0;

    srand(time(NULL));

    for (i = 0; i < 60; i++)
    {
        x[i] = randInt(0, 365);
        y[i] = randInt(0, 365);
    }

    for (i = 0; i < 60; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\n");
        printf("\n");

    for (i = 0; i < 60; i++)
    {
        printf("%d ", y[i]);
    }

    i = 0;

    while (i < 120)
    {
        z[i] = x[j];
        i++;
        z[i] = y[j];
        i++;
        j++;
    }

    printf("\n");
    printf("\n");

    for (i = 0; i < 120; i++)
    {
        printf("%d ", z[i]);
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}
