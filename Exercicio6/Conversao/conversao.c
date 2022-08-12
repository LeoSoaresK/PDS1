/*Para executar, utilize os comandos " gcc conversao.c -o conversao " // "conversao" no CMD

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

    printf("\nDigite uma linha com caracteres minusculos: ");
    fgets(linha, 128, stdin);

    for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
    {
        if (linha[i] != ' ')
        {
            linha[i] = (int)linha[i] - 32;
        }
    }

    printf("\n\n%s", linha);

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}
