#include <stdio.h>

//Entrada:Int um número inteiro
//Saída:Int a soma dos digitos desse numero

int main()
{
    int x, digito_1, digito_2, digito_3, soma;

    printf("Digite um valor de 3 digitos: ");
    scanf("%d", &x);

    digito_1 = x / 100;
    digito_2 = (x / 10) % 10;
    digito_3 = x % 10;
    soma = digito_1 + digito_2 + digito_3;

    printf("A soma dos digitos e: %d", soma);

    return 0;
}