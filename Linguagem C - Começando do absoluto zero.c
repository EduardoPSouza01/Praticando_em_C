#include <stdio.h>

int main(){

    int op;
    float valor1, valor2, resp;

    printf("\n Escolha a opera��o matem�tica que gostaria de estar realizando: \n");
    printf("\n[1] Soma, [2] Subtra��o, [3] Divis�o, [4] Multiplica��o ");
    scanf("%d",&op);
    
    printf("\n Informe o primeiro valor:");
    scanf("%f", &valor1);
    
     printf("\n Informe o segundo valor:");
    scanf("%f", &valor2);


    switch (op){
        case 1:
            resp = valor1 + valor2;
            printf("%.2f + %.2f = %.2f", valor1, valor2, resp);
            break;
        case 2:
            resp = valor1 - valor2;
            printf("%.2f - %.2f = %.2f", valor1, valor2, resp);
            break;
        case 3:
            resp = valor1 / valor2;
            printf("%.2f / %.2f = %.2f", valor1, valor2, resp);
            break;
        case 4:
            resp = valor1 * valor2;
            printf("%.2f * %.2f = %.2f", valor1, valor2, resp);
            break;
    default:
        printf("Op��o invalida!");
        break;
    }
}

