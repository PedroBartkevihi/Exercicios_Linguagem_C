#include <stdio.h>

//Entrada:Float as 3 notas e os pesos delas
//Saída:Float a média ponderada das notas

int main()
{
    float nota_1, nota_2, nota_3, peso_1, peso_2, peso_3, media, media_2;

    printf("Digite o valor da nota 1: \n");
    scanf("%f", &nota_1);

    printf("Digite o peso da nota 1: \n");
    scanf("%f", &peso_1);

    printf("Digite o valor da nota 2: \n");
    scanf("%f", &nota_2);

    printf("Digite o peso da nota 2: \n");
    scanf("%f", &peso_2);

    printf("Digite o valor da nota 3: \n");
    scanf("%f", &nota_3);

    printf("Digite o peso da nota 3: \n");
    scanf("%f", &peso_3);

    media = nota_1 * peso_1 + nota_2 * peso_2 + nota_3 * peso_3;
    media_2 = media / (peso_1 + peso_2 + peso_3);

    printf("A media ponderada das notas e: %.1f", media_2);

    return 0;

}