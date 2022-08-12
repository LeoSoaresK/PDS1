#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// garantia do professor: nenhuma linha de arquivo tera mais que 2000 caracteres
#define MAX_TAM_LINHA 2000

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

int main()
{
    char arquivo[] = "teste.txt";

    Aluno a = *buscaRSG(arquivo);
    printf("\n\n%s %d %f", a.nome, a.id, a.rsg);

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}