/*Para executar, utilize os comandos " gcc letraB.c -o letraB " // "letraB" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

void main()
{
    int x = 0;

    //Comando tipo*VARIAVEL declara que a variavel armazena endereços de memoria

    int *y;          //declara uma variavel y que armazena enderecos de memoria

    y = &x;          //y armazena endereco de x
    *y = 3;          //armazena 3 no endereco de x
    printf("\n%d", x); //print x

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
}