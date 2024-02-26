#include <stdio.h>

//Entrada:Int x
//Saída:Int quantidade de números digitados que sao divisivei por 5 e 3 e sao impares

int main()
{
    int x, qtd = 0;

    for (int i = 1; i < 11; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &x);

        if (x % 2 != 0 && (x % 5 == 0 || x % 3 == 0))
        {
            qtd++;
        }
        
    }

    printf("Quantidade total de digitos dentro do parametro: %d", qtd);

    return 0;
}