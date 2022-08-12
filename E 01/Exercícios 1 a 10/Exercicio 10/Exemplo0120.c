/*
Exemplo0120 - v2.0. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0120 Exemplo0120.c
Windows: gcc -o Exemplo0120.exe Exemplo0120.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0120
Windows: Exemplo0120
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
    double raio = 0.0;    //raio da esfera
    double raio8 = 0.0;   //tres oitavos do raio da esfera
    double volume = 0.0;  //volume da esfera
    double volume8 = 0.0; //volume da esfera com tres oitavos do raio

    //identificar
    printf("%s\n", "Exemplo0120 - Programa = v2.0"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "Raio da esfera = ", raio);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("\nEntrar com um valor real, referente ao raio da esfera: "); //pedido para inserir o caractere
    scanf("%lf", &raio);                                                 // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    //operar valores

    volume = 4 * (M_PI)*pow(raio, 3) / 3;
    raio8 = raio * 3 / 8;
    volume8 = 4 * (M_PI)*pow(raio8, 3) / 3;

    //mostrar o valor do volume da esfera
    printf("\nVolume da esfera = (%lf)", volume);

    //mostrar o valor do volume da esfera com tres oitavos do raio

    printf("\nVolume da esfera com tres oitavos do raio = (%lf)", volume8);

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
2.0 __/__ esboco
---------------------------------------------- testes
Versao Teste
2.0 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/