/*
Exemplo0117 - v1.7. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0117 Exemplo0117.c
Windows: gcc -o Exemplo0117.exe Exemplo0117.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0117
Windows: Exemplo0117
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
    double lado = 0.0;   //lado do cubo
    double volume = 0.0; //volume do cubo

    double lado4 = 0.0;   //quadruplo do lado do cubo
    double volume4 = 0.0; //area do cubo com quadruplo do lado

    //identificar
    printf("%s\n", "Exemplo0117 - Programa = v1.7"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "Lado do cubo = ", lado);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("\nEntrar com um valor real, referente ao lado do cubo: "); //pedido para inserir o caractere
    scanf("%lf", &lado);                                               // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    //operar valores

    volume = pow(lado, 3);

    //mostrar o valor do volume do cubo
    printf("\nVolume do cubo = (%lf)", volume);

    //operar valores

    lado4 = lado * 4;
    volume4 = pow(lado4, 3);

    //mostrar o valor do volume do cubo com quadruplo do lado
    printf("\nVolume do cubo com quadruplo do lado = (%lf)", volume4);

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
1.7 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.7 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/