/*Para executar, utilize os comandos " gcc letraC.c -o letraC " // "letraC" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

void soma1(int *ponteiro) //declaracao da funcao, que recebe um endereco de memoria de inteiros
{
    //O endereco da variavel inserida e armazenado no ponteiro

    *ponteiro = *ponteiro + 1; //soma 1 ao conteudo do endereco
}

    //MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int x = 0; //declara x

    soma1(&x); //executa funcao de soma ao endereco de x
    soma1(&x); //executa funcao de soma ao endereco de x
    soma1(&x); //executa funcao de soma ao endereco de x

    // 3 comandos para somar, ao total, 3 unidades ao conteudo de x

    printf("\n%d", x); //print x

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
}