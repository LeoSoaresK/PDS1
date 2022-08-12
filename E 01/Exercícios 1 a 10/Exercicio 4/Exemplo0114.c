/*
Exemplo0114 - v1.4. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0114 Exemplo0114.c
Windows: gcc -o Exemplo0114.exe Exemplo0114.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0114
Windows: Exemplo0114
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
    double largura = 0.0;  // largura do retangulo
    double largura3 = 0.0; //um terco da largura

    double comprimento = 0.0;  //comprimento do retangulo
    double comprimento3 = 0.0; //um terco do comprimento

    double perimetro3 = 0.0; //perimetro do retangulo com um terco dos lados
    double area3 = 0.0;      //area do retangulo com um terco dos lados

    //identificar
    printf("%s\n", "Exemplo0114 - Programa = v1.4"); // identificar programa
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

    largura3 = largura / 3;
    comprimento3 = comprimento / 3;

    //mostrar valor da largura dividida por 3
    printf("\nUm terco da largura = (%lf)", largura3);

    //mostrar valor do comprimento dividido por 3
    printf("\nUm terco do comprimento = (%lf)", comprimento3);

    //operar valores

    perimetro3 = largura3 + largura3 + comprimento3 + comprimento3;
    area3 = largura3 * comprimento3;

    //mostrar valor do perimetro do retangulo com um terco dos lados

    printf("\nPerimetro do retangulo com um terco dos lados = (%lf)", perimetro3);

    //mostrar valor da area do retangulo com um terco dos lados

    printf("\nArea do retangulo com um terco dos lados = (%lf)", area3);

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
1.4 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.4 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/