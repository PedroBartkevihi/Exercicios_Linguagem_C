#include <stdio.h>

/*Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são pares.*/

int main()
{
    int numero, contador = 0;

    do
    {
        printf("Insira um numero inteiro positivo (digite zero para sair): ");
        scanf("%d", &numero);

        if (numero < 0)
        {
            printf("Erro, insira numeros positivos\n");
        }
        else if (numero > 0)
        {
            if (numero % 2 == 0)
            {
                contador++;
            }
        }

    } while (numero != 0);

    printf("Quantidade de numeros pares: %d\n", contador);

    return 0;
}