#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool ordenado(int v[], int tam) que retorna true se o vetor está ordenado
ou false, caso contrário.*/

void le_vetor(int v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

bool ordenado(int v[], int tam) {

    int i;

    for (i = 0; i < tam - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {

    int vetor[100], tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor(vetor, tam);

    if (ordenado(vetor, tam)) {
        printf("O vetor esta ordenado.\n");
    } else {
        printf("O vetor nao esta ordenado.\n");
    }

    return 0;
}