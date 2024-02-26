#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite um valor: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("O valor de a: %d e maior que b: %d", a, b);
    }
    else
    {
        printf("O valor de b: %d e maior que a: %d", b, a);
    }

    return 0;
}