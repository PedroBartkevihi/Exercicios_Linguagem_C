#include <stdio.h>

/*Realize a conversao de km para milhas, imprimindo o resultado da conversao.*/

int main()
{
    float km, milhas;
    const float FATOR_CONVERSAO = 0.621371;

    printf("Insira a distancia em km: ");
    scanf("%f", &km);

    milhas = km * FATOR_CONVERSAO;

    printf("Quantidade de milhas: %.2f\n", milhas);

    return 0;
}