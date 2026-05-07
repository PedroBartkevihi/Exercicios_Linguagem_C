#include <stdio.h>

/*Leia três valores inteiros n, m e k e informe quantos números inteiros no intervalo n..m (inclusive)
são múltiplos de k.*/

int main()
{
    int n, m, k, qtdMultiplos;

    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &n, &m, &k);
    
    if (n < 1 || m < 1 || k <= 0)
    {
        printf("Insira valores positivos, com k maior que zero\n");
        return 1;
    }

    if (n > m)
    {
        printf("Intervalo invalido: n deve ser menor ou igual a m\n");
        return 1;
    }

    qtdMultiplos = (m / k) - ((n - 1) / k);

    printf("Quantidade de multiplos entre %d e %d: %d\n", n, m, qtdMultiplos);
    
    return 0;
}