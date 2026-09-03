#include <stdio.h>

/*Implemente a função void quebra_real(double n, int &parte_inteira, double &parte_decimal) que
recebe um valor real n e retorna sua parte inteira e sua parte decimal. Obs: C não tem
referências como C++; a assinatura foi adaptada para usar ponteiros.*/

void quebra_real(double n, int *parte_inteira, double *parte_decimal) {

    *parte_inteira = (int) n;
    *parte_decimal = n - *parte_inteira;
}

int main() {

    double n, decimal;
    int inteiro;

    printf("Digite um numero real: ");
    scanf("%lf", &n);

    quebra_real(n, &inteiro, &decimal);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte decimal: %.4f\n", decimal);

    return 0;
}