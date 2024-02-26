#include <stdio.h>

int main() {
    
    int n, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) 
    
    {
        int digito = n % 10;
        soma += digito;      
    }

    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}

