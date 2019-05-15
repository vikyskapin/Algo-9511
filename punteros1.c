#include <stdio.h>

int main (void){

	int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};
    int * ptr;
    int (*ptr2vector)[4];
    int fila=3, col=4,i=0;

    
    ptr2vector=matriz;
    
    
    for(i=0;i<fila;i++){
    	printf("(%i,", *ptr2vector[i]);
    	for (int j=1;j<col;j++){
    		 
    		 ptr=ptr2vector[i];
    		
    		 printf("%i,",*(ptr+j));

 		 }
 		 printf(")\n");
	 }
	return 0;
}