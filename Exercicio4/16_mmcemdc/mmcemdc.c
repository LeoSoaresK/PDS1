/*Para executar, utilize os comandos " gcc mmcemdc.c -o mmcemdc " // "mmcemdc" no CMD

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

    printf("\nDigite dois numeros inteiros para calcular seu MMC e MDC \n");

    printf("\na = ");
    scanf("%d", &a);
    fflush(stdin); // limpar a entrada de dados

    printf("b = ");
    scanf("%d", &b);
    fflush(stdin); // limpar a entrada de dados

    if (a <= 0 || b <= 0)
    {

        printf("\nFavor inserir numeros maiores que 0\n");
        printf("\nDigite dois numeros inteiros para calcular seu MMC e MDC \n");

        printf("\na = ");
        scanf("%d", &a);
        fflush(stdin); // limpar a entrada de dados

        printf("b = ");
        scanf("%d", &b);
        fflush(stdin); // limpar a entrada de dados
        
        printf("\nO MMC dos numeros eh: %d", mmc(a, b));
        printf("\nO MDC dos numeros eh: %d", mdc(a, b));
    }
    else
    {
        printf("\nO MMC dos numeros eh: %d", mmc(a, b));
        printf("\nO MDC dos numeros eh: %d", mdc(a, b));
    }

    do
    {
        printf("\nDigite dois numeros inteiros para calcular seu MMC e MDC \n");

        printf("\na = ");
        scanf("%d", &a);
        fflush(stdin); // limpar a entrada de dados

        printf("b = ");
        scanf("%d", &b);
        fflush(stdin); // limpar a entrada de dados

        if (a <= 0 || b <= 0)
        {
            printf("\nUm dos numeros inseridos eh menor ou igual a 0");
            printf("\nOperacao encerrada.");
            break;
        }

        else
        {
            printf("\nO MMC dos numeros eh: %d", mmc(a, b));
            printf("\nO MDC dos numeros eh: %d", mdc(a, b));
        }

    } while (a > 0 && b > 0);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}