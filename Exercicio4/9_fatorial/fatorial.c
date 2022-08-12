/*Para executar, utilize os comandos " gcc fatorial.c -o fatorial " // "fatorial" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

double calcFatorial(int n)
{
    double fatorial = n;

    while (n > 0)
    {
        fatorial = fatorial * n;
        n = n - 1;
    }
    
    return fatorial;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int numero;

    printf("\nInserir um numero inteiro, para calcular seu fatorial: ");
    scanf("%d", &numero);

    double fatorial = calcFatorial(numero) / numero;

    printf("\n\nO fatorial desse numero eh: %lf", fatorial);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}