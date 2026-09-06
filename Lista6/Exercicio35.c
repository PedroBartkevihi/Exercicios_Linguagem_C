#include <stdio.h>
#include <stdbool.h>

/* Implemente a função bool eh_segmento(int a, int b) que retorna true se o menor número entre
   a e b faz parte do outro número; ou false, caso contrário. Exemplos:
   a = 567890 b = 678  -> true
   a = 17     b = 1754 -> true
   a = 2357   b = 358  -> false
   a = 12345  b = 45   -> true */

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

bool eh_segmento(int a, int b) {

    int maior, menor;

    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    while (maior != 0) {
        if (encaixa(maior, menor)) {
            return true;
        }
        maior = maior / 10;
    }

    return false;
}

int main() {

    int a, b;

    printf("Digite o numero a: ");
    scanf("%d", &a);

    printf("Digite o numero b: ");
    scanf("%d", &b);

    if (eh_segmento(a, b)) {
        printf("Um faz parte do outro.\n");
    } else {
        printf("Um nao faz parte do outro.\n");
    }

    return 0;
}