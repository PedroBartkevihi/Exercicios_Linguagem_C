#include <stdio.h>

/*Implemente a função void le_vetor_real(float v[], int tam) para ler um vetor de números reais
v de tamanho tam.*/

void le_vetor_real(float v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%f", &v[i]);
    }
}

int main() {

    float vetor[100];
    int tam, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor_real(vetor, tam);

    printf("Vetor lido: ");
    for (i = 0; i < tam; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}