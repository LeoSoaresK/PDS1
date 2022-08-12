/*Para executar, utilize os comandos " gcc funcoes.c -o funcoes " // "funcoes" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 03/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

int ddd(unsigned int x) //declaracao da funcao
{
    return x / 100000000; //retornar x dividido por 100 milhoes
}

int soma1SePar(unsigned int x) //declaracao da funcao
{
    return x | 1; //somar 1 ao numero em binario
                  // caso haja 0 no ultimo algarismo, o numero eh par, e sera somado 1 a ele
                  // caso haja 1 no ultimo algarismo, o numero eh impar e nao sera somado 1
}

int parOuImpar(unsigned int x) //declaracao da funcao
{
    return !(x & 1); //comparar o ultimo algarismo do numero binario com 1
                  //caso seja igual, o numero eh impar
                  //caso seja diferente, o numero eh par
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    printf("\n--TESTE DDD--\n");                            //cabecalho
    printf("\nO telefone completo eh 3134095858");          //print telefone
    printf("\nO codigo de area eh: (%d)", ddd(3134095858)); //print ddd


    int numero; //declaracao de variavel pro numero

    printf("\n\n\n--TESTE SOMAR 1--\n");                                    //cabecalho
    printf("\nInserir um numero inteiro para que, caso seja par, somar 1 a ele: "); //pedido pra insercao de numero
    scanf("%d", &numero);                                                   //armazenar na variavel numero
    printf("\nRetorno: (%d)", soma1SePar(numero));                          //print novo numero


    int numero2; //declaracao da variavel pro numero

    printf("\n\n\n--TESTE PAR OU IMPAR--\n");                                  //cabecalho
    printf("\nInserir um numero para testar se eh par ou impar: ");            //pedido pra insercao de numero
    scanf("%d", &numero2);                                                     //armazenar na variavel numero
    printf("\nRetorno, sendo 0 para par e 1 para impar: (%d)", parOuImpar(numero2)); //print par ou impar

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}