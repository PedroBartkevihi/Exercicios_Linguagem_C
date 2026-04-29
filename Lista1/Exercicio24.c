#include <stdio.h>

/*Sabendo que um caixa eletrônico possui notas de R$ 10, R$ 20, R$ 50 e R$ 100, leia um valor que
representa a quantidade de dinheiro que o cliente deseja sacar e imprima a quantidade necessária de
cada uma dessas notas para formar o valor desejado. A quantidade total de notas deve ser a mínima
possível. Assuma que a quantidade fornecida pelo cliente é sempre múltipla de 10.*/

int main()
{
    int valorSaque;
    int notas100, notas50, notas20, notas10;

    printf("Insira a quantia que deseja sacar: ");
    scanf("%d", &valorSaque);

    notas100 = valorSaque / 100;
    notas50 = (valorSaque % 100) / 50;
    notas20 = ((valorSaque % 100) % 50) / 20;
    notas10 = (((valorSaque % 100) % 50) % 20) / 10;

    printf("Numero de notas utilizadas:\n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);

    return 0;
}