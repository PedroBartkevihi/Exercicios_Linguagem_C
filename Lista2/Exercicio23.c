#include <stdio.h>

/*Leia o último dígito da placa do carro e exiba o mês em que vence o IPVA, segundo a tabela
abaixo:

Final da placa / Prazo
0 Até 30/04/2020
1 Até 31/05/2020
2 Até 30/06/2020
3 Até 31/07/2020
4 Até 30/08/2020
5 Até 30/09/2020
6 e 7 Até 30/11/2020
8 e 9 Até 31/12/2020*/

int main()
{
    int ultimoDigito;

    printf("Insira o ultimo digito de sua placa: ");
    scanf("%d", &ultimoDigito);

    switch (ultimoDigito)
    {
    case 0:
        printf("Vencimento do IPVA: 30/04/2020\n");
        break;
    case 1:
        printf("Vencimento do IPVA: 31/05/2020\n");
        break;
    case 2:
        printf("Vencimento do IPVA: 30/06/2020\n");
        break;
    case 3:
        printf("Vencimento do IPVA: 31/07/2020\n");
        break;
    case 4:
        printf("Vencimento do IPVA: 30/08/2020\n");
        break;
    case 5:
        printf("Vencimento do IPVA: 30/09/2020\n");
        break;
    case 6:
    case 7:
        printf("Vencimento do IPVA: 30/11/2020\n");
        break;
    case 8:
    case 9:
        printf("Vencimento do IPVA: 31/12/2020\n");
        break;
    default:
        printf("Ultimo digito invalido\n");
        break;
    }
    
    return 0;
}