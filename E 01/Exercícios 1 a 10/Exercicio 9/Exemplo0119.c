/*
Exemplo0119 - v1.9. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0119 Exemplo0119.c
Windows: gcc -o Exemplo0119.exe Exemplo0119.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0119
Windows: Exemplo0119
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
    double raio = 0.0;  //raio do circulo
    double area = 0.0;  //area do circulo
    double area2 = 0.0; //area do circulo com a metade do raio

    //identificar
    printf("%s\n", "Exemplo0119 - Programa = v1.9"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%lf\n", "Raio do circulo = ", raio);

    // OBS.: O formato para double -> %lf

    //ler do teclado
    printf("\nEntrar com um valor real, referente ao raio do circulo: "); //pedido para inserir o caractere
    scanf("%lf", &raio);                                                  // ler o caractere inserido

    // OBS.: Necessário indicar os endereços -> &x

    //operar valores

    area = 2 * (M_PI)*raio;
    area2 = (M_PI)*raio;

    //mostrar o valor da area do circulo
    printf("\nArea do circulo = (%lf)", area);

    //mostrar o valor da area do circulo com a metade do raio

    printf("\nArea do circulo com metade do raio = (%lf)", area2);

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
1.9 __/__ esboco
---------------------------------------------- testes
Versao Teste
1.9 01. ( ___ ) identificacao de programa
leitura e exibicao de inteiro
*/