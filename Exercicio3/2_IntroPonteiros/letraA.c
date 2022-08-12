/*Para executar, utilize os comandos " gcc letraA.c -o letraA " // "letraA" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas

int main()
{
    int inteiro;
    float pontoFlutuante;
    char caractere;

    // Comando &VARIAVEL retorna o endereço acessado pela variavel
    // %p formata o endereço p/ impressao

    printf("\nO endereco acessado pela variavel int eh %p", &inteiro);          //printar endereco int
    printf("\nO endereco acessado pela variavel float eh %p", &pontoFlutuante); //printar endereco float
    printf("\nO endereco acessado pela variavel char eh %p", &caractere);       //printar endereco char

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}