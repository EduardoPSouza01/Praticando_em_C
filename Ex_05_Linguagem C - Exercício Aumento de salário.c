#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário de um
 funcionário e o percentual de aumento, calcule 
 e mostre o valor do aumento e o novo salario*/


int main(int argc, char *argv[]) {
	float sal, perc, aumento,salario;
	
	printf("Informe o salario: ");
	scanf("%f",&sal);
	
	printf("Informe o percentula de aumento:");
	scanf("%f", &perc);
	
	aumento = sal * (perc /100) ;
	salario = sal +aumento;
	
	printf("Valor do aumento: %.2f",aumento );
	printf("Valor do salario: %.2f",salario );
	
	
	return 0;
}
