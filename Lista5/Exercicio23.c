#include <stdio.h>
#include <ctype.h>

/*O algoritmo de Cesar usa uma chave inteira para substituir cada caracter da cadeia por outro
caracter a frente, de acordo com a chave, respeitando a ordem das letras/digitos e reiniciando
apos 'z'/'Z'/'9'. Caracteres que nao sao letras a-z ou digitos 0-9 nao sao substituidos. Leia
uma string msg e uma chave (inteiro > 0) e imprima a string criptografada.*/

#define TAM_MAX 200

int main() {

    char msg[TAM_MAX];
    int chave, len, i, desloc;

    printf("Digite a mensagem: ");
    fgets(msg, TAM_MAX, stdin);

    len = 0;
    while (msg[len] != '\0') {
        if (msg[len] == '\n') {
            msg[len] = '\0';
            break;
        }
        len++;
    }

    printf("Digite a chave: ");
    scanf("%d", &chave);

    for (i = 0; i < len; i++) {
        if (msg[i] >= 'a' && msg[i] <= 'z') {
            desloc = chave % 26;
            msg[i] = 'a' + (msg[i] - 'a' + desloc) % 26;
        } else if (msg[i] >= 'A' && msg[i] <= 'Z') {
            desloc = chave % 26;
            msg[i] = 'A' + (msg[i] - 'A' + desloc) % 26;
        } else if (msg[i] >= '0' && msg[i] <= '9') {
            desloc = chave % 10;
            msg[i] = '0' + (msg[i] - '0' + desloc) % 10;
        }
    }

    printf("Mensagem criptografada: %s\n", msg);

    return 0;
}