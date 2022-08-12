/*
Exemplo0105 - v0.5. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0105 exemplo0105.c
Windows: gcc -o exemplo0105.exe exemplo0105.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0105
Windows: exemplo0105
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> //para valores logicos
#include <string.h>  //para cadeias de caracteres
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    //definir dado
    char x[] = "abc"; // definir variavel com valor inicial

    //identificar
    printf("%s\n", "Exemplo0105 - Programa = v0.5"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valor incial
    printf("%s%s\n", "x = ", x);

    // OBS.: O formato para caracteres -> %s

    //ler do teclado
    printf("Entrar com um caractere: "); //pedido para inserir o caractere
    scanf("%s", x);                      // ler o caractere inserido

    // OBS.: Não indicar o endereço dessa vez -> x

    //mostrar valor lido
    printf("%s%s\n", "z = ", x); // mostrar valor lido

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