#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int n) // funcao para gerar um numero aleatorio de 0 ate n-1
{
    return rand() % n;
}

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + random(max - min + 1);
}

float randf() // float aleatorio entre 0 e 1
{
    return (float)rand() / RAND_MAX;
}

float randFloat(float min, float max) // float aleatorio entre min e max
{
    return min + randf() * (max - min);
}