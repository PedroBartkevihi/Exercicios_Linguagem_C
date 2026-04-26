#include <stdio.h>

/*Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo e
imprimir quantos segundos serão necessários para fazer o download do arquivo.*/

int main()
{
    float segundosNecess, qtdBytes, velocidadeTransmissao;
    
    printf("Digite a quantidade de bytes do arquivo e a velocidade de transmissao em bytes por segundo, respectivamente: ");
    scanf("%f %f", &qtdBytes, &velocidadeTransmissao);

    segundosNecess = qtdBytes / velocidadeTransmissao;

    printf("Tempo necessario: %.2f segundos\n", segundosNecess);

    return 0;
}