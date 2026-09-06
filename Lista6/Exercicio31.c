#include <stdio.h>

/*Implemente a função void decrementa_hora(int &hora, int &min, int &seg, int segundos) que
decrementa a hora, min e seg (no formato brasileiro) de acordo com os segundos fornecidos.
Note que a hora 00:02:15 decrementada em 200 segundos vira 23:58:55. Obs: C não tem
referências como C++; a assinatura foi adaptada para usar ponteiros.*/

void decrementa_hora(int *hora, int *min, int *seg, int segundos) {

    int total;

    total = (*hora) * 3600 + (*min) * 60 + (*seg) - segundos;

    total = total % 86400;
    if (total < 0) {
        total += 86400;
    }

    *hora = total / 3600;
    *min = (total % 3600) / 60;
    *seg = total % 60;
}

int main() {

    int hora, min, seg, segundos_a_tirar;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    printf("Digite quantos segundos decrementar: ");
    scanf("%d", &segundos_a_tirar);

    decrementa_hora(&hora, &min, &seg, segundos_a_tirar);

    printf("Novo horario: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}