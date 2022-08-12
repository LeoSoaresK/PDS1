#include <stdio.h>
#include <math.h>

void primo(int *r) //declarar funcao
{
    int contador = 0; //contador de divisores
    int i = 1;        //variavel auxiliar

    do //testar divisores de 1 em 1
    {
        if (*r % i == 0) //se o resto da divisao por i for 0
        {
            contador = contador + 1; //somar 1 ao contador
        }
        i++; //somar 1 a i

    } while (i != *r); //repetir ate i = numero

    if (contador < 2) //se contador < 2
    {
        *r = 1; //numero e primo
    }
    else //se nao
    {
        *r = 0; //nao e primo
    }
}

int primoMaisProx(int n)
{
    if (n < 0)
    {
        return -1;
    }

    if (n == 0)
    {
        return 2;
    }

    if (n == 1)
    {
        return 2;
    }

    int aux = n;
    primo(&aux);

    if (aux == 1)
    {
        return n;
    }

    if (aux == 0)
    {
        int nMaisUm = n + 1; 
        int nMenosUm = n - 1;

        while (aux == 0)
        {
            aux = nMaisUm;                                //teste p n+1
            primo(&aux);                                  //chamda da funcao
            if (aux == 1)                                 //se eh primo
            {
                return nMaisUm;                           //return n+1
                break;                                    //break
            }

            aux = nMenosUm;                               //teste p n-1
            primo(&aux);                                  //chamada da funcao
            if (aux == 1)                                 //se eh primo
            {
                return nMenosUm;                          //return n-1
                break;                                    //break
            }

            nMaisUm = nMaisUm + 1;                        // ++
            nMenosUm = nMenosUm - 1;                      // ++
        }
    }
}

void main()
{
    int numero;

    printf("\nDigite um numero para testar seu primo mais proximo: ");
    scanf("%d", &numero);

    printf("\n\nSeu primo mais proximo eh: %d", primoMaisProx(numero));

    fflush(stdin); // limpar a entrada de dados
    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER
}