#include <stdio.h>

/*Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero.*/

int main()
{
    for (int i = 5; i <= 100; i += 5)
    {
        printf("%d\n", i);
    }

    return 0;
}