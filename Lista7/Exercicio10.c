#include <stdio.h>

/*Implemente uma função recursiva que inverte as posições de um vetor de inteiros, ou seja, o
primeiro vai para a última posição, o segundo para penúltima e assim por diante.*/

#define TAM_MAX 100

void inverte_vetor(int v[], int ini, int fim) {

    int temp;

    if (ini >= fim) {
        return;
    }

    temp = v[ini];
    v[ini] = v[fim];
    v[fim] = temp;

    inverte_vetor(v, ini + 1, fim - 1);
}

int main() {

    int v[TAM_MAX], tam, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    inverte_vetor(v, 0, tam - 1);

    printf("Vetor invertido: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}