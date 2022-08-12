/*Para executar, utilize os comandos " gcc valores.c -o valores " // "valores" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 22/10/2021

*/

#include <stdio.h> // para as entradas e saidas

int main(int argc, char *argv[]) //funcao principal
{
    float a = 3.14159;
    float b = 2.71828;

    printf("Pi = %f", a);
    printf("\n");
    printf("\nEuler = %f", b);

    printf("\n");
    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}
