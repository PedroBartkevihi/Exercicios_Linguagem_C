#include <stdio.h>

/*Calcule e imprima o n-ésimo termo an de uma PA de razão r. Para isso, seu programa deverá ler o
1o termo a1, a quantidade n de termos e a razão r. Considere: an = a1 + (n-1).r, onde n é natural.*/

int main()
{
    float primeiroTermo, razao, n_esimoTermo;
    int qtdTermos;

    printf("Insira o primeiro termo e a quantidade de termos, respectivamente: ");
    scanf("%f %d", &primeiroTermo, &qtdTermos);

    printf("Insira agora a razao da PA: ");
    scanf("%f", &razao);

    n_esimoTermo = primeiroTermo + (qtdTermos - 1) * razao;

    printf("N-esimo termo da PA: %.2f\n", n_esimoTermo);

    return 0;
}