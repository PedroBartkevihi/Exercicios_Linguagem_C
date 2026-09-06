#include <stdio.h>

/*Implemente a função void decrementa_hora(int &hora, int &min, int &seg) que decrementa a
hora, min e seg (no formato brasileiro) de um segundo. Note que a hora 00:00:00 decrementada
de um segundo vira 23:59:59. Obs: C não tem referências como C++; a assinatura foi adaptada
para usar ponteiros.*/

void decrementa_hora(int *hora, int *min, int *seg) {

    (*seg)--;

    if (*seg == -1) {
        *seg = 59;
        (*min)--;

        if (*min == -1) {
            *min = 59;
            (*hora)--;

            if (*hora == -1) {
                *hora = 23;
            }
        }
    }
}

int main() {

    int hora, min, seg;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    decrementa_hora(&hora, &min, &seg);

    printf("Novo horario: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}