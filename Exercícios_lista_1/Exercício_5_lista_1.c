#include <stdio.h>

//Entrada: float quantidade de bytes e a velocidade de transmissão
//Saída: float quantidade de tempo necessaria

int main()
{
    float qtd_bytes, vld_de_trans, qtd_tempo;
     
    printf("Digite a quantidade de bytes: \n");
    scanf("%f", &qtd_bytes);

    printf("Digite a velocidade de transmissao: \n");
    scanf("%f", &vld_de_trans);

    qtd_tempo = qtd_bytes / vld_de_trans;

    printf("O tempo necessario sera de %f segundos",qtd_tempo);

    return 0;
  
}