/*Para executar, utilize os comandos " gcc intercalar.c -o intercalar " // "intercalar" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

#define max_elementos 10
#define max_elementos2 20

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int x[max_elementos], y[max_elementos], z[max_elementos2];
    int i, j = 0;

    for (i = 0; i < max_elementos; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < max_elementos; i++)
    {
        scanf("%d", &y[i]);
    }

    i = 0;

    for (j = 0; j <= max_elementos2; j++)
    {
        z[j] = x[i];
        j++;
        z[j] = y[i];
        i++;
    }

    for (j = 0; j <= max_elementos2; j++)
    {
        printf("%d ", z[j]);
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
