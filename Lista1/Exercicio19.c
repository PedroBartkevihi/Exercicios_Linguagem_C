#include <stdio.h>

/*Leia um número inteiro n de 100 a 999 e imprima a soma dos dígitos que compõem o número.*/

int main()
{
    int n, soma, centena, dezena, unidade; 
    
    printf("Insira um numero inteiro de tres digitos: ");
    scanf("%d", &n);

    unidade = n % 10;
    dezena = (n / 10) % 10;
    centena = n / 100;

    soma = centena + dezena + unidade;

    printf("Soma dos digitos do numero: %d\n", soma);

    return 0;
}