/*Para executar, utilize os comandos " gcc soma3ou5.c -o soma3ou5 " // "soma3ou5" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int somaNumerosDiv3ou5(int n)
{
    int soma;

    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n % 3 == 0 && n % 5 == 0)
        {
            soma = 0;
        }

        else
        {
            soma = n;
        }
    }

    else
    {
        soma = 0;
    }

    n = n - 1;

    while (n > 0)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            if (n % 3 == 0 && n % 5 == 0)
            {
                soma = soma;
            }

            else
            {
                soma = soma + n;
            }
        }

        else
        {
            soma = soma;
        }
        n = n - 1;
    }
    return soma;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int numero;

    printf("\nInserir um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n\nA soma de todos os numeros menores que %d, divisiveis por 3 ou 5 (mas nao por ambos) eh: %d", numero, somaNumerosDiv3ou5(numero));

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}