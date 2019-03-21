/*Teniendo el radio de un cilindro y su altura escribir funciones que calculen:

    El diámetro del cilindro.
    La circunferencia.
    El área de la base.
    El volumen del cilindro.
    El área del cilindro.*/

#include <stdio.h>

int diametro (int r){
	return r*2;
}

float circunferencia (int d,float pi){

	return d*pi;
}

float area (int r,float pi){
	return (r*r)*pi;
}

float volumen (int h, float a){
	return a*h;
}

float area_cilindro (int h,int r,float pi){
	return (r*h)*2*pi+(r*r)*pi;

}
//2pi*r*h+2pi*r*r

int main (void){
	float pi;
	pi=3.14;

	int r,h;
	r=5;
	h=15;

	printf("radio del cilindro: %i\naltura del cilindro: %i\n",r,h);
	printf("diametro: %i\n",diametro(r));
	printf("circunferencia: %f\n",circunferencia(diametro(r),pi));
	printf("area: %f\n",area(r,pi));
	printf("volumen: %f\n",volumen(h,area(r,pi)));
	printf("area del cilindro: %f\n",area_cilindro(h,r,pi));

	return 0;
}

