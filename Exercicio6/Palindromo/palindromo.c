/*Para executar, utilize os comandos " gcc palindromo.c -o palindromo " // "palindromo" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

//FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    char string[128];
    char letra;
    int i = 0;
    int j = 0;
    int meio;
    int palin = 1;

    printf("\nDigite uma string: ");

    do
    {
        scanf("%c", &letra);

        if (letra >= 97 && letra <= 122)
        {
            letra = letra - 32;
        }

        string[i] = letra;
        i++;

    } while (letra != '\0' && letra != '\n');

    j = i - 2;
    meio = j / 2;
    i = 0;

    while (j >= meio)
    {
        if (string[j] != string[i])
        {
            printf("Nao eh um palindromo");
            palin = 0;
            break;
        }
        j--;
        i++;
    }
    if (palin == 1)
    {
        printf("Eh um palindromo");
    }

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}