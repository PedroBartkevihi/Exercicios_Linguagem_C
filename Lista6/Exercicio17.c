#include <stdio.h>

/*Implemente a função int conta_ocorrencias(int v[], int tam, int n) que retorna o número de
ocorrências de n em v.*/

void le_vetor(int v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

int conta_ocorrencias(int v[], int tam, int n) {

    int i, contador;

    contador = 0;

    for (i = 0; i < tam; i++) {
        if (v[i] == n) {
            contador++;
        }
    }

    return contador;
}

int main() {

    int vetor[100], tam, n, resultado;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    le_vetor(vetor, tam);

    printf("Digite o numero a procurar: ");
    scanf("%d", &n);

    resultado = conta_ocorrencias(vetor, tam, n);

    printf("O numero %d aparece %d vezes.\n", n, resultado);

    return 0;
}