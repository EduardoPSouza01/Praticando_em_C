#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que receba quatro n�meros inteiro, calcule a soma desse n�meros

int main(int argc, char *argv[]) {
	
	int i;
	int valor, resp=0;
	
	for(i=0; i<4; i++){
		printf("Informe um n�mero inteiro %d: ", i+1);
		scanf("%d",&valor);
		resp += valor;
	}
	
	printf("A soma entre o valores �: %d", resp);
	
	return 0;
}

