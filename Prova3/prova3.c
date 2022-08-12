#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// garantia do professor: nenhuma linha de arquivo tera mais que 2000 caracteres
#define MAX_TAM_LINHA 2000

// Questao 2

int tamanhoNumero(int num, int contaDigitos)
{
    if (num != 0)
    {
        contaDigitos++;
        num = num / 10;
        return tamanhoNumero(num, contaDigitos);
    }
    else
    {
        return contaDigitos;
    }
}

int ePalindromo(int num)
{
    int tamanho, a, b, c, x, y;

    if (num != 0)
    {
        tamanho = tamanhoNumero(num, 0);
        a = pow(10, tamanho - 1);
        b = 10;
        c = a * (num / a);

        x = num / a;
        y = num % b;

        if (x == y)
            return ePalindromo((num - c) / b);

        else
            return 0;
    }

    if (num == 0)
        return 1;
}

// Questao 2

int contadorE = 0;
int contadorL = 0;
int contadorF = 0;

int ehElfica(char *str)
{
    int i = strlen(str) - 1;

    if (strlen(str) != 0)
    {
        if ((str[i] == 'e' || str[i] == 'E') && contadorE == 0)
            contadorE++;
        if ((str[i] == 'l' || str[i] == 'L') && contadorL == 0)
            contadorL++;
        if ((str[i] == 'f' || str[i] == 'F') && contadorF == 0)
            contadorF++;

        str[i] = '\0';
    }

    if (i > 0)
        return ehElfica(str);

    else
    {
        if (contadorE == 1 && contadorL == 1 && contadorF == 1)
            return 1;

        else
            return 0;
    }
}

// Questao 3

int aux13 = 0;
int aux23 = 1;

void transformaStr(char *str)
{
    int i = aux13;
    int j = aux23;

    if ((int)str[i] < (int)str[j])
        str[i] = str[j];

    if (j < strlen(str))
    {
        aux23++;
        return transformaStr(str);
    }

    else if (j == strlen(str) && i < strlen(str) - 1)
    {
        aux13++;
        aux23 = aux13 + 1;
        return transformaStr(str);
    }
}

// Questao 4

// FILE *arq = fopen("teste.txt", "r");
// char linha[MAX_TAM_LINHA];

// int id = 0;
// char *nome = NULL;
// float rsg = 0;

// while (!feof(arq))
// {
//     fgets(linha, MAX_TAM_LINHA, arq);
//     // 123\0rafael azevedo,4.1

//     id = atoi(strtok(linha, ","));
//     nome = strtok(NULL, ",");
//     rsg = atof(strtok(NULL, ","));

//     printf("%d %s %f\n", id, nome, rsg);
// }

// fclose(arq);

typedef struct Aluno
{
    char *nome;
    int id;
    float rsg;
} Aluno;

Aluno *buscaRSG(char nome_arquivo[])
{
    FILE *arq = fopen(nome_arquivo, "r");
    char linha[MAX_TAM_LINHA];

    int id = 0, idMAX = 0;
    char *nome = NULL, *nomeMAX = NULL;
    float rsg = 0, rsgMAX = 0;

    while (!feof(arq))
    {
        fgets(linha, MAX_TAM_LINHA, arq);

        id = atoi(strtok(linha, ","));
        nome = strtok(NULL, ",");
        rsg = atof(strtok(NULL, ","));

        if (rsg > rsgMAX)
        {
            idMAX = id;
            nomeMAX = nome;
            rsgMAX = rsg;
        }
    }

    Aluno *aluno;
    aluno = (Aluno *)malloc(sizeof(Aluno));

    aluno->id = idMAX;
    aluno->nome = nomeMAX;
    aluno->rsg = rsgMAX;

    fclose(arq);
    printf("\n");
    return aluno;
}

// Questao 5

void buscaRisco(char *nome_arquivo)
{
    FILE *arq = fopen(nome_arquivo, "r");
    FILE *arm = fopen("risks.txt", "w");
    char linha[MAX_TAM_LINHA];

    int id = 0, ur = 0, pr = 0;
    float tmed;
    float risco;

    while (!feof(arq))
    {
        fgets(linha, MAX_TAM_LINHA, arq);

        id = atoi(strtok(linha, " "));
        ur = atoi(strtok(NULL, " "));
        pr = atoi(strtok(NULL, " "));
        tmed = atof(strtok(NULL, " "));
        risco = (tmed / ur) - pr;

        if (risco > 1)
            fprintf(arm, "%d %.2f\n", id, risco);
    }

    fclose(arq);
    fclose(arm);
}

// Questao 6

int somaVetores(int v[], int n)
{
    if (n == 1)
    {
        return v[0];
    }
    return v[n - 1] + somaVetores(v, n - 1);
}

void freeMatriz(int **M, int n)
{
    if (n == 0)
    {
        free(M);
        return;
    }
    free(M[n - 1]);
    freeMatriz(M, n - 1);
}

int **geraListaAdjacencias(int **M, int n)
{
    int m;
    int aux;

    int **Maux = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
    {
        m = somaVetores(M[i], n);
        Maux[i] = (int *)malloc((m + 1) * sizeof(int));

        for (int j = 0; j < n; j++)
        {
            if (M[i][j] == 1)
            {
                while (aux < n)
                {
                    if (Maux[i][aux] == 0)
                    {
                        Maux[i][aux] = j;
                        aux = 0;
                        break;
                    }
                    else
                    {
                        aux++;
                    }
                }
            }
        }
        Maux[i][m] = -1;
    }

    for (int i = 0; i < n; i++)
    {

    }
    freeMatriz(M, n);
    return Maux;
}

// Para testes
int minha_main()
{
    return -1;
}

int main()
{
    //------------------------
    // int x = 121;
    // printf("%d", tamanhoNumero(x, 0));
    // printf("\n%d", ePalindromo(x));

    //----------------------------
    // char frase[128];
    // int contador = 0;

    // printf("\nInsira sua frase: ");
    // fgets(frase, 128, stdin);

    // printf("\n\nElfica: %d", ehElfica(frase));

    //----------------------------------------
    // char frase[128];
    // int contador = 0;

    // printf("\nInsira sua frase: ");
    // fgets(frase, 128, stdin);

    // transformaStr(frase);

    // printf("\n");
    // for (int i = 0; i < strlen(frase); i++)
    // {
    //     printf("%c", frase[i]);
    // }
    //----------------------------------------

    // char arquivo[] = "teste.txt";

    // Aluno aluno = *buscaRSG(arquivo);

    // printf("%s %d %f", aluno.nome, aluno.id, aluno.rsg);
    //---------------------------------------

    // char arq[] = "monitoring_x.txt";
    // buscaRisco(arq);

    //---------------------------------------

    int **L[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &L[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}