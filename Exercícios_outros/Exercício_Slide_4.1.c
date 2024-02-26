#include <stdio.h>

int main()
{
    float x, y, media;

    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("Digite um valor: ");
    scanf("%f", &y);

    media = (x + y) / 2;

    printf("A media aritimetica e: %.2f", media);

    return 0;
}