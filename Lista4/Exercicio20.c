#include <stdio.h>

/*Ler um vetor notas com 20 notas inteiras de 0 a 10 e imprimir um histograma indicando
quantos alunos tiraram cada nota.*/

int main()
{
    int notas[20];
    int frequencia[11] = {0};

    for (int i = 0; i < 20; i++)
    {
        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);

        if (notas[i] < 0 || notas[i] > 10)
        {
            printf("Erro, nota invalida\n");
            return 1;
        }

        frequencia[notas[i]]++;
    }

    printf("\nHistograma:\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("%2d ", i);

        for (int j = 0; j < frequencia[i]; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}