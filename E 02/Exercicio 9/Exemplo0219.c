/*
Exemplo0219 - v2.9. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o Exemplo0219 Exemplo0219.c
Windows: gcc -o Exemplo0219.exe Exemplo0219.c
Para executar em terminal (janela de comandos):
Linux : ./Exemplo0219
Windows: Exemplo0219
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
    int z = 0;

    //identificar
    printf("%s\n", "Exemplo0219 - Programa = v2.9"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    //mostrar valores iniciais
    printf("%s%d\n", "x = ", x);
    printf("%s%d\n", "y = ", y);
    printf("%s%d\n", "z = ", z);

    // OBS.: O formato para int--> %d

    //ler do teclado
    printf("\nEntrar com tres valores inteiros, para testar se o primeiro (x) esta entre o segundo (y) e o terceiro (z)"); //pedido para inserir o caractere
    printf("\n1) os tres numeros devem ser diferentes");
    printf("\n2) (y) deve ser menor que (z)");

    printf("\nInserir primeiro valor: "); //pedido para inserir o caractere
    scanf("%d", &x);                      // ler o caractere inserido, armazenar em x

    printf("\nInserir segundo valor: "); //pedido para inserir o caractere
    scanf("%d", &y);                     // ler o caractere inserido, armazenar em y

    printf("\nInserir terceiro valor: "); //pedido para inserir o caractere
    scanf("%d", &z);                      // ler o caractere inserido, armazenar em z

    // OBS.: Necessário indicar os endereços -> &x, &y

    if (z == y)
    {
        printf("\nO numero y (%d) nao deve ser igual a z (%d)", y, z);
    }
    if (z == x)
    {
        printf("\nO numero x (%d) nao deve ser igual a z (%d)", x, z);
    }
    if (y == x)
    {
        printf("\nO numero x (%d) nao deve ser igual a y (%d)", x, y);
    }
    else
    {
        if (z < y)
        {
            printf("\nO numero y (%d) deve ser menor que z (%d)", y, z);
        }
        else
        {
            if (y < x)
            {
                if (x < z)
                {
                    printf("\nO numero (%d) esta entre (%d) e (%d)", x, y, z);
                }
            }

            if (x < y)
            {
                printf("\nO numero (%d) nao esta entre (%d) e (%d)", x, y, z);
            }
            if (z < x)
            {
                printf("\nO numero (%d) nao esta entre (%d) e (%d)", x, y, z);
            }
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