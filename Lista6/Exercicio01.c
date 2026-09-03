#include <stdio.h>
#include <math.h>

/*Implemente a função void segundo_grau(float a, float b, float c) que recebe os valores a, b e
c de uma equação do segundo grau (ax^2 + bx + c = 0) e imprime as duas raízes da equação. Se
não for possível calcular as duas raízes, a função deve imprimir "Não há raízes".*/

void segundo_grau(float a, float b, float c) {

    float delta, raiz1, raiz2;

    delta = b * b - 4 * a * c;

    if (a == 0 || delta < 0) {
        printf("Nao ha raizes\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1 = %.2f\n", raiz1);
        printf("Raiz 2 = %.2f\n", raiz2);
    }
}

int main() {

    float a, b, c;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    segundo_grau(a, b, c);

    return 0;
}