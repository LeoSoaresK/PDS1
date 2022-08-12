/*Para executar, utilize os comandos " gcc rand.c -o rand " // "rand" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

int random(int n) // funcao para gerar um numero aleatorio de 0 ate n-1
{
    return rand() % n;
}

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + random(max - min + 1);
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

int main(int argc, char const *argv[])
{
    unsigned int vetor_contagem[5000];
    unsigned int x;

    unsigned int maior;
    unsigned int quantidadeMaior;

    for (int i = 0; i < 5000; i++)
    {
        for (int i = 0; i < 1000; i++)
        {
            x = randInt(0, 999);
            vetor_contagem[x]++;

            if(vetor_contagem[x] > maior)
            {
                maior = x;
                quantidadeMaior = vetor_contagem[x];
            }
        }
    }

printf("O maior numero foi %d com %d aparicoes", maior, quantidadeMaior);


    printf("\n\n%d", vetor_contagem[999]);

    srand(time(NULL));

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}
