/*Para executar, utilize os comandos " gcc conversao.c -o conversao " // "conversao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include "conversao.h"

int main()
{
    //TESTES PARA FUNCAO DA PARTE INTEIRA ------------------------------------------------------------------------------------

    float testeInteiro1 = -3.141592; //teste1
    float testeInteiro2 = 1.987654;  //teste2
    float testeInteiro3 = 12.345543; //teste3

    printf("\n--TESTE PARTE INTEIRA--\n\n"); //cabecalho

    float funcaoParteInteira = parteInteira(testeInteiro1);                                  //implementacao da funcao para 1
    printf(">> A parte inteira do numero (%f) e (%f)\n", testeInteiro1, funcaoParteInteira); //teste1

    funcaoParteInteira = parteInteira(testeInteiro2);                                        //implementacao da funcao para 2
    printf(">> A parte inteira do numero (%f) e (%f)\n", testeInteiro2, funcaoParteInteira); //teste2

    funcaoParteInteira = parteInteira(testeInteiro3);                                          //implementacao da funcao para 3
    printf(">> A parte inteira do numero (%f) e (%f)\n", testeInteiro3, funcaoParteInteira); //teste3


    //TESTES PARA FUNCAO DA PARTE FRACIONARIA ---------------------------------------------------------------------------------

    float testeFracionario1 = -3.141592; //teste1
    float testeFracionario2 = 1.987654;  //teste2
    float testeFracionario3 = 12.345543; //teste3

    printf("\n\n--TESTE PARTE FRACIONARIA--\n\n"); //cabecalho

    float funcaoParteFracionaria = parteFracionaria(testeFracionario1);                                  //implementacao da funcao para 1
    printf(">> A parte fracionaria do numero (%f) e (%f)\n", testeFracionario1, funcaoParteFracionaria); //teste1

    funcaoParteFracionaria = parteFracionaria(testeFracionario2);                                        //implementacao da funcao para 2
    printf(">> A parte fracionaria do numero (%f) e (%f)\n", testeFracionario2, funcaoParteFracionaria); //teste2

    funcaoParteFracionaria = parteFracionaria(testeFracionario3);                                        //implementacao da funcao para 3
    printf(">> A parte fracionaria do numero (%f) e (%f)\n", testeFracionario3, funcaoParteFracionaria); //teste3


    //TESTES PARA DIVISAO DE INTS --------------------------------------------------------------------------------------------------------

    int testeX1 = 10; //numerador teste 1
    int testeY1 = 3;  //denominador teste 1

    int testeX2 = 7;  //numerador teste 2
    int testeY2 = 4;  //denominador teste 2

    int testeX3 = 12; //numerador teste 3
    int testeY3 = 5;  //denominador teste 3

    printf("\n\n--TESTE PARTE DIVISAO DE INTS--\n\n"); //cabecalho

    float funcaoDivInts = divInts(testeX1, testeY1); //implementacao da funcao para 1
    printf(">> A divisao de (%d) por (%d) resulta em (%f)\n", testeX1, testeY1, funcaoDivInts);

    funcaoDivInts = divInts(testeX2, testeY2); //implementacao da funcao para 2
    printf(">> A divisao de (%d) por (%d) resulta em (%f)\n", testeX2, testeY2, funcaoDivInts);

    funcaoDivInts = divInts(testeX3, testeY3); //implementacao da funcao para 3
    printf(">> A divisao de (%d) por (%d) resulta em (%f)\n", testeX3, testeY3, funcaoDivInts);


    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}