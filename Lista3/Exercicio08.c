#include <stdio.h>

/*Leia 10 valores, um de cada vez, e conte quantos deles estão no intervalo [10, 20] e quantos deles
estão fora do intervalo. Ao final, imprima estas informações.*/

int main()
{
    int contadorDentroIntervalo = 0, contadorForaIntervalo = 0, numero;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20)
        {
            contadorDentroIntervalo++;
        }
        else
        {
            contadorForaIntervalo++;
        }
    }

    printf("Quantidade de numeros dentro do intervalo: %d\n", contadorDentroIntervalo);
    printf("Quantidade de numeros fora do intervalo: %d\n", contadorForaIntervalo);

    return 0;
}