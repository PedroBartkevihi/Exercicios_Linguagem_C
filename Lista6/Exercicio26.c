#include <stdio.h>

/*Implemente a função int segundos(int hora, int min, int seg) que retorna a hora representada
por hora, min e seg convertida em segundos. Versão com validação: hora, min e seg não podem
ser negativos, e min/seg devem estar no intervalo válido de um relógio (0 a 59). Se a entrada
for inválida, a função retorna -1.*/

int segundos(int hora, int min, int seg) {

    if (hora < 0 || min < 0 || seg < 0) {
        return -1;
    }

    if (min > 59 || seg > 59) {
        return -1;
    }

    return hora * 3600 + min * 60 + seg;
}

int main() {

    int hora, min, seg, total;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    total = segundos(hora, min, seg);

    if (total == -1) {
        printf("Horario invalido.\n");
    } else {
        printf("Total em segundos: %d\n", total);
    }

    return 0;
}