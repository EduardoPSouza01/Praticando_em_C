#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba quatro números inteiro, calcule a soma desse números

int main(int argc, char *argv[]) {
	
	int i;
	int valor, resp=0;
	
	for(i=0; i<4; i++){
		printf("Informe um número inteiro %d: ", i+1);
		scanf("%d",&valor);
		resp += valor;
	}
	
	printf("A soma entre o valores é: %d", resp);
	
	return 0;
}

