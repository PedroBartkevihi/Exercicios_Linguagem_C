#include <stdio.h>

/*Implemente a função void incrementa_hora(int &hora, int &min, int &seg) que incrementa a
hora, min e seg (no formato brasileiro) em um segundo. Note que a hora 23:59:59 incrementada
em um segundo vira 00:00:00. Obs: C não tem referências como C++; a assinatura foi adaptada
para usar ponteiros.*/

void incrementa_hora(int *hora, int *min, int *seg) {

    (*seg)++;

    if (*seg == 60) {
        *seg = 0;
        (*min)++;

        if (*min == 60) {
            *min = 0;
            (*hora)++;

            if (*hora == 24) {
                *hora = 0;
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

    incrementa_hora(&hora, &min, &seg);

    printf("Novo horario: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}