#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que calcule o imposto pago por mulheres e por
homens, sabendo que as mulheres pagam 10% de imposto e que os
homens pagam mais 5% do que as mulheres.*/
/*desenvolvedor: fischerxp*/

int main()
{
    float salario, taxa=0.10;
    char genero;
    printf ("escreva a primeira letra do seu genero: ");
    scanf("%c", &genero);
    printf ("\nintroduza o seu salario de seu ordenado: ");
    scanf("%f",&salario);
    switch(genero)
    {
        case 'h':taxa= taxa * 1.5;
        case 'H':
        case 'm': taxa;
        case 'M':
    ;
    }
    printf("o imposto pago pelo usuario e de:%.2f\n", salario*taxa);

    return 0;
}
