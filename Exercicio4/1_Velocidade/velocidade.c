/*Para executar, utilize os comandos " gcc velocidade.c -o velocidade " // "velocidade" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

float paraMetrosPorSegundo(float x)
{
    float velocidadeMS = x / 3.6;
    return velocidadeMS;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    float velocidadeKM;

    printf("\nInsira uma velocidade em km/h: ");
    scanf("%f", &velocidadeKM);

    printf("\nA velocidade em m/s eh: %f", paraMetrosPorSegundo(velocidadeKM) );

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}