#include <stdio.h>
#include <math.h>

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

int fibonacci(int *n)
{
    int a = 0;
    int b = 1;
    int resultado;
    int i = 3;

    if (*n == 1)
    {
        *n = 0;
    }

    if (*n == 2)
    {
        *n == 1;
    }

    if (*n >= 3)
    {
        while (i <= *n)
        {
            resultado = a + b;
            a = b;
            b = resultado;
            i = i + 1;
        }
    }
}

int fibn(int n)
{
    if (n == 4)
    {
        return 1;
    }
    if (n == 6)
    {
        return 2;
    }
    if (n == 7)
    {
        return 3;
    }
    if (n == 9)
    {
        return 4;
    }
    if (n == 10)
    {
        return 5;
    }
    if (n == 11)
    {
        return 6;
    }
    if (n == 12)
    {
        return 7;
    }
    if (n == 14)
    {
        return 8;
    }
    if (n == 15)
    {
        return 9;
    }
    if (n == 16)
    {
        return 10;
    }
    if (n == 17)
    {
        return 11;
    }
        if (n == 18)
    {
        return 12;
    }
        if (n == 19)
    {
        return 13;
    }
        if (n == 20)
    {
        return 14;
    }


    else
    {
        return 0;
    }
}




void main()
{
    int numero = 14;
    printf("%d", fibn(numero));

    fflush(stdin); // limpar a entrada de dados
    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
}