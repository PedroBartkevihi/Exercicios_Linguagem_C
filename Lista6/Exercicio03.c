#include <stdio.h>

/*Implemente a função int conta_digitos(int n, int d) que recebe um valor inteiro n e retorna
quantas vezes o dígito d (0 a 9) aparece no número n. Por exemplo, se n = 6764963 e d = 6 a
função deve retornar 3.*/

int conta_digitos(int n, int d) {

    int contador, digito_atual;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        return (d == 0) ? 1 : 0;
    }

    contador = 0;
    while (n != 0) {
        digito_atual = n % 10;
        if (digito_atual == d) {
            contador++;
        }
        n = n / 10;
    }

    return contador;
}

int main() {

    int n, d, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Digite o digito a procurar (0-9): ");
    scanf("%d", &d);

    resultado = conta_digitos(n, d);

    printf("O digito %d aparece %d vezes\n", d, resultado);

    return 0;
}