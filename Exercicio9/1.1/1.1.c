/*Para executar, utilize os comandos " gcc fibonacci.c -o fibonacci " // "fibonacci" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

typedef struct Guerreiro
{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_guerreiro;
} Guerreiro;

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + random(max - min + 1);
}

int rolaDados()
{
    return randInt(1, 6) + randInt(1, 6) + randInt(1, 6);
}

void criaGuerreiro(Guerreiro *guerreiro)
{
    guerreiro->ataque = rolaDados();
    guerreiro->carisma = rolaDados();
    guerreiro->defesa = rolaDados();
    guerreiro->pontos_vida = rolaDados() + rolaDados() + rolaDados();
}

int bonusCarisma(int carisma)
{
    return 0;

    switch (carisma)
    {
    case 18:
        return 3;
        break;

    case 17:
        return 2;
        break;

    case 16:
        return 2;
        break;

    case 15:
        return 1;
        break;

    case 14:
        return 1;
        break;

    case 7:
        return -1;
        break;

    case 6:
        return -1;
        break;

    case 5:
        return -2;
        break;

    case 4:
        return -2;
        break;

    case 3:
        return -3;
        break;
    }
}

void ataca(Guerreiro atacante, Guerreiro defensor)
{
    int golpe = rolaDados() + rolaDados() + rolaDados() + atacante.ataque + bonusCarisma(atacante.carisma);
    int escudo = rolaDados() + rolaDados() + rolaDados() + defensor.defesa + bonusCarisma(defensor.carisma);

    int dano = golpe - escudo;

    if (dano > 0)
        defensor.pontos_vida += -dano;

    if (defensor.pontos_vida < 0)
        defensor.pontos_vida = 0;
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
