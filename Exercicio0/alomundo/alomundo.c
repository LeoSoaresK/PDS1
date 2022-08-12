/*Para executar, utilize os comandos " gcc alomundo.c -o alomundo " // "alomundo" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 17/10/2021

*/

#include <stdio.h> // para as entradas e saidas

int main(int argc, char *argv[])
{
    printf("\n");
    printf("Alo mundo!");
    printf("\n");

    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}
