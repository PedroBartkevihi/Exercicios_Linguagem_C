
#include <stdio.h>

int main()
{
    int placa;
    
    printf("Digite o ultimo numero da placa: ");
    scanf("%d", &placa);
    
    switch(placa)
    {
        case 0:
        printf("Vencimento : 30/04");
        break;
        
        case 1:
        printf("Vencimento : 31/05");
        break;
        
        case 2:
        printf("Vencimento : 30/06");
        break;
        
        case 3:
        printf("Vencimento : 31/07");
        break;
        
        case 4:
        printf("Vencimento : 30/08");
        break;
        
        case 5:
        printf("Vencimento : 30/09");
        break;
        
        case 6:
        case 7:
        printf("Vencimento : 30/11");
        break;
        
        case 8:
        case 9:
        printf("Vencimento : 31/12");
        
    }
}
