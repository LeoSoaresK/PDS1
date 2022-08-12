/*
Exemplo0213 - v2.3. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0213 Exemplo0213.c
Windows: gcc -o Exemplo0213.exe Exemplo0213.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0213
Windows: Exemplo0213
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

    //identificar
    printf("%s\n", "Exemplo0213 - Programa = v2.3"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%d\n", "x = ", x);

    // OBS.: O formato para int--> %d

    //ler do teclado
    printf("\nEntrar com um valor inteiro, para testar se esta dentro do intervalo [25,60]: "); //pedido para inserir o caractere
    scanf("%d", &x);                                                                            // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    if (25 <= x && x <= 60)
    {
        printf("\nO numero (%d) esta dentro do intervalo [25,60]", x);
    }
    else
    {
        printf("\nO numero (%d) nao esta dentro do intervalo [25,60]", x);
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