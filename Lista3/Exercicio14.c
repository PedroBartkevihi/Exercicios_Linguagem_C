#include <stdio.h>
#include <math.h>

/*Leia vários números positivos até o usuário digitar zero e, para cada número, imprima a sua raiz
quadrada ou uma mensagem de erro, caso não seja possível calculá-la.*/

int main()
{
    int numero;
    double raizQuadrada;

    do
    {
        printf("Insira um numero positivo (digite zero para sair): ");
        scanf("%d", &numero);

        if (numero < 0)
        {
            printf("Erro, nao e possivel calcular a raiz quadrada de numero negativo\n");
        }
        else if (numero > 0)
        {
            raizQuadrada = sqrt(numero);
            printf("Raiz quadrada do numero %d = %.2lf\n", numero, raizQuadrada);
        }

    } while (numero != 0);

    return 0;
}