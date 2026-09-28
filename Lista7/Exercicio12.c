#include <stdio.h>
#include <stdbool.h>

/*Crie a função recursiva converte_decimal que faz o inverso da função do exercício anterior,
ou seja, recebe um número positivo n em notação binária e imprime esse número em notação
decimal.*/

bool eh_binario(long long n) {

    if (n == 0) {
        return true;
    }

    if (n % 10 > 1) {
        return false;
    }

    return eh_binario(n / 10);
}

int binario_para_decimal(long long n) {

    if (n == 0) {
        return 0;
    }

    return n % 10 + 2 * binario_para_decimal(n / 10);
}

void converte_decimal(long long n) {

    if (n < 0 || !eh_binario(n)) {
        printf("%lld nao e um numero binario valido.\n", n);
        return;
    }

    printf("%lld em decimal: %d\n", n, binario_para_decimal(n));
}

int main() {

    long long n;

    printf("Digite um numero em binario: ");
    scanf("%lld", &n);

    converte_decimal(n);

    return 0;
}