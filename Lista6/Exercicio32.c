#include <stdio.h>

/*Implemente a função void duracao(int hora_ini, int min_ini, int seg_ini, int hora_fim,
int min_fim, int seg_fim, int &horas, int &minutos, int &segundos) que retorna a duração da
hora inicial até a hora final em horas, minutos e segundos. Se a hora final for menor que a
hora inicial é porque a hora inicial se refere a um dia e a hora final ao dia seguinte. Obs:
C não tem referências como C++; a assinatura foi adaptada para usar ponteiros.*/

void duracao(int hora_ini, int min_ini, int seg_ini,
             int hora_fim, int min_fim, int seg_fim,
             int *horas, int *minutos, int *segundos) {

    int total_ini, total_fim, diferenca;

    total_ini = hora_ini * 3600 + min_ini * 60 + seg_ini;
    total_fim = hora_fim * 3600 + min_fim * 60 + seg_fim;

    diferenca = total_fim - total_ini;

    if (diferenca < 0) {
        diferenca += 86400;
    }

    *horas = diferenca / 3600;
    *minutos = (diferenca % 3600) / 60;
    *segundos = diferenca % 60;
}

int main() {

    int hora_ini, min_ini, seg_ini;
    int hora_fim, min_fim, seg_fim;
    int horas, minutos, segundos;

    printf("Digite a hora inicial (h m s): ");
    scanf("%d %d %d", &hora_ini, &min_ini, &seg_ini);

    printf("Digite a hora final (h m s): ");
    scanf("%d %d %d", &hora_fim, &min_fim, &seg_fim);

    duracao(hora_ini, min_ini, seg_ini, hora_fim, min_fim, seg_fim,
            &horas, &minutos, &segundos);

    printf("Duracao: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}