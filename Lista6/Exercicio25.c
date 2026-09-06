#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Pesquisa sobre as funções srand e rand da biblioteca do C/C++. Em seguida, implemente a
função int aleatorio(int a, int b) que retorna um número aleatório entre a e b, inclusive.*/

int aleatorio(int a, int b) {

    return a + rand() % (b - a + 1);
}

int main() {

    int a, b, resultado, i;

    srand(time(NULL));

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for (i = 0; i < 5; i++) {
        resultado = aleatorio(a, b);
        printf("Numero aleatorio %d: %d\n", i + 1, resultado);
    }

    return 0;
}