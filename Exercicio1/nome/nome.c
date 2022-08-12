/*Para executar, utilize os comandos " gcc nome.c -o nome " // "nome" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 22/10/2021

*/

#include <stdio.h>  // para as entradas e saidas
#include <string.h> // para strings de letras

int main(int argc, char *argv[]) //funcao principal
{
    int i;
    char nome[5] = "leo";

    printf("A conversao da string '%s' para ASCII se da por:\n\n", nome);

    for (i = 0; i < strlen(nome); i++) //percorrer a string, letra por letra
    {
        printf("%d ", nome[i]);
    }

    printf("\n");
    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}
