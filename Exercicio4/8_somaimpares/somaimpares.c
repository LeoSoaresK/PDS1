/*Para executar, utilize os comandos " gcc somaimpares.c -o somaimpares " // "somaimpares" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int somaImpares(int n)
{
    int soma;

    if (n % 2 == 0)
    {
        soma = n - 1;
        n = n - 1;
    }
    else 
    {
        soma = n;
    }

while (n > 0)
{
    n = n - 1;
    
    if (n % 2 == 0)
    {
        soma = soma;
    }
    else
    {
        soma = soma + n;
    }
}
return soma;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int numero;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n\nA soma de todos os impares menores ou iguais a esse numero eh: %d ", somaImpares(numero) );

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}