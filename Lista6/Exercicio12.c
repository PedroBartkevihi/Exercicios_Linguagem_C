#include <stdio.h>

/*Implemente as funções float maior(float v[], int tam) e float menor(float v[], int tam) que
retornam o maior e o menor número em um vetor de números reais. Dica: para ler o vetor use a
função le_vetor_real implementada anteriormente.*/

void le_vetor_real(float v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%f", &v[i]);
    }
}

float maior(float v[], int tam) {

    float max;
    int i;

    max = v[0];

    for (i = 1; i < tam; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}

float menor(float v[], int tam) {

    float min;
    int i;

    min = v[0];

    for (i = 1; i < tam; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }

    return min;
}

int main() {

    float vetor[100];
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor_real(vetor, tam);

    printf("Maior valor: %.2f\n", maior(vetor, tam));
    printf("Menor valor: %.2f\n", menor(vetor, tam));

    return 0;
}