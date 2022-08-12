/*Para executar, utilize os comandos " gcc inverter.c -o inverter " // "inverter" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int n;
    int x[10];
    int y[10];
    int i;

    printf("Insira uma dimensao para o vetor (max 10): ");
    scanf("%d", &n);

    printf("\nO vetor possui %d coordenadas", n);

    printf("\n\nInsira os valores do vetor: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    n = n - 1;
    i = 0;

    while (n >= 0)
    {
        y[i] = x[n];
        printf("%d ", y[i]);
        i++;
        n--;
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
