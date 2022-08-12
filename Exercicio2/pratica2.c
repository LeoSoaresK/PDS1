/*Para executar, utilize os comandos " gcc pratica2.c estatistica.o -o pratica2 " // "pratica2" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 26/10/2021

*/

#include "estatistica.h"

int main()
{
    //TESTE CAUCHY

    float x = -2; //variavel de cauchy
    float cauchy = formulaCauchy(x); //chamada de funcao

    printf("Resultado de cauchy para x = %f eh %f", x, cauchy);
    printf("\n\n");

    //TESTE GUMBEL

    float y = 0; //variavel de gumbel
    float mu = 0.5;
    float beta = 2;
    float gumbel = formulaGumbel(y, mu, beta); //chamada de funcao

    printf("Resultado de gumbel para x = %f, mu = %f, beta = %f eh %f", y, mu, beta, gumbel);
    printf("\n\n");

    //TESTE LAPLACE

    float z = -6; //variavel de laplace 
    float mu2 = -5;
    float b = 4;
    float laplace = formulaLaplace(z, mu2, b); //chamada de funcao

    printf("Resultado de laplace para x %f, mu = %f, b = %f eh %f", z, mu, b, laplace);

    printf("\n");
    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}