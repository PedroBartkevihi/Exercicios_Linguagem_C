#include <stdio.h>

int main() {
    int fruta;

    printf("Escolha:\n1-Morango\n2-Banana\n3-Laranja\n4-Abacaxi\n5-Acerola\n");
    scanf("%d", &fruta);

    switch (fruta) {
        case 1:
            printf("Tomar com leite.\n");
            break;
        case 2:
            printf("Boa vitamina.\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Bom suco.\n");
            break;
        default:
            printf("Nao conheco essa fruta.\n");
            break;
    }

    return 0;
}
