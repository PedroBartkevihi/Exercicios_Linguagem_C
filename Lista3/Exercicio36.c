#include <stdio.h>

/*Leia um número inteiro n (n > 0) e imprima se ele é ou não capicua. Um número é capicua se lido
da esquerda para a direita é igual quando lido da direita para a esquerda.*/

int main()
{
    int n, original, reverso = 0, digito;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    original = n;

    while (n > 0)
    {
        digito = n % 10;
        reverso = (reverso * 10) + digito;
        n /= 10;
    }

    if (original == reverso)
    {
        printf("E capicua\n");
    }
    else
    {
        printf("Nao e capicua\n");
    }

    return 0;
}