#include <stdio.h>

/*Leia números inteiros até que o usuário digite zero ou um número negativo. Ao final, imprima a
soma e a média aritmética dos números digitados, o menor e o maior número.*/

int main()
{
    int numero, soma = 0, contador = 0;
    int menor, maior;
    double media;

    while (1)
    {
        printf("Insira um numero inteiro positivo (zero ou menor para sair): ");
        scanf("%d", &numero);

        if (numero <= 0)
        {
            break;
        }

        soma += numero;
        contador++;

        if (contador == 1)
        {
            menor = numero;
            maior = numero;
        }
        else
        {
            if (numero < menor)
            {
                menor = numero;
            }

            if (numero > maior)
            {
                maior = numero;
            }
        }
    }

    if (contador > 0)
    {
        media = (double) soma / contador;

        printf("Soma dos numeros: %d\n", soma);
        printf("Media aritmetica dos numeros: %.2f\n", media);
        printf("Menor numero: %d\n", menor);
        printf("Maior numero: %d\n", maior);
    }
    else
    {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}