/*Para executar, utilize os comandos " gcc conceito.c -o conceito " // "conceito" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

//FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int nota;
    char conceito;

    printf("\nInsira a nota do aluno: ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 0:
        conceito = 'F';
        break;

    case 1:
        conceito = 'F';
        break;

    case 2:
        conceito = 'F';
        break;

    case 3:
        conceito = 'F';
        break;

    case 4:
        conceito = 'F';
        break;

    case 5:
        conceito = 'E';
        break;

    case 6:
        conceito = 'D';
        break;

    case 7:
        conceito = 'C';
        break;

    case 8:
        conceito = 'B';
        break;

    case 9:
        conceito = 'A';
        break;

    case 10:
        conceito = 'A';
        break;
    }

    printf("\nO conceito do aluno eh: %c", conceito);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}