#include <stdio.h>

/*Imprima os 50 primeiros números pares, não considerando o zero.*/

int main()
{
    for (int i = 2; i <= 100; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}