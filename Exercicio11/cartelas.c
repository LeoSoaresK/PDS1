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

void main()
{
    FILE *arq = fopen("cartelas.txt", "r");

    int n1, n2, n3, n4, n5, n6;
    int acertos = 0;

    int vencedores = 0, quina = 0, quadra = 0, lost = 0;

    // fscanf(arq, "\n %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
    // printf("\n%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);

    while (feof(arq) == 0)
    {
        fscanf(arq, "\n %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

        // Mega
        if (n1 == 6 || n1 == 9 || n1 == 22 || n1 == 23 || n1 == 48 || n1 == 52)
            acertos++;

        if (n2 == 6 || n2 == 9 || n2 == 22 || n2 == 23 || n2 == 48 || n2 == 52)
            acertos++;

        if (n3 == 6 || n3 == 9 || n3 == 22 || n3 == 23 || n3 == 48 || n3 == 52)
            acertos++;

        if (n4 == 6 || n4 == 9 || n4 == 22 || n4 == 23 || n4 == 48 || n4 == 52)
            acertos++;

        if (n5 == 6 || n5 == 9 || n5 == 22 || n5 == 23 || n5 == 48 || n5 == 52)
            acertos++;

        if (n6 == 6 || n6 == 9 || n6 == 22 || n6 == 23 || n6 == 48 || n6 == 52)
            acertos++;

        if (acertos == 6)
            vencedores++;

        if (acertos == 5)
            quina++;

        if (acertos == 4)
            quadra++;

        acertos = 0;

        // Lost
        if (n1 == 4 || n1 == 8 || n1 == 15 || n1 == 16 || n1 == 23 || n1 == 42)
            acertos++;

        if (n2 == 4 || n2 == 8 || n2 == 15 || n2 == 16 || n2 == 23 || n2 == 42)
            acertos++;

        if (n3 == 4 || n3 == 8 || n3 == 15 || n3 == 16 || n3 == 23 || n3 == 42)
            acertos++;

        if (n4 == 4 || n4 == 8 || n4 == 15 || n4 == 16 || n4 == 23 || n4 == 42)
            acertos++;

        if (n5 == 4 || n5 == 8 || n5 == 15 || n5 == 16 || n5 == 23 || n5 == 42)
            acertos++;

        if (n6 == 4 || n6 == 8 || n6 == 15 || n6 == 16 || n6 == 23 || n6 == 42)
            acertos++;

        if (acertos == 6)
            lost++;

        acertos = 0;
    }

    printf("\nVencedores: %d", vencedores);
    printf("\nQuinas: %d", quina);
    printf("\nQuadras: %d", quadra);
    printf("\nLost: %d", lost);

    fclose(arq);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
