/*Para executar, utilize os comandos " gcc medias.c -o medias " // "medias" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 16/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

float calcMedia(int x, int y, int z, int m)
{
    float aux;
    float resultado;

    if (m == 1)
    {
        resultado = pow(1 * 2 * 3, 0.3333333);
    }
    else
    {
        if (m == 2)
        {
            aux = x + (2 * y) + (3 * z);
            resultado = aux / 6;
        }
        else
        {
            if (m == 3)
            {
                /*
                aux = 1 / (x + 1);
                int aux1 = aux / (y + 1);
                int aux2 = aux1 / z;
                resultado = 3 / aux2;
                */
            }
            else
            {
                if (m == 4)
                {
                    resultado = (x + y + z)/3;
                }
            }
        }
    }

    return resultado;
}

//MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    int a, b, c;
    int media;

    printf("\nInsira um valor para a: ");
    scanf("%d", &a);
    fflush(stdin); // limpar a entrada de dados

    printf("\nInsira um valor para b: ");
    scanf("%d", &b);
    fflush(stdin); // limpar a entrada de dados

    printf("\nInsira um valor para c: ");
    scanf("%d", &c);
    fflush(stdin); // limpar a entrada de dados

    printf("\n\n--CALCULADORA DE MEDIA--\n");

    printf("\n1 = Media geometrica");
    printf("\n2 = Media ponderada");
    printf("\n3 = Media harmonica");
    printf("\n4 = Media aritimetica");

    printf("\n\nInsira um valor de 1 a 4 para a media desejada: ");
    scanf("%d", &media);
    fflush(stdin); // limpar a entrada de dados

    float resultadoMedia = calcMedia(a, b, c, media);

    if (media == 1)
    {
        printf("\n\nA media geometrica dos numeros eh: %f", resultadoMedia);
    }
    else
    {
        if (media == 2)
        {
            printf("\n\nA media ponderada dos numeros eh: %f", resultadoMedia);
        }
        else
        {
            if (media == 3)
            {
                printf("\n\nA media harmonica dos numeros eh: %f", resultadoMedia);
            }
            else
            {
                if (media == 4)
                {
                    printf("\n\nA media aritimetica dos numeros eh: %f", resultadoMedia);
                }
            }
        }
    }

    //FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}