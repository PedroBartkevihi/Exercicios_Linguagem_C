#include <stdio.h>

/*Implemente a função void incrementa_hora(int &hora, int &min, int &seg, int segundos) que
incrementa a hora, min e seg (no formato brasileiro) de acordo com os segundos fornecidos.
Note que a hora 23:58:50 incrementada em 175 segundos vira 00:01:45. Obs: C não tem
referências como C++; a assinatura foi adaptada para usar ponteiros.*/

void incrementa_hora(int *hora, int *min, int *seg, int segundos) {

    int total;

    total = (*hora) * 3600 + (*min) * 60 + (*seg) + segundos;

    total = total % 86400;
    if (total < 0) {
        total += 86400;
    }

    *hora = total / 3600;
    *min = (total % 3600) / 60;
    *seg = total % 60;
}

int main() {

    int hora, min, seg, segundos_extra;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    printf("Digite quantos segundos incrementar: ");
    scanf("%d", &segundos_extra);

    incrementa_hora(&hora, &min, &seg, segundos_extra);

    printf("Novo horario: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}