#include <stdio.h>

// ejercicio numero 1 de la guia de santi

float tasainteres (int C,float x,int n){
	float a,t=(1+x/100);
	int i=0;

	

	for(i=1;i<n;i++){

		a=1+(x/100);

		t=t*a;

		}


	return C*t;
	}

int main (void){
	int C,n;
	float x=6;
	n=5;
	C=4000;

	printf("tasa de interes: %f\naños a pagar: %i\n",x,n);
	printf("monto inicial: %i\nmonto con intereses: %f\n",C,tasainteres(C,x,n));
return 0;
}