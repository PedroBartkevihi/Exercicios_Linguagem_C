#include <stdio.h>

/*Crie um programa para gerenciar o estoque de um fornecedor. Para tal, leia dados de n
produtos, onde n é fornecido pelo usuário: código, nome, preço unitário e quantidade. Em
seguida, leia dados de k pedidos, onde k é fornecido pelo usuário: número, código do produto
e quantidade. Ao final, imprima um relatório com todos os pedidos informando:
a) Dados do pedido e o nome do produto
b) Situação do pedido: produto não existe, sem estoque ou atendido.
c) Valor a pagar (somente se o pedido foi atendido).*/

#define MAX_PRODUTOS 100
#define MAX_PEDIDOS 100
#define TAM_NOME 40

typedef enum {
    NAO_EXISTE,
    SEM_ESTOQUE,
    ATENDIDO
} Situacao;

typedef struct {
    int codigo;
    char nome[TAM_NOME];
    float preco;
    int quantidade;
} Produto;

typedef struct {
    int numero;
    int codigo_produto;
    int quantidade;
    int indice_produto;
    Situacao situacao;
    float valor;
} Pedido;

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

int le_int_intervalo(int min, int max) {

    int x;

    x = le_int();
    while (x < min || x > max) {
        printf("Digite um valor entre %d e %d: ", min, max);
        x = le_int();
    }

    return x;
}

int busca_produto(Produto produtos[], int n, int codigo) {

    int i;

    for (i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

void le_produtos(Produto produtos[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        produtos[i].codigo = le_int();
        while (busca_produto(produtos, i, produtos[i].codigo) != -1) {
            printf("Codigo ja cadastrado, digite outro: ");
            produtos[i].codigo = le_int();
        }

        printf("Nome: ");
        le_linha(produtos[i].nome, TAM_NOME);

        printf("Preco unitario: ");
        produtos[i].preco = le_float();
        while (produtos[i].preco < 0) {
            printf("O preco nao pode ser negativo: ");
            produtos[i].preco = le_float();
        }

        printf("Quantidade em estoque: ");
        produtos[i].quantidade = le_int();
        while (produtos[i].quantidade < 0) {
            printf("A quantidade nao pode ser negativa: ");
            produtos[i].quantidade = le_int();
        }
    }
}

void le_pedidos(Pedido pedidos[], int k) {

    int i;

    for (i = 0; i < k; i++) {
        printf("\nPedido %d\n", i + 1);

        printf("Numero do pedido: ");
        pedidos[i].numero = le_int();

        printf("Codigo do produto: ");
        pedidos[i].codigo_produto = le_int();

        printf("Quantidade: ");
        pedidos[i].quantidade = le_int();
        while (pedidos[i].quantidade <= 0) {
            printf("A quantidade deve ser positiva: ");
            pedidos[i].quantidade = le_int();
        }
    }
}

void processa_pedido(Pedido *p, Produto produtos[], int n) {

    Produto *prod;

    p->indice_produto = busca_produto(produtos, n, p->codigo_produto);
    p->valor = 0;

    if (p->indice_produto == -1) {
        p->situacao = NAO_EXISTE;
        return;
    }

    prod = &produtos[p->indice_produto];

    if (prod->quantidade < p->quantidade) {
        p->situacao = SEM_ESTOQUE;
        return;
    }

    prod->quantidade -= p->quantidade;
    p->valor = p->quantidade * prod->preco;
    p->situacao = ATENDIDO;
}

const char *texto_situacao(Situacao s) {

    switch (s) {
        case NAO_EXISTE:
            return "Produto nao existe";
        case SEM_ESTOQUE:
            return "Sem estoque";
        case ATENDIDO:
            return "Atendido";
    }

    return "";
}

void imprime_relatorio(Pedido pedidos[], int k, Produto produtos[]) {

    int i;
    const char *nome;

    printf("\n%-8s %-8s %-20s %6s  %-19s %12s\n",
           "Pedido", "Codigo", "Produto", "Qtd", "Situacao", "Valor");

    for (i = 0; i < k; i++) {
        if (pedidos[i].indice_produto == -1) {
            nome = "---";
        } else {
            nome = produtos[pedidos[i].indice_produto].nome;
        }

        printf("%-8d %-8d %-20s %6d  %-19s ",
               pedidos[i].numero, pedidos[i].codigo_produto, nome,
               pedidos[i].quantidade, texto_situacao(pedidos[i].situacao));

        if (pedidos[i].situacao == ATENDIDO) {
            printf("R$ %9.2f\n", pedidos[i].valor);
        } else {
            printf("%12s\n", "-");
        }
    }
}

int main() {

    Produto produtos[MAX_PRODUTOS];
    Pedido pedidos[MAX_PEDIDOS];
    int n, k, i;

    printf("Quantos produtos (1 a %d)? ", MAX_PRODUTOS);
    n = le_int_intervalo(1, MAX_PRODUTOS);
    le_produtos(produtos, n);

    printf("\nQuantos pedidos (1 a %d)? ", MAX_PEDIDOS);
    k = le_int_intervalo(1, MAX_PEDIDOS);
    le_pedidos(pedidos, k);

    for (i = 0; i < k; i++) {
        processa_pedido(&pedidos[i], produtos, n);
    }

    imprime_relatorio(pedidos, k, produtos);

    return 0;
}