#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba dois números 
e mostre o maior deles. Caso eles sejam iguais,
 deve-se mostra a mensagem "Os números são iguais*/
 
 int valor(int *valor1, int *valor2 ){
 	int resp;
 	
 	if(*valor1 == *valor2){
		printf("Os números são iguais");
	}else{
		 resp = *valor1 > *valor2 ? *valor1 : *valor2;
		 printf("O maior valor é %d", resp);
	}
 }
 
int main(int argc, char *argv[]) {
	int valor1, valor2;
	
	printf("Informe o primerio valor: ");
	scanf("%d", &valor1);
	printf("Informe o Segundo valor: ");
	scanf("%d", &valor2);	
	
	valor(&valor1, &valor2);
	
	return 0;
}
