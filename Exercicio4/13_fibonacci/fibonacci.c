/*Para executar, utilize os comandos " gcc fibonacci.c -o fibonacci " // "fibonacci" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int enesimoFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int resultado;
    int i = 3;

    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            if (n >= 3)
            {
                while (i <= n)
                {
                    resultado = a + b;
                    a = b;
                    b = resultado;
                    i = i + 1;
                }
            }
        }
    }
    return resultado;
}
//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int numero;
    printf("\nDigite um numero n para obter o enesimo termo da sequencia de fibonacci: ");
    scanf("%d", &numero);

    printf("\n\nO enesimo termo da sequencia de fibonacci eh: %d", enesimoFibonacci(numero));

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}