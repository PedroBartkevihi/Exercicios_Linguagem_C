#include <stdio.h>
#include <ctype.h>

/*Implemente a função int conta_letras(char str[]) que retorna a quantidade de letras (a..z ou
A..Z) da string str.*/

int conta_letras(char str[]) {

    int i, contador;

    contador = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char) str[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {

    char str[200];
    int resultado;

    printf("Digite uma string: ");
    fgets(str, 200, stdin);

    resultado = conta_letras(str);

    printf("Numero de letras: %d\n", resultado);

    return 0;
}