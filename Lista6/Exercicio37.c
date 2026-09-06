#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool cpf_valido(long long cpf) que recebe um número de CPF e retorna
true se o CPF é válido; ou false, caso contrário. Um CPF é válido se: possui exatamente 11
dígitos; os 11 dígitos não podem ser todos iguais; os 9 primeiros dígitos compõem o CPF e os
2 últimos são os dígitos verificadores J e K, calculados a partir de somas ponderadas módulo 11.*/

int digitos_ll(long long n) {

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

bool cpf_valido(long long cpf) {

    int d[11];
    long long temp, soma1, soma2;
    int i, qtd, todos_iguais, resto1, resto2, j_calc, k_calc;

    if (cpf < 0) {
        return false;
    }

    qtd = digitos_ll(cpf);
    if (qtd != 11) {
        return false;
    }

    temp = cpf;
    for (i = 10; i >= 0; i--) {
        d[i] = temp % 10;
        temp = temp / 10;
    }

    todos_iguais = 1;
    for (i = 1; i < 11; i++) {
        if (d[i] != d[0]) {
            todos_iguais = 0;
            break;
        }
    }
    if (todos_iguais) {
        return false;
    }

    soma1 = d[0]*10 + d[1]*9 + d[2]*8 + d[3]*7 + d[4]*6 +
            d[5]*5  + d[6]*4 + d[7]*3 + d[8]*2;
    resto1 = soma1 % 11;
    j_calc = (resto1 == 0 || resto1 == 1) ? 0 : 11 - resto1;

    if (j_calc != d[9]) {
        return false;
    }

    soma2 = d[0]*11 + d[1]*10 + d[2]*9 + d[3]*8 + d[4]*7 +
            d[5]*6  + d[6]*5  + d[7]*4 + d[8]*3 + d[9]*2;
    resto2 = soma2 % 11;
    k_calc = (resto2 == 0 || resto2 == 1) ? 0 : 11 - resto2;

    if (k_calc != d[10]) {
        return false;
    }

    return true;
}

int main() {

    long long cpf;

    printf("Digite o CPF (somente numeros, 11 digitos): ");
    scanf("%lld", &cpf);

    if (cpf_valido(cpf)) {
        printf("CPF valido.\n");
    } else {
        printf("CPF invalido.\n");
    }

    return 0;
}