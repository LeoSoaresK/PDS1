/*Para executar, utilize os comandos " gcc passagem.c -o passagem " // "passagem" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas

void troca(float *end_valor1, float *end_valor2) //declaracao da funcao troca
{

    float aux = *end_valor2;   //variavel auxiliar para armazenar o valor 2
    *end_valor2 = *end_valor1; //substituir o valor 2 pelo valor 1
    *end_valor1 = aux;         //substituir o valor 1 pelo antigo valor 2, armazenado em aux
}

    //MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    float x, y; //declarar floats

    scanf("%f %f", &x, &y); //atribuir valores para X e para Y, respectivamente
                            //OBS: Digitar ambos na mesma linha, separados por um espaço

    troca(&x, &y); //implementacao da funcao troca

    printf("\nx = %f\ny = %f", x, y); //printar x e y

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
