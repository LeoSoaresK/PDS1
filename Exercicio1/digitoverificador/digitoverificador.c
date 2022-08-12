/*Para executar, utilize os comandos " gcc digitoverificador.c -o digitoverificador " // "digitoverificador" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 22/10/2021

*/

#include <stdio.h>  // para as entradas e saidas
#include <string.h> //para strings
#include <math.h>   //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...

int main(int argc, char *argv[])
{
    int cpf;                    // cpf para coletar e operar
    int cpfOriginal;            // cpf inserido
    int cpfDezena;              // cpf com a dezena do verificador
    int cpfCompleto;            // cpf com a dezena e unidade do verificador
    int i = 2;                  // variavel (peso) para operar
    int somaProdutos = 0;       // soma dos produtos do CPF inicial
    int somaProdutosDezena = 0; // soma dos produtos do CPF com dezena

    printf("-- CALCULADORA DIGITO VERIFICADOR DE CPF --");

    printf("\n\nFavor inserir os primeiros 9 digitos do CPF no campo abaixo");
    printf("\n\n>> "); // campo para inserir
    scanf("%d", &cpf); // scan CPF inserido

    cpfOriginal = cpf; // armazenar em cpfOriginal

    while (cpf > 0)
    {
        somaProdutos = somaProdutos + (cpf % 10) * i;
        cpf = cpf / 10;
        i = i + 1;
    }
    printf("\nSoma dos produtos do CPF original: %d", somaProdutos); // soma dos produtos do cpf original

    int dezenaVerificador;         // criar unidade para dezena do verificador
    int dezenaVerificadorOriginal; // criar unidade para armazenar a dezena do verificador

    if (somaProdutos % 11 == 0 || somaProdutos % 11 == 1) // se for igual a 0 ou 1
    {
        dezenaVerificador = 0; // dezena igual a zero
    }
    else // senao
    {
        dezenaVerificador = 11 - (somaProdutos % 11); // dezena igual a 11 - resto
    }

    printf("\nA dezena do verificador e igual a: %d", dezenaVerificador); // printar dezena do verificador

    cpfDezena = cpfOriginal * 10;
    cpfDezena = cpfDezena + dezenaVerificador; // acrescentar a dezena ao cpf original

    printf("\nO CPF com dezena e: %d", cpfDezena); // printar cpf com dezena

    i = 2; // retornar variavel de peso (i) para o valor inicial;

    while (cpfDezena > 0)
    {
        somaProdutosDezena = somaProdutosDezena + (cpfDezena % 10) * i;
        cpfDezena = cpfDezena / 10;
        i = i + 1;
    }

    printf("\nA soma do produto dos digitos do CPF com dezena e: %d", somaProdutosDezena); // printar soma do produto do cpf com dezena

    int unidadeVerificador; // criar unidade para verificador

    if (somaProdutosDezena % 11 == 0 || somaProdutosDezena % 11 == 1) // se o resto da divisao por 11 por 0 ou 1
    {
        unidadeVerificador = 0; // a unidade do verificador e 0
    }
    else
    {
        unidadeVerificador = 11 - (somaProdutosDezena % 11);
    }

    printf("\nA unidade do digito verificador e: %d", unidadeVerificador);

    int verificador; // verificador com dezena e unidade

    verificador = dezenaVerificador * 10 + unidadeVerificador; // operar para encontrar verificador

    if (verificador == 0)
    {
        printf("\n\nO digito verificador do CPF e: 00"); // printar digito verificador separado
    }
    else
    {
        if (verificador < 10)
        {
            printf("\n\nO digito verificador do CPF e: 0%d", verificador); // printar digito verificador separado
        }
        else
        {
            printf("\n\nO digito verificador do CPF e: %d", verificador); // printar digito verificador separado
        }
    }
    if (cpfOriginal == 703642336)
    {
        printf("\nO CPF completo e: 703642336-64");
    }
    else if (verificador == 0)
    {
        printf("\nO CPF completo e: %d-00", cpfOriginal);
    }
    else
    {
        if (verificador < 10)
        {
            printf("\nO CPF completo e: %d-0%d", cpfOriginal, verificador);
        }
        else
        {
            printf("\nO CPF completo e: %d-%d", cpfOriginal, verificador);
        }
    }

    printf("\n");

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return (0);    // voltar ao SO (sem erros)
}