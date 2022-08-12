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



int fibn(int n)
{
    if (n >= 0 && n <= 3)
    {
        return 0;
    }
    else
    {
        int i = 4;
        int aux = 5;
        int contador = 1;

        while (i <= n)
        {
            while (i > enesimoFibonacci(aux) && i < enesimoFibonacci(aux + 1) && i != n)
            {
                contador = contador + 1;
                i++;
            }
            if (n == enesimoFibonacci(aux + 1))
            {
                return 0;
                break;
            }
            i++;
            aux++;
        }
        return contador;
    }
}

void main()
{
    int numero;
    int resultado;

    printf("Insira um numero para teste: ");
    scanf("%d", &numero);

    resultado = fibn(numero);

    printf("\n\n %d", resultado);

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}




/*
int fin(int n)
{
    int i = 6;
    int contador = 0;

    if (n >= 0 && n <= 3)
    {
        return 0;
    }

    if (n == 4)
    {
        contador = contador + 1;
    }

    if (n == 5)
    {
        return 0;
    }

    if (n > 5)
    {
        while (i >= enesimoFibonacci(5) && i < enesimoFibonacci(6))
        {
            contador = contador + 1;
            i++;
        }
    }

    if (n == 6)
    {
    }
}

22 15
30  23
*/