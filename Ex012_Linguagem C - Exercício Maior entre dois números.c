#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba dois n�meros 
e mostre o maior deles. Caso eles sejam iguais,
 deve-se mostra a mensagem "Os n�meros s�o iguais*/
 
 int valor(int *valor1, int *valor2 ){
 	int resp;
 	
 	if(*valor1 == *valor2){
		printf("Os n�meros s�o iguais");
	}else{
		 resp = *valor1 > *valor2 ? *valor1 : *valor2;
		 printf("O maior valor � %d", resp);
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
