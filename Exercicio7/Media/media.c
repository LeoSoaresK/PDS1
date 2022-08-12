/*Para executar, utilize os comandos " gcc media.c -o media " // "media" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include "random.h"

#define limite_numero 100

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    float n[limite_numero];
    float media;
    int j, i;

    srand(time(NULL));

    j = randInt(1, 20);

    for (i = 0; i < j; i++)
    {
        n[i] = randFloat(0, limite_numero);
        printf("\nO %do numero eh: %f", i, n[i]);
        media = media + n[i];
    }

    media = media / i;

    printf("\n\nA media dos numeros eh: %f", media);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
