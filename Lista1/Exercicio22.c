#include <stdio.h>

/*Leia um número inteiro a com 4 dígitos e calcule outro número inteiro b que deverá ser o número a
invertido. Exemplo: se a = 5732 então b = 2375.*/

int main()
{
    int a, numeroInvertido, unidade, dezena, centena, milhar;

    printf("Insira um numero inteiro com 4 digitos: ");
    scanf("%d", &a);

    unidade = a % 10;
    dezena = (a / 10) % 10;
    centena = (a / 100) % 10;
    milhar = a / 1000;

    numeroInvertido = (unidade * 1000) + (dezena * 100) + (centena * 10) + milhar;

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}