/*Para executar, utilize os comandos " gcc euler.c -o euler " // "euler" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas


//FUNCOES ---------------------------------------------------------------------------------------------------------------------------------




//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{

double euler = 1;
double denominador = 1;
double i = 1;

while ((1/denominador) >= pow(10,-6))
{
    denominador = denominador * i;
    i++;
    euler = euler + (1/denominador);
}

printf("\nO numero de Euler eh: %lf", euler);


    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}