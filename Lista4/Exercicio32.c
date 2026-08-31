#include <stdio.h>

/*Leia duas sequências com n dígitos (0 a 9), que devem ser interpretadas como dois números
inteiros de n algarismos. Calcule a sequência de dígitos que representa a soma dos dois inteiros.*/

int main()
{
    int n;

    printf("Insira a quantidade de digitos: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, quantidade invalida\n");
        return 1;
    }

    int a[n], b[n], soma[n + 1];
    int vaiUm = 0;

    printf("Insira os digitos da primeira sequencia:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < 0 || a[i] > 9)
        {
            printf("Erro, cada valor deve ser um digito de 0 a 9\n");
            return 1;
        }
    }

    printf("Insira os digitos da segunda sequencia:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);

        if (b[i] < 0 || b[i] > 9)
        {
            printf("Erro, cada valor deve ser um digito de 0 a 9\n");
            return 1;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int resultado = a[i] + b[i] + vaiUm;

        soma[i + 1] = resultado % 10;
        vaiUm = resultado / 10;
    }

    soma[0] = vaiUm;

    printf("Resultado da soma:\n");

    if (soma[0] != 0)
    {
        printf("%d ", soma[0]);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", soma[i]);
    }

    printf("\n");

    return 0;
}