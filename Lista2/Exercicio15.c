#include <stdio.h>

/*Leia o número do mês do ano (1 a 12) e mostre o nome do mês por extenso. Se o número for
inválido, imprima "Mês inválido".*/

int main()
{
    int mes;

    printf("Insira o numero correspondente a um mes do ano: ");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1:
            printf("Janeiro\n");
            break;

        case 2:
            printf("Fevereiro\n");
            break;

        case 3:
            printf("Marco\n");
            break;

        case 4:
            printf("Abril\n");
            break;

        case 5:
            printf("Maio\n");
            break;

        case 6:
            printf("Junho\n");
            break;

        case 7:
            printf("Julho\n");
            break;

        case 8:
            printf("Agosto\n");
            break;

        case 9:
            printf("Setembro\n");
            break;

        case 10:
            printf("Outubro\n");
            break;

        case 11:
            printf("Novembro\n");
            break;

        case 12:
            printf("Dezembro\n");
            break;
        
        default:
            printf("Mes invalido\n");
            break;
    }

    return 0;
}