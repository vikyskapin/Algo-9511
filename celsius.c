//Escribir una función que convierta un valor en grados Fahrenheit a grados Celsius. La fórmula que los relaciona es F=95C+32.

#include <stdio.h>

double celsius (double f){
	double c;
	return c=((f-32)*5)/9;
}

//Escribir una función que convierta un valor en grados Celsius a grados Fahrenheit.

double farenheit (double c){
	double f;
	return f=(9*c/5)+32;
}

int main (void){
	double f;
	f=100;
	printf("la temperatura en farenheit es: %f, en celsius es: %f\n",f,celsius(f));
	printf("la temperatura en celsius es: %f, en farenheit es: %f\n",celsius (f),farenheit(celsius(f)));
	return 0;

}