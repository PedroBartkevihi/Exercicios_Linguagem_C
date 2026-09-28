#include <stdio.h>
#include <string.h>

/*Crie um programa para cadastrar empresas (máximo de 10 empresas) e seus respectivos
funcionários. Cada empresa tem CNPJ, razão social e uma lista com, no máximo, 30
funcionários. Cada funcionário tem CPF, nome, cargo e salário. No cadastro deve ser
solicitado: CNPJ, razão social (somente se a empresa já não tiver sido cadastrada
anteriormente), CPF, nome, cargo e salário. A entrada termina quando o usuário digitar
CNPJ = 0. Ao final, imprimir a lista de empresas e, para cada uma delas, a lista de
respectivos funcionários. Atente para as seguintes regras:
a) Não pode haver dois funcionários cadastrados com o mesmo CPF.
b) Se um funcionário já está cadastrado em uma empresa, ele não pode ser cadastrado em outra
e o usuário deve receber uma mensagem avisando em que empresa esse funcionário já está
cadastrado.*/

#define MAX_EMPRESAS 10
#define MAX_FUNCIONARIOS 30

typedef struct {
    char cpf[15];
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

typedef struct {
    char cnpj[20];
    char razao_social[60];
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    int n_funcionarios;
} Empresa;

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

void le_texto(char s[], int tam) {

    le_linha(s, tam);
    while (s[0] == '\0') {
        printf("Campo obrigatorio, digite novamente: ");
        le_linha(s, tam);
    }
}

float le_salario() {

    float x;
    int lidos;

    lidos = scanf("%f", &x);
    limpa_buffer();

    while (lidos != 1 || x < 0) {
        printf("Salario invalido, digite novamente: ");
        lidos = scanf("%f", &x);
        limpa_buffer();
    }

    return x;
}

int busca_empresa(Empresa empresas[], int n, char cnpj[]) {

    int i;

    for (i = 0; i < n; i++) {
        if (strcmp(empresas[i].cnpj, cnpj) == 0) {
            return i;
        }
    }

    return -1;
}

int busca_cpf(Empresa empresas[], int n, char cpf[]) {

    int e, f;

    for (e = 0; e < n; e++) {
        for (f = 0; f < empresas[e].n_funcionarios; f++) {
            if (strcmp(empresas[e].funcionarios[f].cpf, cpf) == 0) {
                return e;
            }
        }
    }

    return -1;
}

int cadastra(Empresa empresas[]) {

    int n, e, onde;
    char cnpj[20], cpf[15];
    Empresa *emp;
    Funcionario *func;

    n = 0;

    while (1) {
        printf("\nCNPJ (0 para encerrar): ");
        le_texto(cnpj, 20);

        if (strcmp(cnpj, "0") == 0) {
            break;
        }

        e = busca_empresa(empresas, n, cnpj);

        if (e == -1) {
            if (n == MAX_EMPRESAS) {
                printf("Limite de %d empresas atingido.\n", MAX_EMPRESAS);
                continue;
            }

            e = n;
            strcpy(empresas[e].cnpj, cnpj);
            printf("Razao social: ");
            le_texto(empresas[e].razao_social, 60);
            empresas[e].n_funcionarios = 0;
            n++;
        } else {
            printf("Empresa: %s\n", empresas[e].razao_social);
        }

        emp = &empresas[e];

        if (emp->n_funcionarios == MAX_FUNCIONARIOS) {
            printf("A empresa ja tem %d funcionarios.\n", MAX_FUNCIONARIOS);
            continue;
        }

        printf("CPF: ");
        le_texto(cpf, 15);

        onde = busca_cpf(empresas, n, cpf);
        if (onde != -1) {
            printf("Funcionario ja cadastrado na empresa %s.\n",
                   empresas[onde].razao_social);
            continue;
        }

        func = &emp->funcionarios[emp->n_funcionarios];

        strcpy(func->cpf, cpf);

        printf("Nome: ");
        le_texto(func->nome, 50);

        printf("Cargo: ");
        le_texto(func->cargo, 30);

        printf("Salario: ");
        func->salario = le_salario();

        emp->n_funcionarios++;
    }

    return n;
}

void imprime(Empresa empresas[], int n) {

    int e, f;
    Funcionario *func;

    if (n == 0) {
        printf("\nNenhuma empresa cadastrada.\n");
        return;
    }

    for (e = 0; e < n; e++) {
        printf("\n%s (CNPJ: %s)\n", empresas[e].razao_social, empresas[e].cnpj);

        if (empresas[e].n_funcionarios == 0) {
            printf("    Nenhum funcionario cadastrado.\n");
            continue;
        }

        printf("    %-14s %-20s %-15s %12s\n", "CPF", "Nome", "Cargo", "Salario");

        for (f = 0; f < empresas[e].n_funcionarios; f++) {
            func = &empresas[e].funcionarios[f];
            printf("    %-14s %-20s %-15s R$ %9.2f\n",
                   func->cpf, func->nome, func->cargo, func->salario);
        }
    }
}

int main() {

    Empresa empresas[MAX_EMPRESAS];
    int n;

    n = cadastra(empresas);
    imprime(empresas, n);

    return 0;
}