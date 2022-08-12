/*Para executar, utilize os comandos " gcc pesoideal.c -o pesoideal " // "pesoideal" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

float pesoIdeal(float h, char s)
{
    if (s == 'M' || s == 'm')
    {
        float PI = (72.7 * h) - 58;
        return PI;
    }

    if (s == 'F' || s == 'f')
    {
        float PI = (62.1 * h) - 44.7;
        return PI;
    }
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    float altura;
    char sexo;

    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);
    fflush(stdin); // limpar a entrada de dados

    printf("\nInsira seu sexo (M para masculino e F para feminino): ");
    scanf("%c", &sexo);
    fflush(stdin); // limpar a entrada de dados

    printf("\n\nO peso ideal para sua altura eh: %f", pesoIdeal(altura, sexo));

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}