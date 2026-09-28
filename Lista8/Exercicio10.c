#include <stdio.h>
#include <stdlib.h>

/*Uma fração é representada por dois valores inteiros (numerador e denominador). Crie a struct
Fracao e implemente uma função para criar uma fração, além de mais quatro funções para as
operações básicas com frações (soma, subtração, multiplicação e divisão). As frações devem ser
representadas sempre na forma mais reduzida possível, ou seja, as funções devem usar MDC e
MMC para reduzir o numerador e o denominador ao máximo. Para testar as funções implementadas,
leia duas frações e imprima os resultados das quatro operações.*/

typedef struct {
    int num;
    int den;
} Fracao;

int mdc(int a, int b) {

    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

int mmc(int a, int b) {

    return a / mdc(a, b) * b;
}

Fracao cria_fracao(int num, int den) {

    Fracao f;
    int divisor;

    if (den < 0) {
        num = -num;
        den = -den;
    }

    divisor = mdc(abs(num), den);

    f.num = num / divisor;
    f.den = den / divisor;

    return f;
}

Fracao soma(Fracao a, Fracao b) {

    int den;

    den = mmc(a.den, b.den);

    return cria_fracao(a.num * (den / a.den) + b.num * (den / b.den), den);
}

Fracao subtrai(Fracao a, Fracao b) {

    int den;

    den = mmc(a.den, b.den);

    return cria_fracao(a.num * (den / a.den) - b.num * (den / b.den), den);
}

Fracao multiplica(Fracao a, Fracao b) {

    return cria_fracao(a.num * b.num, a.den * b.den);
}

Fracao divide(Fracao a, Fracao b) {

    return cria_fracao(a.num * b.den, a.den * b.num);
}

void imprime_fracao(Fracao f) {

    if (f.den == 1) {
        printf("%d", f.num);
    } else {
        printf("%d/%d", f.num, f.den);
    }
}

void limpa_buffer() {

    int c;

    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

Fracao le_fracao() {

    int num, den, lidos;

    lidos = scanf("%d/%d", &num, &den);
    limpa_buffer();

    while (lidos != 2 || den == 0) {
        printf("Fracao invalida (use a/b, com b diferente de 0): ");
        lidos = scanf("%d/%d", &num, &den);
        limpa_buffer();
    }

    return cria_fracao(num, den);
}

int main() {

    Fracao f1, f2;

    printf("Primeira fracao (a/b): ");
    f1 = le_fracao();

    printf("Segunda fracao (a/b): ");
    f2 = le_fracao();

    printf("\n");
    imprime_fracao(f1); printf(" + "); imprime_fracao(f2); printf(" = ");
    imprime_fracao(soma(f1, f2)); printf("\n");

    imprime_fracao(f1); printf(" - "); imprime_fracao(f2); printf(" = ");
    imprime_fracao(subtrai(f1, f2)); printf("\n");

    imprime_fracao(f1); printf(" * "); imprime_fracao(f2); printf(" = ");
    imprime_fracao(multiplica(f1, f2)); printf("\n");

    imprime_fracao(f1); printf(" / "); imprime_fracao(f2); printf(" = ");
    if (f2.num == 0) {
        printf("indefinida (divisao por zero)\n");
    } else {
        imprime_fracao(divide(f1, f2)); printf("\n");
    }

    return 0;
}