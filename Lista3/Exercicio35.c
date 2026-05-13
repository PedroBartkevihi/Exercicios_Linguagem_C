#include <stdio.h>

/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55 * 55 = 3025.
Imprima todos os números inteiros de 4 dígitos que têm essa característica.*/

int main()
{
    int primeiraParte, segundaParte, soma;

    for (int i = 1000; i <= 9999; i++)
    {
        primeiraParte = i / 100;
        segundaParte = i % 100;

        soma = primeiraParte + segundaParte;

        if (soma * soma == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}