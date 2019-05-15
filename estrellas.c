#include <stdio.h>
#include <stdlib.h>

typedef enum espectral_t {
	O,B,A,F,G,K,M
}clase;

clase tipo_espectro (int temperatura);

int main (void){
	char t [10];
	int temperatura;
	printf("Introduzca una temperatura estelar entre 1700-50000 kelvins:\n");
	temperatura=atoi(fgets(t,10,stdin));

	switch(tipo_espectro(temperatura)){
		case 0: 
			printf("El color de la estrella es: Azul\n");
			break;
		case 1:
			printf("El color de la estrella es: Blanco azulado\n");
			break;
		case 2:
			printf("El color de la estrella es: Blanco\n");
			break;
		case 3:
			printf("El color de la estrella es: Blanco amarillento\n");
			break;
		case 4:
			printf("El color de la estrella es: Amarillo\n");
			break;
		case 5:
			printf("El color de la estrella es: Naranja\n");
			break;
		case 6:
			printf("El color de la estrella es: Rojo\n");
			break;
		default:
			break;	
	}

	return 0;
}

clase tipo_espectro (int temperatura){
	clase espectro;

	if (1700<=temperatura && temperatura<=3200)
		espectro=M;
			
	else if(3200<temperatura && temperatura<=4600)
		espectro=K;
			
	else if(4600<temperatura && temperatura<=5700)
		espectro=G;
		
	else if(5700<temperatura && temperatura<=7100)
		espectro=F;
		
	else if(7100<temperatura && temperatura<=9600)
		espectro=A;
			
	else if(9600<temperatura && temperatura<=28000)
		espectro=B;
			
	else if(28000<temperatura && temperatura<=50000)
		espectro=O;
			
	else
		printf("ingreso un numero no valido\n");

	return espectro;

}