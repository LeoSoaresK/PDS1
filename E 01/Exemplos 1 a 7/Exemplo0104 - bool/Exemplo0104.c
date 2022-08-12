/*
Exemplo0104 - v0.4. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0104 exemplo0104.c
Windows: gcc -o exemplo0104.exe exemplo0104.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0104
Windows: exemplo0104
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> //para valores logicos
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{

    bool x = false; // definir variavel com valor inicial

    printf("%s\n", "Exemplo0104 - Programa = v0.4"); // identificar programa
    printf("%s\n", "Autor: Leo Soares");             //identificar autor
    printf("\n");                                    // mudar de linha

    printf("%s%d\n", "x = ", x); // mostrar valor inicial

    // OBS.: O formato para equivalente inteiro -> %d

    printf("Entrar com um caractere: "); //pedido para inserir o caractere
    scanf("%d", &x);                     // ler o caractere inserido

    // OBS.: Necessario indicar o endereco -> &x

    printf("%s%d\n", "x = ", x); // mostrar valor lido

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