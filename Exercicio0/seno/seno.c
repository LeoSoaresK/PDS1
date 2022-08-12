/*Para executar, utilize os comandos " gcc seno.c -o seno " // "seno" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 17/10/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>    //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...

double x = 3.14;
double y = 4.13;

int main ()
{
    printf("\n");

    printf("%lf", sin(x) );
    printf("\n");

    printf("\n");

    printf("%lf", sin(y) );
    printf("\n");

    return 0;
}