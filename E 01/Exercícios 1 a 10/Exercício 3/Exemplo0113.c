/*
Exemplo0113 - v1.3. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0113 Exemplo0113.c
Windows: gcc -o Exemplo0113.exe Exemplo0113.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0113
Windows: Exemplo0113
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
    double largura = 0.0;     // largura do retangulo
    double comprimento = 0.0; //comprimento do retangulo
    double area = 0.0;        //area do retangulo
    double area3 = 0.0;       //triplo da area do retangulo

    //identificar
    printf("%s\n", "Exemplo0113 - Programa = v1.3"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "largura = ", largura);
    printf("%s%lf\n", "comprimento = ", comprimento);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("\nEntrar com um valor real, referente a largura do retangulo: "); //pedido para inserir o caractere
    scanf("%lf", &largura);                                                   // ler o caractere inserido

    printf("\nEntrar com um valor real, referente ao comprimento do retangulo: "); //pedido para inserir o caractere
    scanf("%lf", &comprimento);                                                    // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    //operar valores

    area = largura * comprimento;
    area3 = area * 3;

    //mostrar valor da area do retangulo
    printf("\nArea do retangulo = (%f)", area);

    //mostrar valor do triplo da area do retangulo
    printf("\nTriplo da area do retangulo = (%lf)", area3);

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
1.3 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.3 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/