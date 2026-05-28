#include <stdio.h>

/*Leia um vetor v de 10 inteiros e dois valores inteiros n1 e n2. Em seguida, imprima os valores de v
que estão no intervalo de n1 a n2 (inclusive). Caso n1 seja maior que n2 imprima uma mensagem
de erro.*/

int main()
{
    int v[10], n1, n2;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira dois valores inteiros (n1 e n2): ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        printf("Erro, insira um intervalo valido\n");
        return 1;
    }

    printf("Valores no intervalo de %d a %d:\n", n1, n2);

    for (int i = 0; i < 10; i++)
    {
        if (v[i] >= n1 && v[i] <= n2)
        {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}