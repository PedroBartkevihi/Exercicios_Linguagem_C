#include <stdio.h>

/*Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t. Leia o
valor de t e calcule a aceleracao do carro em metros/s2.*/

int main()
{
    const int tamanho = 1000;
    float t, aceleracao;
    
    printf("Insira a quantidade de segundos que o carro demora para percorrer a pista: ");
    scanf("%f", &t);

    aceleracao = (2.0 * tamanho) / (t * t);

    printf("Aceleracao do veiculo: %.2f m/s2\n", aceleracao);

    return 0;
}