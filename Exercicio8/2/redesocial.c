/*Para executar, utilize os comandos " gcc media.c -o media " // "media" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h>
#include "redesocial.h"
#include "time.h"

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

int M[NUM_PESSOAS][NUM_PESSOAS];

void inicializar_rede()
{
    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        for (int j = 0; j < NUM_PESSOAS; j++)
        {
            M[i][j] = 0;
        }
    }
}

void adicionar_amizade(int i, int j)
{
    M[i][j] = 1;
    M[j][i] = 1;
}

float random_float()
{
    return (float)rand() / (float)RAND_MAX;
}

void popularRedeSocialAleatoriamente(float P)
{
    float aux;
    inicializar_rede();

    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        for (int j = i+1; j < NUM_PESSOAS; j++)
        {
            aux = random_float();

            if (aux < P)
            {
                adicionar_amizade(i,j);
            }
        }
    }
}

void imprimirRedeSocial()
{
    for (int i = 0; i < NUM_PESSOAS; i++)
    {
        for (int j = 0; j < NUM_PESSOAS; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int numAmigosEmComum(int v, int u)
{
    int aux = 0;

    printf("\nOs amigos em comum entre %d e %d sao: ", v, u);

    for (int j = 0; j < NUM_PESSOAS; j++)
    {
        if (M[v][j] == 1 && M[u][j] == 1)
        {
            aux++;
            printf("%d ", j);
        }
    }

    printf("\nO numero de amigos em comum eh: %d", aux);
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    srand(time(NULL));

    // 1 ---------------------------------------------------------------------------------------------------------------------------------

    inicializar_rede;

    imprimirRedeSocial();

    getchar();
    printf("\n\n");

    // 2 ---------------------------------------------------------------------------------------------------------------------------------

    adicionar_amizade(3, 2);

    imprimirRedeSocial();

    getchar();
    printf("\n\n");

    // 3 -----------------------------------------------------------------------------------------------------------------------------------

    printf("%f", random_float());

    getchar();
    printf("\n\n");

    // 4 -----------------------------------------------------------------------------------------------------------------------------------

    popularRedeSocialAleatoriamente(0.5);

    imprimirRedeSocial();

    getchar();
    printf("\n\n");

    // 5 -----------------------------------------------------------------------------------------------------------------------------------

    inicializar_rede;
    imprimirRedeSocial();

    // 6 -----------------------------------------------------------------------------------------------------------------------------------

    numAmigosEmComum(2, 3);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
