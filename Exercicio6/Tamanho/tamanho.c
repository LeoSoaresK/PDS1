/*Para executar, utilize os comandos " gcc tamanho.c -o tamanho " // "tamanho" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

//FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

int main(int argc, char const *argv[])
{

    char linha[128];

    printf("\nDigite uma linha: ");
    fgets(linha, 128, stdin);

    int tam = 0;
    for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
    {
        tam++;
    }

    printf("A linha contem %d caraceteres", tam);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}
