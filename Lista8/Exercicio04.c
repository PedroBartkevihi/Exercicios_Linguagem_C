#include <stdio.h>
#include <stdbool.h>

/*Crie um programa que lê os dados de um estacionamento: placa do carro, modelo e hora de
entrada e de saída, com horas e minutos. Ao final, imprima os dados lidos com o valor a ser
pago pelo estacionamento:
a) Primeira hora: R$ 5,00
b) Hora extra: R$ 2,00
c) Horas incompletas deverão ter cobrança proporcional*/

#define MAX 20
#define PRECO_PRIMEIRA_HORA 5.0
#define PRECO_HORA_EXTRA 2.0

typedef struct {
    int hora;
    int min;
} Hora;

typedef struct {
    char placa[10];
    char modelo[30];
    Hora entrada;
    Hora saida;
} Registro;

void limpa_buffer() {

    int c;

    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void le_linha(char s[], int tam) {

    int i;

    fgets(s, tam, stdin);

    i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
}

bool hora_valida(Hora h) {

    return h.hora >= 0 && h.hora <= 23 && h.min >= 0 && h.min <= 59;
}

Hora le_hora() {

    Hora h;
    int lidos;

    do {
        printf("(hh:mm): ");
        lidos = scanf("%d:%d", &h.hora, &h.min);
        limpa_buffer();
    } while (lidos != 2 || !hora_valida(h));

    return h;
}

Registro le_registro() {

    Registro r;

    printf("Placa: ");
    le_linha(r.placa, 10);

    printf("Modelo: ");
    le_linha(r.modelo, 30);

    printf("Entrada ");
    r.entrada = le_hora();

    printf("Saida ");
    r.saida = le_hora();

    return r;
}

int minutos_do_dia(Hora h) {

    return h.hora * 60 + h.min;
}

int permanencia(Registro r) {

    int minutos;

    minutos = minutos_do_dia(r.saida) - minutos_do_dia(r.entrada);

    if (minutos < 0) {
        minutos += 24 * 60;
    }

    return minutos;
}

float valor_a_pagar(int minutos) {

    if (minutos <= 60) {
        return PRECO_PRIMEIRA_HORA * minutos / 60;
    }

    return PRECO_PRIMEIRA_HORA + PRECO_HORA_EXTRA * (minutos - 60) / 60;
}

int main() {

    Registro carros[MAX];
    int n, i, tempo;

    do {
        printf("Quantos carros (1 a %d)? ", MAX);
        scanf("%d", &n);
        limpa_buffer();
    } while (n < 1 || n > MAX);

    for (i = 0; i < n; i++) {
        printf("\nCarro %d\n", i + 1);
        carros[i] = le_registro();
    }

    printf("\n%-9s %-20s %-8s %-8s %-8s %10s\n",
           "Placa", "Modelo", "Entrada", "Saida", "Tempo", "Valor");

    for (i = 0; i < n; i++) {
        tempo = permanencia(carros[i]);

        printf("%-9s %-20s %02d:%02d    %02d:%02d    %02d:%02d    R$ %6.2f\n",
               carros[i].placa, carros[i].modelo,
               carros[i].entrada.hora, carros[i].entrada.min,
               carros[i].saida.hora, carros[i].saida.min,
               tempo / 60, tempo % 60,
               valor_a_pagar(tempo));
    }

    return 0;
}