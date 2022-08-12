/*Para executar, utilize os comandos " gcc poupanca.c -o poupanca " // "poupanca" no CMD

Leo Soares de Oliveira Junior - nº de registro 2021039492 
Data de realização: 22/10/2021

*/

#include <stdio.h> // para as entradas e saidas
#include <math.h>  //para funções matemáticas -> pow( ), sqrt( ), sin( ), cos( ) ...

double deposito = 789.54;
double rendimento = 0.0056;

int main()
{
    printf("No primeiro mes, foi depositado o valor %lf com rendimento mensal de 0.56 porcento", deposito);

    deposito = deposito + (deposito*rendimento) + 303.20;

    printf("\n\nNo segundo mes, foi acrescido o valor de 303.20 na conta que, somado ao rendimento, totaliza %lf", deposito); 

    deposito = deposito + (deposito*rendimento) - 58.25;

    printf("\n\nNo terceiro mes, foi retirado o valor de 58.25 da conta que, somado ao rendimento, totaliza %lf", deposito);

    deposito = deposito + (deposito*rendimento);

    printf("\n\nNo quarto mes, o montante sera de %lf", deposito);
  
    printf("\n");
    printf("\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
}