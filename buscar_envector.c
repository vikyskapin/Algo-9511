#include <stdio.h>

bool esta_el_elemento(int vector[],int n,int elem){
	int i;

	for(i=0;i<n;i++){
		if(vector[i]==elem)
			return true;
	}
	
	return false;
	
}