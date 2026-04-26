#include <stdio.h>

/*Leia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a média ponderada
do aluno.*/

int main()
{
    float nota1, nota2, nota3, mediaPonderada;
    int peso1, peso2, peso3;

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite os respectivos pesos para cada uma das notas: ");
    scanf("%d %d %d", &peso1, &peso2, &peso3);

    mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("Media ponderada do aluno: %.2f", mediaPonderada);

    return 0;
}