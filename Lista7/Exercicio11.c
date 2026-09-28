#include <stdio.h>

/*Um problema típico em ciência da computação consiste em converter um número da sua forma
decimal para a forma binária. Implemente a função recursiva converte_binario que recebe um
número positivo n e imprime esse número em notação binária.*/

void converte_binario(int n) {

    if (n > 1) {
        converte_binario(n / 2);
    }

    printf("%d", n % 2);
}

int main() {

    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        printf("%d em binario: ", n);
        converte_binario(n);
        printf("\n");
    }

    return 0;
}