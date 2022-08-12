/*
Exemplo0118 - v1.8. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0118 Exemplo0118.c
Windows: gcc -o Exemplo0118.exe Exemplo0118.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0118
Windows: Exemplo0118
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

    double largura = 0.0;     //largura do paralelepipedo
    double comprimento = 0.0; //comprimento do paralelepipedo
    double altura = 0.0;      //altura do paralelepipedo

    double volume = 0.0; //volume do paralelepipedo

    double largura5 = 0.0;     //largura do paralelepipedo com um quinto dos lados
    double comprimento5 = 0.0; //comprimento do paralelepipedo com um quinto dos lados
    double altura5 = 0.0;      //altura do paralelepipedo com um quinto dos lados

    double volume5 = 0.0; //volume do paralelepipedo com um quinto dos lados

    //identificar
    printf("%s\n", "Exemplo0118 - Programa = v1.8"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "Largura do paralelepipedo = ", largura);
    printf("%s%lf\n", "Comprimento do paralelepipedo = ", comprimento);
    printf("%s%lf\n", "Altura do paralelepipedo = ", altura);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("\nEntrar com um valor real, referente a largura do paralelepipedo: "); //pedido para inserir o caractere
    scanf("%lf", &largura);                                                        // ler o caractere inserido

    printf("\nEntrar com um valor real, referente ao comprimento do paralelepipedo: "); //pedido para inserir o caractere
    scanf("%lf", &comprimento);                                                         // ler o caractere inserido

    printf("\nEntrar com um valor real, referente a altura do paralelepipedo: "); //pedido para inserir o caractere
    scanf("%lf", &altura);                                                        // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    //operar valores

    volume = largura * comprimento * altura;

    //mostrar o valor do volume do paralelepipedo
    printf("\nVolume do paralelepipedo = (%lf)", volume);

    //operar valores

    largura5 = largura / 5;
    comprimento5 = comprimento / 5;
    altura5 = altura / 5;
    volume5 = largura5 * comprimento5 * altura5;

    //mostrar o valor do volume do paralelepipedo com um quinto dos lados
    printf("\nVolume do paralelepipedo com um quinto dos lados = (%lf)", volume5);

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
1.8 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.8 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/