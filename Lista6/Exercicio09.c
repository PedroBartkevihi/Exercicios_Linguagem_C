#include <stdio.h>
#include <math.h>

/*Implemente a função double cosseno(double x, int n) que calcula cos(x) com n parcelas usando
a série a seguir (x está em radianos):
cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10! + ...*/

double cosseno(double x, int n) {

    double termo, soma;
    int k;

    if (n <= 0) {
        return 0.0;
    }

    termo = 1.0;
    soma = termo;

    for (k = 1; k < n; k++) {
        termo = termo * (-x * x) / ((2 * k - 1) * (2 * k));
        soma += termo;
    }

    return soma;
}

int main() {

    double x, resultado;
    int n;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    printf("Digite o numero de parcelas n: ");
    scanf("%d", &n);

    resultado = cosseno(x, n);

    printf("cosseno(x) aproximado: %lf\n", resultado);
    printf("cos(x) da biblioteca (para comparacao): %lf\n", cos(x));

    return 0;
}