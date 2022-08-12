/*Para executar, utilize os comandos " gcc pesoaperder.c -o pesoaperder " // "pesoaperder" no CMD

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
    float peso;

    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);
    fflush(stdin); // limpar a entrada de dados

    printf("\nInsira seu sexo (M para masculino e F para feminino): ");
    scanf("%c", &sexo);
    fflush(stdin); // limpar a entrada de dados

    printf("\nInsira seu peso em Kg: ");
    scanf("%f", &peso);

    float pIdeal = pesoIdeal(altura, sexo);

    printf("\n\nO peso ideal para sua altura eh: %f", pIdeal);

float novoPeso;

    if (peso - pIdeal < 0)
    {
        novoPeso = (peso - pIdeal) * -1;
        printf("\n\nPara alcancar seu peso ideal, voce deve ganhar %f Kg", novoPeso);
    }
    if (peso - pIdeal > 0)
    {
        novoPeso = (peso - pIdeal);
        printf("\n\nPara alcancar seu peso ideal, voce deve perder %f Kg", novoPeso);

    }

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}