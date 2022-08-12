/*Para executar, utilize os comandos " gcc expoente.c -o expoente " // "expoente" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h> // para operacoes matematicas

unsigned long long fast_pow_2(int expoente) //declaracao da funcao fast_pow_2
{
    unsigned long long resultado = pow(2, expoente); //operacao com expoente
    return resultado;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int exp; //declarar variavel para o expoente

    printf("\nInserir um valor inteiro para ser o expoente de 2: "); //pedido de insercao de valor
    scanf("%d", &exp);                                               //armazenar o valor inserido em exp

    printf("\n\n2 elevado a %d resulta em %llu", exp, fast_pow_2(exp));   //print expoente e resultado da potencia


    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}