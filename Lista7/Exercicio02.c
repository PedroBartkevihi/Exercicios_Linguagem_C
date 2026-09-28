#include <stdio.h>

/*Implemente a função recursiva soma que recebe dois números inteiros a e b e retorna a x b.*/

int soma(int a, int b) {

    if (b == 0) {
        return 0;
    }

    if (b < 0) {
        return -soma(a, -b);
    }

    return a + soma(a, b - 1);
}

int main() {

    int a, b, resultado;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    resultado = soma(a, b);

    printf("%d x %d = %d\n", a, b, resultado);

    return 0;
}