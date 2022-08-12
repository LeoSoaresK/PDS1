/*Para executar, utilize os comandos " gcc -c estatistica.c " // "estatistica" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 26/10/2021

*/

#include "estatistica.h"

float formulaCauchy(float x)
{
    float denominador = 3.141592 * (1 + pow(x, 2));
    float c = 1 / denominador; //resultado de cauchy
    return (c);                //retornar resultado
}

float formulaGumbel(float x, float mu, float beta)
{
    float z = (x - mu) / beta;
    float expoente = z + exp(-z);
    float g = 1 / beta * exp(-expoente); //resultado de gumbel
    return (g);                          //retornar resultado
}

float formulaLaplace(float x, float mu, float b)
{
    float expoente = -(fabs(x - mu)) / b;
    float f = 1 / (2 * b) * exp(expoente); //resultado de laplace
    return (f);                            //retornar resultado
}