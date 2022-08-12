/*Para executar, utilize os comandos " gcc fibonacci.c -o fibonacci " // "fibonacci" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

#define limite 1000

unsigned long long int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n > 2)
    {
        return fib(n - 1) + fib(n - 2);
    }
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    unsigned long long int n[limite];

    for (int i = 0; i < limite; i++)
    {
        printf("\nEntre com um valor n para testar a n-esima posicao de Fibonacci: ");
        scanf("%llu", &n[i]);

        if (n[i] < 0 || n[i] > 1000)
        {
            printf("\nTermo invalido. Favor inserir um valor entre 0 e 1000");
            printf("\nOperacao encerrada");
            break;
        }

        printf("\nO %lluo termo de fibonacci eh %llu", n[i], fib(n[i]));
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
