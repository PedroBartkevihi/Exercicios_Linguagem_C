#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool amigos(int x, int y) que retorna true ou false indicando se os
números x e y são amigos ou não. x e y serão amigos se a soma dos divisores próprios de x for
igual a y e se a soma dos divisores próprios de y for igual a x.*/

int soma_divisores(int n) {

    int soma, i;

    soma = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma;
}

bool amigos(int x, int y) {

    return (soma_divisores(x) == y) && (soma_divisores(y) == x);
}

int main() {

    int x, y;

    printf("Digite o numero x: ");
    scanf("%d", &x);

    printf("Digite o numero y: ");
    scanf("%d", &y);

    if (amigos(x, y)) {
        printf("%d e %d sao amigos.\n", x, y);
    } else {
        printf("%d e %d nao sao amigos.\n", x, y);
    }

    return 0;
}