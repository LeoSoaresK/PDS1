/*Para executar, utilize os comandos " gcc fibonacci.c -o fibonacci " // "fibonacci" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include <stdlib.h>
#include <time.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

int numero = 0;
int contador = 0;
int contadorN[6];

int contadorLost;
int contadorLostTotal;

void main()
{
    FILE *arq = fopen("cartelas.txt", "r");

    for (int i = 0; i < 1000000; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            fscanf(arq, "%d ", &numero);

            if (numero == 6 || numero == 9 || numero == 22 || numero == 23 || numero == 48 || numero == 52)
            {
                contador++;
            }
            else
            {
                break;
            }
        }

        for (int j = 0; j < 6; j++)
        {
            fscanf(arq, "%d ", &numero);

            if (numero == 4 || numero == 8 || numero == 15 || numero == 16 || numero == 23 || numero == 42)
            {
                contadorLost++;
            }
            else
            {
                break;
            }
        }

        switch (contador)
        {
        case 0:
            contadorN[0]++;
            break;
        case 1:
            contadorN[1]++;
            break;
        case 2:
            contadorN[2]++;
            break;
        case 3:
            contadorN[3]++;
            break;
        case 4:
            contadorN[4]++;
            break;
        case 5:
            contadorN[5]++;
            break;
        case 6:
            contadorN[6]++;
            break;
        }

        if (contadorLost == 6)
            contadorLostTotal++;

        contador = 0;
        contadorLost = 0;
        fscanf(arq, "\n");
    }

    printf("\nO numero de jogadores sem acertos foi: %d", contadorN[0]);
    printf("\nO numero de jogadores com 1 acertos foi: %d", contadorN[1]);
    printf("\nO numero de jogadores com 2 acertos foi: %d", contadorN[2]);
    printf("\nO numero de jogadores com 3 acertos foi: %d", contadorN[3]);
    printf("\nO numero de jogadores com 4 acertos foi: %d", contadorN[4]);
    printf("\nO numero de jogadores com 5 acertos foi: %d", contadorN[5]);
    printf("\nO numero de jogadores com 6 acertos foi: %d", contadorN[6]);

    printf("\n\nO numero de jogadores que apostaram nos numeros do seriado Lost foi: %d", contadorLostTotal);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
