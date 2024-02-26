#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite um valor: ");
    scanf("%d", &x);

    printf("Digite um valor: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("O maior valor e: %d", x);
    }
    else
    {
        printf("O maior valor e: %d", y);
    }

    return 0;
}