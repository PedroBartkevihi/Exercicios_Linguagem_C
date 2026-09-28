#include <stdio.h>
#include <stdbool.h>

/*Crie um programa que faz o gerenciamento das contas de um banco. Inicialmente devem ser
criadas n contas com: número da conta, nome do correntista e saldo inicial. Em seguida,
apresente um menu com as opções 1-Sacar, 2-Depositar, 3-Consultar saldo e 4-Sair. Para cada
operação solicite o número da conta, e para as operações 2 e 3 solicite o valor a sacar ou
depositar e imprima o valor do saldo resultante. As operações só podem ser realizadas se a
conta existir e o saque só pode ser efetivado caso haja saldo suficiente. Crie funções para a
entrada de dados e para cada uma das operações. O programa só termina quando o usuário
selecionar a opção 4.*/

#define MAX 100
#define TAM_NOME 50

typedef struct {
    int numero;
    char nome[TAM_NOME];
    float saldo;
} Conta;

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

float le_float() {

    float x;

    while (scanf("%f", &x) != 1) {
        limpa_buffer();
        printf("Valor invalido, digite novamente: ");
    }
    limpa_buffer();

    return x;
}

int busca_conta(Conta contas[], int n, int numero) {

    int i;

    for (i = 0; i < n; i++) {
        if (contas[i].numero == numero) {
            return i;
        }
    }

    return -1;
}

void cria_contas(Conta contas[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("\nConta %d\n", i + 1);

        printf("Numero da conta: ");
        contas[i].numero = le_int();
        while (busca_conta(contas, i, contas[i].numero) != -1) {
            printf("Numero ja cadastrado, digite outro: ");
            contas[i].numero = le_int();
        }

        printf("Nome do correntista: ");
        le_linha(contas[i].nome, TAM_NOME);

        printf("Saldo inicial: ");
        contas[i].saldo = le_float();
        while (contas[i].saldo < 0) {
            printf("O saldo inicial nao pode ser negativo: ");
            contas[i].saldo = le_float();
        }
    }
}

int le_indice_conta(Conta contas[], int n) {

    int numero, indice;

    printf("Numero da conta: ");
    numero = le_int();

    indice = busca_conta(contas, n, numero);
    if (indice == -1) {
        printf("Conta inexistente.\n");
    }

    return indice;
}

float le_valor_positivo() {

    float valor;

    valor = le_float();
    while (valor <= 0) {
        printf("O valor deve ser positivo: ");
        valor = le_float();
    }

    return valor;
}

bool sacar(Conta *c, float valor) {

    if (valor > c->saldo) {
        return false;
    }

    c->saldo -= valor;

    return true;
}

void depositar(Conta *c, float valor) {

    c->saldo += valor;
}

void operacao_saque(Conta contas[], int n) {

    int i;
    float valor;

    i = le_indice_conta(contas, n);
    if (i == -1) {
        return;
    }

    printf("Valor a sacar: ");
    valor = le_valor_positivo();

    if (sacar(&contas[i], valor)) {
        printf("Saque realizado. Saldo atual: R$ %.2f\n", contas[i].saldo);
    } else {
        printf("Saldo insuficiente. Saldo atual: R$ %.2f\n", contas[i].saldo);
    }
}

void operacao_deposito(Conta contas[], int n) {

    int i;
    float valor;

    i = le_indice_conta(contas, n);
    if (i == -1) {
        return;
    }

    printf("Valor a depositar: ");
    valor = le_valor_positivo();

    depositar(&contas[i], valor);
    printf("Deposito realizado. Saldo atual: R$ %.2f\n", contas[i].saldo);
}

void operacao_consulta(Conta contas[], int n) {

    int i;

    i = le_indice_conta(contas, n);
    if (i == -1) {
        return;
    }

    printf("Correntista: %s\n", contas[i].nome);
    printf("Saldo: R$ %.2f\n", contas[i].saldo);
}

int main() {

    Conta contas[MAX];
    int n, opcao;

    printf("Quantas contas deseja criar (1 a %d)? ", MAX);
    n = le_int();
    while (n < 1 || n > MAX) {
        printf("Quantidade invalida, digite de 1 a %d: ", MAX);
        n = le_int();
    }

    cria_contas(contas, n);

    do {
        printf("\n1-Sacar  2-Depositar  3-Consultar saldo  4-Sair\n");
        printf("Opcao: ");
        opcao = le_int();

        switch (opcao) {
            case 1:
                operacao_saque(contas, n);
                break;
            case 2:
                operacao_deposito(contas, n);
                break;
            case 3:
                operacao_consulta(contas, n);
                break;
            case 4:
                printf("Encerrando.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}