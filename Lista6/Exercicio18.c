#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool sem_repeticao(int v[], int tam) que recebe um vetor de inteiros v
com tam elementos e retorna true se não há repetições em v, ou false, caso contrário.*/

void le_vetor(int v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

bool sem_repeticao(int v[], int tam) {

    int i, j;

    for (i = 0; i < tam; i++) {
        for (j = i + 1; j < tam; j++) {
            if (v[i] == v[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {

    int vetor[100], tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor(vetor, tam);

    if (sem_repeticao(vetor, tam)) {
        printf("O vetor nao tem repeticoes.\n");
    } else {
        printf("O vetor tem repeticoes.\n");
    }

    return 0;
}