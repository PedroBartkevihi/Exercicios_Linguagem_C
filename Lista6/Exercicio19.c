#include <stdio.h>
#include <stdbool.h>

/*Implemente a função int remove_repeticao(int v[], int tam) que recebe um vetor de inteiros v
com tam elementos e remove todos os valores repetidos de v. A função deve retornar a nova
quantidade de inteiros em v.*/

void le_vetor(int v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

bool pertence(int v[], int tam, float n) {

    int i;

    for (i = 0; i < tam; i++) {
        if (v[i] == n) {
            return true;
        }
    }

    return false;
}

int remove_repeticao(int v[], int tam) {

    int i, k;

    k = 0;

    for (i = 0; i < tam; i++) {
        if (!pertence(v, k, v[i])) {
            v[k] = v[i];
            k++;
        }
    }

    return k;
}

int main() {

    int vetor[100], tam, nova_qtd, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor(vetor, tam);

    nova_qtd = remove_repeticao(vetor, tam);

    printf("Vetor sem repeticoes (%d elementos): ", nova_qtd);
    for (i = 0; i < nova_qtd; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}