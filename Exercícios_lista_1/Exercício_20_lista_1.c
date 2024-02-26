#include <stdio.h>

//Entrada:Int um valor de 4 digitos
//Saída:Int A multiplicação da soma dos digitos separados

int main()
{

    int x, numero_1, numero_2, soma, multiplicacao;

    printf("Digite um valor de 4 digitos: ");
    scanf("%d", &x);

    numero_1 = x / 100;
    numero_2 = x % 100;
    soma = numero_1 + numero_2;
    multiplicacao = soma * soma;

    printf("A soma dos valores dos digitos e %d, e a multiplicacao desses digitos e %d", soma, multiplicacao);

    return 0;



}