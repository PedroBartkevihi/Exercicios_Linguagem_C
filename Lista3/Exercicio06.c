#include <stdio.h>

/*Percorra os números de 1000 a 1999 e imprima aqueles que, quando divididos por 11 dão resto
igual a 5.*/

int main()
{
    for (int i = 1000; i <= 1999; i++)
    {
        if (i % 11 == 5)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}