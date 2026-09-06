#include <stdio.h>
#include <stdbool.h>

/*Implemente a função int uniao(int v1[], int tam1, int v2[], int tam2, int v[]) que recebe um
vetor v1 de tamanho tam1 e um vetor v2 de tamanho tam2 e armazena no vetor v os elementos de
v1 união v2. A função deve retornar a quantidade de números em v. O vetor v não pode ter
valores repetidos, mesmo que v1 ou v2 tenham.*/

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

int uniao(int v1[], int tam1, int v2[], int tam2, int v[]) {

    int i, tam;

    tam = 0;

    for (i = 0; i < tam1; i++) {
        if (!pertence(v, tam, v1[i])) {
            v[tam] = v1[i];
            tam++;
        }
    }

    for (i = 0; i < tam2; i++) {
        if (!pertence(v, tam, v2[i])) {
            v[tam] = v2[i];
            tam++;
        }
    }

    return tam;
}

int main() {

    int v1[100], v2[100], v[200];
    int tam1, tam2, tam_uniao, i;

    printf("Digite o tamanho de v1: ");
    scanf("%d", &tam1);
    le_vetor(v1, tam1);

    printf("Digite o tamanho de v2: ");
    scanf("%d", &tam2);
    le_vetor(v2, tam2);

    tam_uniao = uniao(v1, tam1, v2, tam2, v);

    printf("Uniao (%d elementos): ", tam_uniao);
    for (i = 0; i < tam_uniao; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}