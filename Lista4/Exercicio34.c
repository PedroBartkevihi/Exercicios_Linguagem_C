#include <stdio.h>
#include <stdbool.h>

/*Para descobrir os números primos de 2 a n podemos adotar o Crivo de Eratóstenes.
Essa estratégia consiste em criar uma lista com todos os números inteiros no intervalo de 2 a n,
onde todos estão "desmarcados". Em seguida, pegamos o primeiro inteiro i da lista que está
"desmarcado" e marcamos todos os seus múltiplos. Repetimos esse processo enquanto i * i <= n.
Os números primos são os números de 2 a n que permanecem "desmarcados".*/

int main()
{
    int n;

    printf("Insira um numero inteiro n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Erro, n deve ser maior ou igual a 2\n");
        return 1;
    }

    bool marcado[n + 1];

    for (int i = 0; i <= n; i++)
    {
        marcado[i] = false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (!marcado[i])
        {
            for (int multiplo = i * 2; multiplo <= n; multiplo += i)
            {
                marcado[multiplo] = true;
            }
        }
    }

    printf("Numeros primos de 2 ate %d:\n", n);

    for (int i = 2; i <= n; i++)
    {
        if (!marcado[i])
        {
            printf("%d\n", i);
        }
    }

    return 0;
}