#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool encaixa(int a, int b) que retorna true se o número b corresponde aos
últimos dígitos de a; ou false, caso contrário. Exemplos:
a = 567890 b = 890   -> true
a = 1243   b = 1243  -> true
a = 2357   b = 358   -> false
a = 2345   b = 12345 -> false*/

int digitos(int n) {

    int contador;

    if (n == 0) {
        return 1;
    }

    contador = 0;
    while (n != 0) {
        n = n / 10;
        contador++;
    }

    return contador;
}

bool encaixa(int a, int b) {

    int qtd_digitos_b, potencia, i;

    qtd_digitos_b = digitos(b);

    potencia = 1;
    for (i = 0; i < qtd_digitos_b; i++) {
        potencia = potencia * 10;
    }

    return (a % potencia) == b;
}

int main() {

    int a, b;

    printf("Digite o numero a: ");
    scanf("%d", &a);

    printf("Digite o numero b: ");
    scanf("%d", &b);

    if (encaixa(a, b)) {
        printf("%d encaixa em %d.\n", b, a);
    } else {
        printf("%d nao encaixa em %d.\n", b, a);
    }

    return 0;
}