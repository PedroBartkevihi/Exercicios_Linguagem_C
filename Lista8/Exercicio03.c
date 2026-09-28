#include <stdio.h>

/*Crie um programa que controla o consumo de energia dos eletrodomésticos de uma casa. Leia até
10 eletrodomésticos com nome, potência (real em kW) e tempo ativo por dia (real, em horas). Ao
final leia um tempo t (em dias) e apresente: nome, potência, horas de uso diário, consumo
diário e consumo relativo (percentual) de cada eletrodoméstico nesse período e o total de Kw
consumido no período.*/

#define MAX 10
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    float potencia;
    float horas;
} Eletrodomestico;

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

Eletrodomestico le_eletrodomestico() {

    Eletrodomestico e;

    printf("Nome: ");
    le_linha(e.nome, TAM_NOME);

    do {
        printf("Potencia (kW): ");
        scanf("%f", &e.potencia);
    } while (e.potencia < 0);

    do {
        printf("Horas de uso por dia (0 a 24): ");
        scanf("%f", &e.horas);
    } while (e.horas < 0 || e.horas > 24);

    limpa_buffer();

    return e;
}

float consumo_diario(Eletrodomestico e) {

    return e.potencia * e.horas;
}

int main() {

    Eletrodomestico casa[MAX];
    int n, t, i;
    float total_diario, total_periodo, consumo_periodo, percentual;

    do {
        printf("Quantos eletrodomesticos (1 a %d)? ", MAX);
        scanf("%d", &n);
    } while (n < 1 || n > MAX);
    limpa_buffer();

    for (i = 0; i < n; i++) {
        printf("\nEletrodomestico %d\n", i + 1);
        casa[i] = le_eletrodomestico();
    }

    do {
        printf("\nPeriodo t (em dias): ");
        scanf("%d", &t);
    } while (t < 1);

    total_diario = 0;
    for (i = 0; i < n; i++) {
        total_diario += consumo_diario(casa[i]);
    }
    total_periodo = total_diario * t;

    printf("\n%-20s %10s %10s %14s %16s %10s\n",
           "Nome", "Pot.(kW)", "Horas/dia", "Diario (kWh)", "Periodo (kWh)", "Relativo");

    for (i = 0; i < n; i++) {
        consumo_periodo = consumo_diario(casa[i]) * t;

        if (total_periodo > 0) {
            percentual = 100 * consumo_periodo / total_periodo;
        } else {
            percentual = 0;
        }

        printf("%-20s %10.2f %10.2f %14.2f %16.2f %9.2f%%\n",
               casa[i].nome, casa[i].potencia, casa[i].horas,
               consumo_diario(casa[i]), consumo_periodo, percentual);
    }

    printf("\nConsumo total em %d dias: %.2f kWh\n", t, total_periodo);

    return 0;
}