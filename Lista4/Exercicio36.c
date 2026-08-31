#include <stdio.h>

/*Leia doze valores percentuais inteiros de 0 a 100, um para cada mês do ano,
e gere um gráfico usando asteriscos. Arredonde os valores informados para múltiplos de 5.*/

int main()
{
    int valores[12];
    char meses[12][4] = {
        "Jan", "Fev", "Mar", "Abr", "Mai", "Jun",
        "Jul", "Ago", "Set", "Out", "Nov", "Dez"
    };

    for (int i = 0; i < 12; i++)
    {
        printf("Insira o percentual de %s: ", meses[i]);
        scanf("%d", &valores[i]);

        if (valores[i] < 0 || valores[i] > 100)
        {
            printf("Erro, o percentual deve estar entre 0 e 100\n");
            return 1;
        }

        valores[i] = ((valores[i] + 2) / 5) * 5;
    }

    printf("\n");

    for (int nivel = 100; nivel >= 5; nivel -= 5)
    {
        printf("%3d |", nivel);

        for (int i = 0; i < 12; i++)
        {
            if (valores[i] >= nivel)
            {
                printf(" ***");
            }
            else
            {
                printf("    ");
            }
        }

        printf("\n");
    }

    printf("----+");

    for (int i = 0; i < 12; i++)
    {
        printf("----");
    }

    printf("\n     ");

    for (int i = 0; i < 12; i++)
    {
        printf(" %3s", meses[i]);
    }

    printf("\n");

    return 0;
}