#include <stdio.h>

//Entrada:Float o tempo necessario
//Saída:Float a aceleração em m/s

int main()
{
    
    float tempo, aceleracao;

    printf("Digite o tempo necessario (segundos): ");
    scanf("%f", &tempo);

    aceleracao = 2 * 1000 / (tempo * tempo);

    printf("A aceleracao e: %f", aceleracao);

    return 0;

}