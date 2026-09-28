#include <stdio.h>

/*Implemente uma função recursiva que recebe um número inteiro n e inverte esse número. Por
exemplo: se n = 123, então a função retorna 321.*/

int inverte_aux(int n, int acum) {

    if (n == 0) {
        return acum;
    }

    return inverte_aux(n / 10, acum * 10 + n % 10);
}

int inverte(int n) {

    if (n < 0) {
        return -inverte(-n);
    }

    return inverte_aux(n, 0);
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = inverte(n);

    printf("Numero invertido: %d\n", resultado);

    return 0;
}