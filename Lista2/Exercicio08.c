#include <stdio.h>

/*Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, ou se
é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive) ou se ele não obedece a nenhuma
dessas condições.*/

int main()
{
    int n;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n == 5)
    {
        printf("O numero e igual a 5\n");
    }
    else if (n == 200)
    {
        printf("O numero e igual a 200\n");
    }
    else if (n == 400)
    {
        printf("O numero e igual a 400\n");
    }
    else if (n >= 500 && n <= 1000)
    {
        printf("%d esta entre 500 e 1000\n", n);
    }
    else
    {
        printf("Nao obedece a nenhuma das regras\n");
    }
    
    return 0;
}