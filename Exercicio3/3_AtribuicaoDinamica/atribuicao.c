/*Para executar, utilize os comandos " gcc atribuicao.c -o atribuicao " // "atribuicao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 02/11/2021

*/

#include <stdio.h> // para as entradas e saidas

void main()
{
    float x, y; //declarar floats

    scanf("%f %f", &x, &y); //atribuir valores para X e para Y, respectivamente
                            //OBS: Digitar ambos na mesma linha, separados por um espaço

    float aux; //declarar armazenamento auxiliar
    float *pX; //criar ponteiro para X
    float *pY; //criar ponteiro para Y

    pX = &x;   //armazenar x em pX
    pY = &y;   //armazenar y em pY
    aux = *pX; //armazenar pX em aux

    *pX = *pY; //substituir o valor de pX pelo valor de pY
    *pY = aux; //susbsituir o valor de pY pelo antigo valor de pX, armazenado em aux

    printf("\nx = %f\ny = %f", x, y); //printar x e y

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
