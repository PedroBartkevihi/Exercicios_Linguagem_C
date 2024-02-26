#include <stdio.h>

int main() {
    char operador;
    double a, b, resultado;

    printf("Digite um operador aritmetico (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite dois numeros reais (a e b): ");
    scanf("%lf %lf", &a, &b);

    switch (operador) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Erro: Operador invalido.\n");
    }

    printf("%.2lf %c %.2lf = %.2lf\n", a, operador, b, resultado);

    return 0;
}
