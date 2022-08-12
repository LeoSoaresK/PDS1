/*Para executar, utilize os comandos " gcc maior.c -o maior " // "maior" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int maior3(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else
    {
        if (b > c && b > a)
        {
            return b;
        }
        else
            return c;
    }
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int a, b, c;

    printf("\nInsira um valor para a: ");
    scanf("%d", &a);

    printf("\nInsira um valor para b: ");
    scanf("%d", &b);

    printf("\nInsira um valor para c: ");
    scanf("%d", &c);

    printf("\n\nO maior dos 3 numeros eh %d", maior3(a,b,c) );

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}