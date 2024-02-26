#include <stdio.h>

//Entrada: float raio da esfera
//Saída: float volume da esfera

int main()
{
    float raio,volume, raio_3;

    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);

    raio_3 = raio * raio * raio;
    volume = (4 * 3.14 * raio_3) / 3;


    printf("O valor do volume e: %f",volume);

    return 0;
}