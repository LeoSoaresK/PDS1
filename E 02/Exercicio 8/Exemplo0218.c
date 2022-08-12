/*
Exemplo0218 - v2.8. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0218 Exemplo0218.c
Windows: gcc -o Exemplo0218.exe Exemplo0218.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0218
Windows: Exemplo0218
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> //para valores logicos
#include <string.h>  //para cadeias de caracteres
#include <math.h>    //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    //definir dado
    int x = 0;
    int y = 0;

    //identificar
    printf("%s\n", "Exemplo0218 - Programa = v2.8"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%d\n", "x = ", x);
    printf("%s%d\n", "y = ", y);

    // OBS.: O formato para int--> %d

    //ler do teclado
    printf("\nEntrar com dois valores inteiros, para testar sao iguais, menores ou maiores que o outro"); //pedido para inserir o caractere

    printf("\nInserir primeiro valor: "); //pedido para inserir o caractere
    scanf("%d", &x);                      // ler o caractere inserido, armazenar em x

    printf("\nInserir segundo valor: "); //pedido para inserir o caractere
    scanf("%d", &y);                     // ler o caractere inserido, armazenar em y

    // OBS.: Necessário indicar os endereços -> &x, &y

    if (x == y)
    {
        printf("\nOs numeros (%d) e (%d) sao iguais", x, y);
    }
    else
    {
        if (x < y)
        {
            printf("\n O numero (%d) e menor que (%d)", x, y);
        }
        if (y < x)
        {
            printf("\n O numero (%d) e maior que (%d)", x, y);
        }
    }

    //encerrar
    printf("\n\nApertar ENTER para terminar."); //pedido para encerrar
    fflush(stdin);                              // limpar a entrada de dados
    getchar();                                  // aguardar por ENTER
    return (0);                                 // voltar ao SO (sem erros)

} // fim main( )
  /*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/