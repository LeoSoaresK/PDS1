/*Para executar, utilize os comandos " gcc imc.c -o imc " // "imc" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 22/10/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...

double pesoBrutus = 122.0;
double pesoIdealBrutus;
double alturaBrutus = 1.84;
double imcBrutus;
double imcIdealBrutus = 25.0;

double pesoOlivia = 45.0;
double pesoIdealOlivia;
double alturaOlivia = 1.76;
double imcOlivia;
double imcIdealOlivia = 18.5;

int main()
{
    imcBrutus = pesoBrutus / pow(alturaBrutus, 2);

    printf("--FICHA BRUTUS--");
    printf("\n\nPeso: %lf kg", pesoBrutus);
    printf("\nAltura: %lf m", alturaBrutus);
    printf("\nIMC: %lf", imcBrutus);

    pesoIdealBrutus = imcIdealBrutus * pow(alturaBrutus, 2);
    pesoIdealBrutus = pesoBrutus - pesoIdealBrutus;

    printf("\n\nO IMC ideal para Brutus e de %lf e, para alcanca-lo, precisa perder %lf kg", imcIdealBrutus, pesoIdealBrutus);

    imcOlivia = pesoOlivia / pow(alturaOlivia, 2);

    printf("\n\n\n--FICHA OLIVIA--");
    printf("\n\nPeso: %lf kg", pesoOlivia);
    printf("\nAltura: %lf m", alturaOlivia);
    printf("\nIMC: %lf", imcOlivia);

    pesoIdealOlivia = imcIdealOlivia * pow(alturaOlivia, 2);
    pesoIdealOlivia = pesoIdealOlivia - pesoOlivia;

    printf("\n\nO IMC ideal para Olivia e de %lf e, para alcanca-lo, precisa ganhar %lf kg", imcIdealOlivia, pesoIdealOlivia);

    printf("\n");
    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}