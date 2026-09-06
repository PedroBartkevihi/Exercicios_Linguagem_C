#include <stdio.h>
#include <stdbool.h>

/*Implemente a função bool hora_valida(int hora, int min, int seg) que verifica se os valores
de hora, min e seg formam ou não uma hora válida no formato brasileiro (hora: 0 a 23, min: 0
a 59 e seg: 0 a 59).*/

bool hora_valida(int hora, int min, int seg) {

    return (hora >= 0 && hora <= 23) &&
           (min >= 0 && min <= 59) &&
           (seg >= 0 && seg <= 59);
}

int main() {

    int hora, min, seg;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    if (hora_valida(hora, min, seg)) {
        printf("Hora valida.\n");
    } else {
        printf("Hora invalida.\n");
    }

    return 0;
}