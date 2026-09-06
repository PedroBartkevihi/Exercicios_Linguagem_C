#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool pertence(int v[], int tam, float n) que recebe um vetor v, seu
tamanho tam e um número n e retorna true se n pertence a v, ou false, caso contrário.*/

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

int main() {

    int vetor[100], tam;
    float n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor(vetor, tam);

    printf("Digite o numero a procurar: ");
    scanf("%f", &n);

    if (pertence(vetor, tam, n)) {
        printf("%.2f pertence ao vetor.\n", n);
    } else {
        printf("%.2f nao pertence ao vetor.\n", n);
    }

    return 0;
}