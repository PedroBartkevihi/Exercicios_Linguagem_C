#include <stdio.h>

/*Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são ímpares e a
soma deles.*/

int main()
{
    int numero, contador = 0, soma = 0;

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
            if (numero % 2 != 0)
            {
                soma += numero;
                contador++;
            }
        }

    } while (numero != 0);

    printf("Quantidade de numeros impares: %d\n", contador);
    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}