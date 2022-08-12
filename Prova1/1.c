/*Para executar, utilize os comandos " gcc 1.c -o 1 " // "1" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int quadrante(float x, float y)
{

    if (x == 0 && y == 0)
    {
        return 0;
    }
    else
    {
        if (x == 0)
        {
            return -2;
        }

        if (y == 0)
        {
            return -1;
        }
    }

    if (x > 0)
    {
        if (y > 0)
        {
            return 1;
        }
        if (y < 0)
        {
            return 4;
        }
    }

    if (x < 0)
    {
        if (y > 0)
        {
            return 2;
        }
        if (y < 0)
        {
            return 3;
        }
    }
}

void main()
{
    float x, y;
    float teste;

    printf("\nInsira duas coordenadas, separadas por espaco: "); //pedido p inserir valor
    scanf("%f %f", &x, &y);                                      //coletar valor e armazenar em raio

    teste = quadrante(x, y);

    printf("\n\nO quadrante eh: %d", teste);

    fflush(stdin); // limpar a entrada de dados
    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
}
