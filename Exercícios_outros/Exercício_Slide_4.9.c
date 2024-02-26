#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        
        printf("%d e um ano bissexto.\n", ano);
    } else {
        
        int proximo_ano = ano + (4 - (ano % 4)); 
        if (proximo_ano % 100 == 0 && proximo_ano % 400 != 0) {

            proximo_ano += 4;
        }
        printf("%d nao e um ano bissexto. O proximo ano bissexto e %d.\n", ano, proximo_ano);
    }

    return 0;
}