#include <stdio.h>

/*Leia várias idades até o usuário digitar zero e imprima quantas pessoas são eleitoras obrigatórias.*/

int main()
{
    int idade, contador = 0;

    do
    {
        printf("Insira a idade do eleitor (digite zero para sair): ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            printf("Idade invalida.\n");
        }
        else if (idade >= 18 && idade < 70)
        {
            contador++;
        }

    } while (idade != 0);

    printf("Quantidade de eleitores obrigatorios: %d\n", contador);

    return 0;
}