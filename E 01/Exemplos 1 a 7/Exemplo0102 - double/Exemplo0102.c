/*
Exemplo0102 - v0.2. - 31/03/2021
Author: Leo Soares
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0102 exemplo0102.c
Windows: gcc -o exemplo0102.exe exemplo0102.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0102
Windows: exemplo0102
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{

    // definir dado
    double x = 0.0; // definir variavel com valor inicial

    // identificar
    printf("%s\n", "Exemplo0102 - Programa = v0.2");
    printf("%s\n", "Autor: Leo Soares");
    printf("\n"); // mudar de linha

    // mostrar valor inicial
    printf("%s%lf\n", "x = ", x);

    // OBS.: O formato para double -> %lf

    // ler do teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &x);

    // OBS.: Necessario indicar o endereco -> &

    // mostrar valor lido
    printf("%s%lf\n", "x = ", x);

    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return (0);    // voltar ao SO (sem erros)

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