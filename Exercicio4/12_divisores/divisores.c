/*Para executar, utilize os comandos " gcc divisores.c -o divisores " // "divisores" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int numeroDivisores(int n)
{
    int i = 0;
    int aux = 0;

    while (i <= n)
    {
        i = i + 1;

        if (n % i == 0)
        {
            aux = aux + 1;
        }
    }
    return aux;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int numero;
    printf("\nDigite um numero para testar seus divisores: ");
    scanf("%d", &numero);

    printf("\n\nO numero de divisores do numero eh: %d", numeroDivisores(numero) );

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}