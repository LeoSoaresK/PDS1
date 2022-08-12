/*Para executar, utilize os comandos " gcc fibonacci.c -o fibonacci " // "fibonacci" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include <stdlib.h>
#include <time.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + random(max - min + 1);
}

int rolaDados()
{
    return randInt(1, 6) + randInt(1, 6) + randInt(1, 6);
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    srand(time(NULL));

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
