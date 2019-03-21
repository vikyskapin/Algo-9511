//Escribir una función que dadas la hora, minutos y segundos devuelva el tiempo en segundos.

#include <stdio.h>

double segundos (int h,int m,int s){
	double a=h*3600;
	double b=m*60;
	return a+b+s;
}

int main (void){
	int h,m,s;
	h=4;
	m=35;
	s=16;
	printf("la cantidad de segundos en %i horas, %i minutos y %i segundos es:%f\n",h,m,s,segundos(h,m,s) );
	return 0;
}
