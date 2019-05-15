#include <stdio.h>
#include <stdlib.h>

#define MAX 1000


int main (void){
	int segundos;

	char cadena[MAX];

	puts("ingrese una cantidad de segundos");

	fgets(cadena,MAX,stdin);

	segundos=atoi(cadena);

	if(segundos<0){
		fprintf(stderr, "%s\n","numero invalido");
	}

	int s=segundos%60;
	segundos/=60;
	int m=segundos%60;
	int h=segundos/60;

	puts("cantidad en horas minutos y segundos:");

	printf("%dh %d' %d\"\n",h,m,s);

	return 0;//para saber que le devuelve el programa a la maquina por consola escribo "echo $?"
}