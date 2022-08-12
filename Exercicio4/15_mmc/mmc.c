/*Para executar, utilize os comandos " gcc mmc.c -o mmc " // "mmc" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int mmc(int x, int y)
{
    int resto, a, b;

    a = x;
    b = y;

    do
    {
        resto = a % b;
        a = b;
        b = resto;

    } while (resto != 0);

    return (x * y) / a;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int a, b;

    printf("\nDigite dois numeros inteiros para calcular seu MMC\n");

    printf("\na = ");
    scanf("%d", &a);
    fflush(stdin); // limpar a entrada de dados

    printf("b = ");
    scanf("%d", &b);
    fflush(stdin); // limpar a entrada de dados

    printf("\nO MMC dos numeros eh: %d", mmc(a, b));

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}