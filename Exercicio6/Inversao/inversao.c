/*Para executar, utilize os comandos " gcc inversao.c -o inversao " // "inversao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas
#include <string.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

int main(int argc, char const *argv[])
{

    char linha[128];
    int i;

    printf("\nDigite uma string para inverte-la: ");
    fgets(linha, 128, stdin);

    i = strlen(linha) - 1;

    while (i >= 0)
    {
        printf("%c", linha[i]);
        i--;
    }


    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}
