/*Para executar, utilize os comandos " gcc produto.c -o produto " // "produto" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include "random.h"

#define TAM_MAX 100

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{

    double u[TAM_MAX], v[TAM_MAX];
    double produto;
    unsigned int n;

        printf("Digite a dimensao dos vetores (ate 100): ");
        scanf("%d", &n);

    printf("Digite os valores de u (Ex: 1 2 3 ... 100): ");

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &u[i]);
    }

    printf("Digite os valores de v (Ex: 1 2 3 ... 100): ");

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

        for (int i = 0; i < n; i++)
    {
        produto += u[i] * v[i];
    }

    printf("O produto escalar eh %lf", produto);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
