#include <stdio.h>

/*Crie um programa que faz a leitura dos dados dos alunos de uma turma com matrícula, nome,
nota1, nota2 e nota3. As notas devem ter valor de 0 a 10 e, se o usuário digitar -1
significa que o aluno faltou àquela prova. A leitura dos dados deverá parar quando o usuário
digitar matrícula zero, mas a turma não pode ter mais de 30 alunos. Ao final, imprima a lista
de alunos com matrícula, nome, as 3 notas (caso o aluno tenha faltado à prova deverá ser
impressa a letra 'F' no local da nota), a média do aluno e a situação ("Aprovado" ou
"Reprovado"):
a) A média do aluno é calculada como a média aritmética das duas maiores notas ou a nota
    dividida por 2, se ele compareceu a apenas uma prova. Se o aluno faltou às 3 provas a
    média dele é zero.
b) Estará aprovado o aluno com média >= 6.0.
Crie uma função para leitura dos dados, outra para impressão e uma terceira para calcular a
média de um aluno.*/

#define MAX_ALUNOS 30
#define NUM_PROVAS 3
#define TAM_NOME 40
#define FALTA -1
#define MEDIA_APROVACAO 6.0

typedef struct {
    int matricula;
    char nome[TAM_NOME];
    float notas[NUM_PROVAS];
} Aluno;

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

int le_int() {

    int x;

    while (scanf("%d", &x) != 1) {
        limpa_buffer();
        printf("Valor invalido, digite novamente: ");
    }
    limpa_buffer();

    return x;
}

float le_nota() {

    float x;
    int lidos;

    lidos = scanf("%f", &x);
    limpa_buffer();

    while (lidos != 1 || (x != FALTA && (x < 0 || x > 10))) {
        printf("Digite uma nota de 0 a 10, ou -1 para falta: ");
        lidos = scanf("%f", &x);
        limpa_buffer();
    }

    return x;
}

int le_turma(Aluno alunos[]) {

    int n, matricula, p;

    n = 0;

    while (n < MAX_ALUNOS) {
        printf("\nMatricula (0 para encerrar): ");
        matricula = le_int();

        if (matricula == 0) {
            break;
        }

        alunos[n].matricula = matricula;

        printf("Nome: ");
        le_linha(alunos[n].nome, TAM_NOME);

        for (p = 0; p < NUM_PROVAS; p++) {
            printf("Nota %d: ", p + 1);
            alunos[n].notas[p] = le_nota();
        }

        n++;
    }

    if (n == MAX_ALUNOS) {
        printf("\nTurma completa (%d alunos).\n", MAX_ALUNOS);
    }

    return n;
}

float calcula_media(Aluno a) {

    float maior1, maior2;
    int p;

    maior1 = 0;
    maior2 = 0;

    for (p = 0; p < NUM_PROVAS; p++) {
        if (a.notas[p] == FALTA) {
            continue;
        }

        if (a.notas[p] > maior1) {
            maior2 = maior1;
            maior1 = a.notas[p];
        } else if (a.notas[p] > maior2) {
            maior2 = a.notas[p];
        }
    }

    return (maior1 + maior2) / 2;
}

void imprime_turma(Aluno alunos[], int n) {

    int i, p;
    float media;

    printf("\n%-10s %-20s %6s %6s %6s %7s  %s\n",
           "Matricula", "Nome", "Nota1", "Nota2", "Nota3", "Media", "Situacao");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s", alunos[i].matricula, alunos[i].nome);

        for (p = 0; p < NUM_PROVAS; p++) {
            if (alunos[i].notas[p] == FALTA) {
                printf(" %6s", "F");
            } else {
                printf(" %6.1f", alunos[i].notas[p]);
            }
        }

        media = calcula_media(alunos[i]);

        printf(" %7.2f  %s\n", media,
               media >= MEDIA_APROVACAO ? "Aprovado" : "Reprovado");
    }
}

int main() {

    Aluno alunos[MAX_ALUNOS];
    int n;

    n = le_turma(alunos);

    if (n == 0) {
        printf("Nenhum aluno cadastrado.\n");
    } else {
        imprime_turma(alunos, n);
    }

    return 0;
}