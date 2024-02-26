#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite o numero que voce deseja ver a tabuada: ");
    scanf("%d", &x);

    for(int i = 1; i <= 10; i++)
    {
        y = x * i;

        printf("%d X %d = %d\n", x, i, y);
    }

    return 0;
}