/*Para executar, utilize os comandos " gcc triangulo.c -o triangulo " // "triangulo" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

//FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

void triangulo(int n)
{
    int inicio = 1;
    int fim = 2;
    int numero = 1;

    int contador = 1;

    while (contador <= n)
    {
        printf("\n");
        inicio = 1;
        while (inicio < fim)
        {
            printf("%d ", numero);
            numero++;
            inicio++;
        }

        fim++;
        contador++;
    }
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{

    int n;
    printf("\nInsira um valor enesimo para o triangulo: ");
    scanf("%d", &n);
    triangulo(n);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}