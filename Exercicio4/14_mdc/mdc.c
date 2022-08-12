/*Para executar, utilize os comandos " gcc mdc.c -o mdc " // "mdc" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int mdc(int a, int b)
{
    int i = 1;
    int mdc;

    while (i <= a || i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            mdc = i;
        }
        i = i + 1;
    }

    return mdc;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int a, b;

    printf("\nDigite dois numeros inteiros para calcular seu MDC\n");

    printf("\na = ");
    scanf("%d", &a);
    fflush(stdin); // limpar a entrada de dados

    printf("b = ");
    scanf("%d", &b);
    fflush(stdin); // limpar a entrada de dados

    printf("\nO MDC dos numeros %d e %d eh: %d", a, b, mdc(a, b));

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}