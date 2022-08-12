/*Para executar, utilize os comandos " gcc matriz.c -o matriz " // "matriz" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include "random.h"

#define limite 100

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int m, n, k;
    int matriz[limite][limite];

    srand(time(NULL));

    while (m == 0 || m > 100) // pedido para inserir numero de linhas
    {
        printf("\nInsira o numero de linhas da matriz: ");
        scanf("%d", &m);

        if (m > limite)
        {
            printf("\nValor invalido. Favor inserir um valor menor que 100.\n");
        }

        fflush(stdin); // limpar a entrada de dados
    }

    while (n == 0 || n > 100) // pedido para inserir numero de colunas
    {
        printf("\nInsira o numero de colunas da matriz: ");
        scanf("%d", &n);

        if (n > limite)
        {
            printf("\nValor invalido. Favor inserir um valor menor que 100.\n");
        }

        fflush(stdin); // limpar a entrada de dados
    }

    while (k == 0 || k > 100) // pedido para inserir numero de colunas
    {
        printf("\nInsira o limite para os valores das celulas da matriz: ");
        scanf("%d", &k);

        if (k > limite)
        {
            printf("\nValor invalido. Favor inserir um valor menor que 100.\n");
        }

        fflush(stdin); // limpar a entrada de dados
    }

    // QUESTAO 1.1 ------------------------------------------------------------------------------------------------------------------------------

    printf("\n\n>>QUESTAO 1.1\n");

    printf("\nA matriz gerada foi: \n\n");

    int linha = 0;  //  |
    int coluna = 0; //  --

    while (linha < m)
    {
        while (coluna < n)
        {
            matriz[linha][coluna] = randInt(1, k);
            printf("%d ", matriz[linha][coluna]);
            coluna++;
        }
        printf("\n");
        linha++;
        coluna = 0;
    }

    getchar();

    // QUESTAO 1.2 --------------------------------------------------------------------------------------------------------------------------------

    printf("\n\n>>QUESTAO 1.2\n");

    linha = 0;
    coluna = 0;

    while (linha < m)
    {
        while (coluna < n)
        {
            if (matriz[linha][coluna] == matriz[linha][coluna + 1] && matriz[linha][coluna] == matriz[linha][coluna + 2]) // Testar igualdade entre colunas (--)
            {
                matriz[linha][coluna] = 0;
                matriz[linha][coluna + 1] = 0;
                matriz[linha][coluna + 2] = 0;
            }

            if (matriz[linha][coluna] == matriz[linha + 1][coluna] && matriz[linha][coluna] == matriz[linha + 2][coluna]) // Testar igualdade entre linhas ( | )
            {
                matriz[linha][coluna] = 0;
                matriz[linha + 1][coluna] = 0;
                matriz[linha + 2][coluna] = 0;
            }

            coluna++;
        }

        linha++;
        coluna = 0;
    }

    printf("\nTestar para igualdade entre 3 casas adjacentes: \n\n");

    linha = 0;
    coluna = 0;

    while (linha < m) // Printar matriz
    {
        while (coluna < n)
        {
            printf("%d ", matriz[linha][coluna]);
            coluna++;
        }
        printf("\n");
        linha++;
        coluna = 0;
    }

    getchar();

    // QUESTAO 1.3 --------------------------------------------------------------------------------------------------------------------------------

    printf("\n\n>>QUESTAO 1.3");

    linha = 0;
    coluna = 0;

    int contador = 0;

    while (linha < m)
    {
        while (coluna < n)
        {
            if (matriz[linha][coluna] == 0)
            {
                contador = contador + 1;
            }

            coluna++;
        }

        coluna = 0;
        linha++;
    }

    printf("\n\nO numero de zeros na matriz alterada eh: %d\n", contador);

    getchar();

    // QUESTAO 1.4 --------------------------------------------------------------------------------------------------------------------------------

    printf("\n\n>>QUESTAO 1.4\n\n");
    printf("Passar zeros para cima\n\n");

    linha = 0;
    coluna = 0;
    contador = 0;

    int armazenar[100];
    int aux = 0;

    while (coluna < n) // passar para a coluna do lado
    {
        while (linha < m) // passar para a linha de baixo
        {
            if (matriz[linha][coluna] == 0) // armazenar zeros em contador
            {
                contador++;
            }
            if (matriz[linha][coluna] != 0) // armazenar termos diferentes de zero em vetor
            {
                armazenar[aux] = matriz[linha][coluna];
                aux++;
            }
            linha++;
        }

        linha = 0;
        aux = 0;

        while (linha < contador) // mudar os primeiros termos da matriz para zero
        {
            matriz[linha][coluna] = 0;
            linha++;
        }

        while (linha < m) // mudar termos seguintes
        {
            matriz[linha][coluna] = armazenar[aux];
            aux++;
            linha++;
        }

        linha = 0;
        aux = 0;
        contador = 0;

        coluna++;
    }

    linha = 0;
    coluna = 0;
    aux = 0;
    contador = 0;

    while (linha < m) // printar matriz
    {
        while (coluna < n)
        {
            printf("%d ", matriz[linha][coluna]);
            coluna++;
        }
        printf("\n");
        linha++;
        coluna = 0;
    }

    getchar(); // aguardar por ENTER

    // QUESTAO 1.5 --------------------------------------------------------------------------------------------------------------------------------

    printf("\n\n>>QUESTAO 1.5\n\n");

    linha = 0;
    coluna = 0;
    aux = 0;
    contador = 0;

    while (contador == 0)
    {
        while (linha < m) // iniciar procedimento para transformar casas adjacentes
        {
            while (coluna < n)
            {
                if (matriz[linha][coluna] != 0) // evitar casas que valem 0
                {
                    if (matriz[linha][coluna] == matriz[linha][coluna + 1] && matriz[linha][coluna] == matriz[linha][coluna + 2]) // Testar igualdade entre colunas (--)
                    {
                        matriz[linha][coluna] = 0;
                        matriz[linha][coluna + 1] = 0;
                        matriz[linha][coluna + 2] = 0;
                        contador = contador + 3;
                    }

                    if (matriz[linha][coluna] == matriz[linha + 1][coluna] && matriz[linha][coluna] == matriz[linha + 2][coluna]) // Testar igualdade entre linhas ( | )
                    {
                        matriz[linha][coluna] = 0;
                        matriz[linha + 1][coluna] = 0;
                        matriz[linha + 2][coluna] = 0;
                        contador = contador + 3;
                    }
                }

                coluna++;
            }

            linha++;
            coluna = 0;
        }

        linha = 0; // zerar variaveis
        coluna = 0;
        aux = 0;

        printf("Foram encontrados %d novos zeros\n\n", contador); // printar quantidade de novos zeros

        if (contador == 0) // testar novos zeros
        {
            printf("Operacao encerrada");
            break;
            getchar();
        }

        else
        {
            while (linha < m) // printar matriz
            {
                while (coluna < n)
                {
                    printf("%d ", matriz[linha][coluna]);
                    coluna++;
                }
                printf("\n");
                linha++;
                coluna = 0;
            }
        }

        getchar(); // aguardar por ENTER

        printf("\n\nPassar zeros para cima\n\n");

        linha = 0; // zerar variaveis
        coluna = 0;
        aux = 0;
        contador = 0;

        while (coluna < n) // passar para a coluna do lado
        {
            while (linha < m) // passar para a linha de baixo
            {
                if (matriz[linha][coluna] == 0) // armazenar zeros em contador
                {
                    contador++;
                }
                if (matriz[linha][coluna] != 0) // armazenar termos diferentes de zero em vetor
                {
                    armazenar[aux] = matriz[linha][coluna];
                    aux++;
                }
                linha++;
            }

            linha = 0;
            aux = 0;

            while (linha < contador) // mudar os primeiros termos da matriz para zero
            {
                matriz[linha][coluna] = 0;
                linha++;
            }

            while (linha < m) // mudar termos seguintes
            {
                matriz[linha][coluna] = armazenar[aux];
                aux++;
                linha++;
            }

            linha = 0;
            aux = 0;
            contador = 0;

            coluna++;
        }

        linha = 0; // zerar variaveis
        coluna = 0;
        aux = 0;
        contador = 0;

        while (linha < m) // printar matriz
        {
            while (coluna < n)
            {
                printf("%d ", matriz[linha][coluna]);
                coluna++;
            }
            printf("\n");
            linha++;
            coluna = 0;
        }

        printf("\n\nNovo teste\n\n");

        linha = 0; // zerar variaveis
        coluna = 0;
        aux = 0;
        contador = 0;

        getchar(); // aguardar por ENTER
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
