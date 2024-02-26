#include <stdio.h>

//Entrada:Int um valor de 4 digitos
//Saída:Int o valor digitado porém com os digitos invertidos

int main() 
{
    int a, b;

    printf("Digite um numero inteiro com 4 digitos: ");
    scanf("%d", &a);

    int digito1 = a % 10;
    int digito2 = (a / 10) % 10;
    int digito3 = (a / 100) % 10;
    int digito4 = (a / 1000) % 10;

    b = digito1 * 1000 + digito2 * 100 + digito3 * 10 + digito4;

    printf("O numero invertido e: %d\n", b);

    return 0;
}
