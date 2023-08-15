#include <stdio.h>
#include <stdlib.h>

/*Jeremias Possui um cronograma que consegui 
marcar tempo apenas em segundos. Sabendo disso,
desenvolva um algoritmo que receba o tempo 
cronometrado em segundo, e diga quantas horas,
minutos e segundos se passaram a partir do tempo
cronometrado. */


int main(int argc, char *argv[]) {

	int seg, min, hora;
	
	printf("Informe o tempo em segundo: ");
	scanf("%d", &seg );
	
	hora = seg / 3600;
	seg = seg - (3600*hora);
	
	min = seg /60;
	seg = seg -(60*min);
	
	printf("Horas %d", hora);
	printf("Minutos %d", min);	
	printf("Segundos %d", seg);	
	
	return 0;
}
