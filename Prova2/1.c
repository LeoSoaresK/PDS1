#include <stdio.h>
#include <stdlib.h>

#define TAM 8 

int rand01(int n) // funcao para gerar um numero aleatorio de 0 ate n-1
{
    return rand() % n;
}

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + rand01(max - min + 1);
}

//nao mude a ordem do struct!!!
typedef struct Jogador {

	int id;
	int num_blocos;
	int num_navios;
	int M[TAM][TAM];	

} Jogador;

//1
void initJogador(Jogador *jogador, int id, int num_blocos) {
    
    // ID
    jogador->id = id;

    // num_blocos
    if (num_blocos <= 0 || num_blocos > 64)
    {
        jogador->num_blocos = 20;
    }
    else
    {
        jogador->num_blocos = num_blocos;
    }
    
    // num_navios
    jogador->num_navios = 0;


    // matriz
    for (int m = 0; m < TAM; m++)
    {
        for (int n = 0; n < TAM; n++)
        {
            jogador->M[m][n] = 0;
        }
    }


}

//2
int insereNavio(Jogador *jogador, int linha, int col_ini, int tam) 
{
    // Condicao 1
    if (tam > jogador->num_blocos)
    {
        return 0;
    }

    // Condicao 2
    else if (col_ini + tam > TAM)
    {
        return 0;
    }
    else
    {
        // Condicao 3
        for (int i = 0; i < tam; i++)
        {
            if (jogador->M[linha][col_ini + i] == 1)
            {
                return 0;
            }
        }

        // Colocar navio
        for (int i = 0; i < tam; i++)
        {
            jogador->M[linha][col_ini + i] = 1;
        }
    }
    jogador->num_navios += 1;
    jogador->num_blocos += -tam;
    return 1;
}

//3
void preencheTabuleiro(Jogador *jogador, int modo)
{
    int linha, col_ini, tam;

    if (modo == 0)
    {
        while (jogador->num_blocos > 0)
        {
            scanf("\n%d %d %d", &linha, &col_ini, &tam);
            insereNavio(jogador, linha, col_ini, tam);
        }
    }

    else if (modo != 0)
    {
        while (jogador->num_blocos > 0)
        {
            linha = randInt(1, TAM-1);
            col_ini = randInt(1, TAM-1);
            tam = randInt(1, jogador->num_blocos);
            insereNavio(jogador, linha, col_ini, tam);
        }
    }
}

//4
int ataca(Jogador *defensor, int modo)
{
    int linha, coluna;

    if (modo == 0)
    {
        scanf("\n%d %d", &linha, &coluna);

        if (linha < 0 || linha >= TAM || coluna || 0 || coluna >= TAM)
        {
        }
        else
        {
            if (defensor->M[linha][coluna] == 1)
            {
                defensor->num_navios += -1;
                defensor->M[linha][coluna] = 0;

                for (int i = coluna - 1; i >= 0; i--)
                {
                    if (defensor->M[linha][i] == 1)
                    {
                        defensor->M[linha][i] = 0;
                    }
                    else
                    {
                        break;
                    }
                }

                for (int i = coluna + 1; i < TAM; i++)
                {
                    if (defensor->M[linha][i] == 1)
                    {
                        defensor->M[linha][i] = 0;
                    }
                    else
                    {
                        break;
                    }
                }
                return 1;
            }

            else
            {
                return 0;
            }
        }
    }

    else if (modo != 0)
    {
        linha = randInt(1, TAM - 1);
        coluna = randInt(1, TAM - 1);

        if (defensor->M[linha][coluna] == 1)
        {
            defensor->num_navios += -1;
            defensor->M[linha][coluna] = 0;

            for (int i = coluna - 1; i >= 0; i--)
            {
                if (defensor->M[linha][i] == 1)
                {
                    defensor->M[linha][i] = 0;
                }
                else
                {
                    break;
                }
            }

            for (int i = coluna + 1; M[linha][coluna] != 0; i++)
            {
                if (defensor->M[linha][i] == 1)
                {
                    defensor->M[linha][i] = 0;
                }
                else
                {
                    break;
                }
            }
            return 1;
        }

        else
        {
            return 0;
        }
    }
}


// 5
int simulaJogo(int modo, int num_blocos)
{
    Jogador jogador1;
    Jogador jogador2;

    initJogador(&jogador1, 1, num_blocos);
    initJogador(&jogador2, 2, num_blocos);

    preencheTabuleiro(&jogador1, modo);
    preencheTabuleiro(&jogador2, modo);

    while (jogador1.num_navios > 0 && jogador2.num_navios > 0)
    {
        ataca(&jogador1, modo);
        
        if (jogador1.num_navios == 0)
        {
            break;
        }
        
        ataca(&jogador2, modo);
    }

    if (jogador1.num_navios > jogador2.num_navios)
    {
        return 1;
    }

    else if (jogador2.num_navios > jogador2.num_navios)
    {
        return 2;
    }
}

//6
int classificaFrase(char *frase) {
    //seu código aqui
    return -1;
}

//7
int calculaOperacao(char string1[], char string2[]) {
    //seu código aqui
    return -1;
}


//função para simular uma main. Detalhes no enunciado da prova.
void minha_main() {
    
}