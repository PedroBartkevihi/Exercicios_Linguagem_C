#include <stdio.h>

/*Leia um número n e imprima um losango de asteriscos com largura n (n deve ser ímpar e n >= 3).
Exemplo: n = 5.
  *
 ***
*****
 ***
  *
*/

int main() 
{
    int n;

    printf("Insira um numero impar (n >= 3): ");
    scanf("%d", &n);

    if (n < 3 || n % 2 == 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    int espacos = n / 2;
    int asteriscos = 1;

    for (int i = 0; i < (n / 2) + 1; i++)
    {
        for (int j = 0; j < espacos; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < asteriscos; j++)
        {
            printf("*");
        }

        printf("\n");

        espacos--;
        asteriscos += 2; 
    }

    espacos = 1;
    asteriscos = n - 2;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < espacos; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < asteriscos; j++)
        {
            printf("*");
        }

        printf("\n");

        espacos++;
        asteriscos -= 2;
    }

    return 0;
}