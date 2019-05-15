/*Escriba una función que reciba una matriz, con un ancho máximo de 1050 columnas aunque lo utilizado puede ser menor, e imprima por pantalla el contenido de un archivo Net PBM. Por ejemplo, dada una matriz canvas definida como: uchar canvas[1680][1050]; cargada con los datos del ejemplo anterior, imprima lo que se ve en el ejemplo anterior. Prototipo:

bool canvas2pbm(const uchar canvas??, size_t w, size_t h);

*/

#include <stdio.h>
#include <stdlib.h>


void canvas2pbm (int canvas[1680][1050], size_t w, size_t h);

int main (void){

	int canvas[1680][1050]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,0,0,1,1,1,0,0,1,1,0,0,0,1,1,0,0},{0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0},{0,1,0,1,0,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0},{0,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0},{0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0},{0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0}};

	canvas2pbm(canvas,15,30);


return 0;
}

void canvas2pbm (int canvas[1680][1050], size_t w, size_t h){
	int i,j;

	for (i=0;i<w;i++){

		for(j=0;j<h;j++){
			printf("%d",canvas[i][j]);
		}
		printf("\n");
	}



}

