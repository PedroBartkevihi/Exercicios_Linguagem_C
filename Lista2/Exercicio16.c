#include <stdio.h>

/*Leia a nota de um aluno e transforme-a em um conceito. As notas 10,0 a 9,0 receberão conceito A,
as notas de 8,9 a 7,0 receberão conceito B, as notas de 6,9 a 5,0 receberão conceito C e abaixo de
5,0 conceito D. Caso a nota seja inválida, imprima “Inválida”.*/

int main()
{
    double nota;

    printf("Insira a nota do aluno: ");
    scanf("%lf", &nota);

    if (nota < 0.0 || nota > 10.0)
    {
        printf("Invalida\n");
    }
    else if (nota >= 9.0)
    {
        printf("Conceito A\n");
    }
    else if (nota >= 7.0)
    {
        printf("Conceito B\n");
    }
    else if (nota >= 5.0)
    {
        printf("Conceito C\n");
    }
    else
    {
        printf("Conceito D\n");
    }

    return 0;
}