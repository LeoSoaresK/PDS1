/*Para executar, utilize os comandos " gcc abreviacao.c -o abreviacao " // "abreviacao" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492
Data de realização: 30/11/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  // para operacoes matematicas

#include <string.h>
#include <ctype.h>

// FUNCOES ---------------------------------------------------------------------------------------------------------------------------------

int contaRepetidos(char *frase)
{
    int contador = 0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if ((int)frase[i] >= 65 && (int)frase[i] <= 90)
            frase[i] = tolower(frase[i]);
    }

    for (int i = 0; frase[i] != '\0'; i++)
    {
        int j = i + 1;

        while (frase[j] != '\0')
        {
            if (frase[i] == frase[j] && ((int)frase[i] >= 97 && (int)frase[i] <= 112))
            {
                contador++;
                break;
            }
            j++;
        }
    }

    return contador;
}

int classificaFrase(char *frase)
{
    int contador = 0;
    int repetidos = contaRepetidos(frase);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if ((int)frase[i] >= 97 && (int)frase[i] <= 112)
            contador++;
    }

    if (contador - repetidos == 26)
        return 0;

    else if (contador - repetidos < 13)
        return -1;

    else
        return 1;
}

// MAIN ---------------------------------------------------------------------------------------------------------------------------------

void main()
{
    char frase[128];
    int contador = 0;

    printf("\nInsira sua frase: ");
    fgets(frase, 128, stdin);

    printf("\nLetras repetidas: %d", contaRepetidos(frase));
    printf("\nTeste funcao: %d", classificaFrase(frase));

    char letras[26]; // "abcdef..."

    // for (int i = 0; frase[i] != '\0'; i++)
    // {
    //     for (int j = 0; letras[j] != '\0'; j++)
    //     {
    //         if (frase[i] == letras[j])
    //         {
    //             contador++;
    //             letras[j] = ' ';
    //         }
    //     }
    // }

    // FIM ---------------------------------------------------------------------------------------------------------------------------------

    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
}
