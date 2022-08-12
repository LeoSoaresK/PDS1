/*
Exemplo0107 - v0.7. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0107 exemplo0107.c
Windows: gcc -o exemplo0107.exe exemplo0107.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0107
Windows: exemplo0107
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
    double x = 0.0; // definir variavel com valor inicial
    double y = 0.0; // definir variavel com valor inicial
    double z = 0.0; // definir variavel com valor inicial

    //identificar
    printf("%s\n", "Exemplo0107 - Programa = v0.7"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "x = ", x);
    printf("%s%lf\n", "y = ", y);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("Entrar com um valor real: "); //pedido para inserir o caractere
    scanf("%lf", &x);                     // ler o caractere inserido

    printf("Entrar com outro valor real: ");
    scanf("%lf", &y);

    // OBS.: Necessário indicar os endereços -> &x e &y

    //operar valores

    z = pow(x, y); //elevar a base "x" à potência "y"

    //mostrar valor resultante
    printf("%s(%lf)^(%lf) = (%lf)\n", "z = ", x, y, z);

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