//Escribir una función que dadas las coordenadas de un vector en R3, (x,y,z) devuelva la norma del mismo.

#include <stdio.h>
#include <math.h>

float norma(int x,int y,int z){
	float f,n;
	f=(x*x)+(y*y)+(z*z);
	n= sqrt(f);
	return n;
}

int main (void){
	int x,y,z;
	x=5;
	y=8;
	z=4;
	printf("la norma del vector %i;%i;%i es:%f\n",x,y,z,norma(x,y,z));
	return 0;
}