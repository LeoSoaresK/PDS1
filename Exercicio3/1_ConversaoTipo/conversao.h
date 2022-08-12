/*

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/
#include <stdio.h> // para as entradas e saidas
#include <math.h>  //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...

float parteInteira(float x) //Funcao para parte inteira do float
{
    int aux = x;
    return (aux);
}

float parteFracionaria(float x) //Funcao para parte fracionaria do float
{
    float aux = x - (int)x;
    return (aux);
}

float divInts(int x, int y) //Funcao para divisao entre 2 ints, com resultado em float
{
    float aux = (float)x / (float)y;
    return (aux);
}