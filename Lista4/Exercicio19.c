#include <stdio.h>

/* Leia um vetor v com 10 inteiros e imprima qual a sequência de 3 números de v apresenta a maior
soma. Exemplo:
v = { 1, 5, 2, 1, 7, 1, 5, 2, 4, 1 }
Sequência: 7 1 5 (soma = 13) */

int main()
{
    int v[10];
    int maior_soma, soma_atual, indice_maior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior_soma = v[0] + v[1] + v[2];

    for (int i = 0; i <= 7; i++)
    {
        soma_atual = v[i] + v[i + 1] + v[i + 2];

        if (soma_atual > maior_soma)
        {
            maior_soma = soma_atual;
            indice_maior = i;
        }
    }

    printf("\nSequencia: %d %d %d, soma = %d\n",
           v[indice_maior],
           v[indice_maior + 1],
           v[indice_maior + 2],
           maior_soma);

    return 0;
}