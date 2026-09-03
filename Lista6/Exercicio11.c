#include <stdio.h>

/*Implemente a função int posicao(float v[], int tam, float n) que recebe um vetor v, seu
tamanho tam e um número n e retorna a posição de n em v. Se n não pertence a v a função deve
retornar -1. Dica: para ler o vetor use a função le_vetor_real implementada anteriormente.*/

void le_vetor_real(float v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%f", &v[i]);
    }
}

int posicao(float v[], int tam, float n) {

    int i;

    for (i = 0; i < tam; i++) {
        if (v[i] == n) {
            return i;
        }
    }

    return -1;
}

int main() {

    float vetor[100], n;
    int tam, resultado;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor_real(vetor, tam);

    printf("Digite o numero a procurar: ");
    scanf("%f", &n);

    resultado = posicao(vetor, tam, n);

    printf("Posicao: %d\n", resultado);

    return 0;
}