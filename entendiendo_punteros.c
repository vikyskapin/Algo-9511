int i = 3, *pint; 

float f = 10.1;

pint= & i;// a pint le anoto la direccion de memoria de i

*pint = 10; // a lo apuntado por pint le asigno el valor 10 (modifico el contenido de la direccion)

*pint = f; //no le puedo asignar a una variable declarada como un int un float

pint= & f; // intento apuntar una variable float en un puntero declarado como int, si bien lo hace, pierde datos. 

pint = 4321; // a un puntero de tipo int le intento asignar valores fijos cuando tengo que pasarle una direccion de memoria. 

### ej numero 3 ####

Analizar las siguientes expresiones. Indicar si hay errores y justificar.

--a--

	float var, set[] = {1.0, 2.0, 3.0, 4.0, 5.0};

	float *p;

	p = set;//a p lo  apunto hacia la direccion de memoria de set[0]
	var = *p; //a var le asigno lo apuntado por p 
	*p=10.0; // modifico el contenido de set [0] por 10.0 

--b--

	int conj[5], list[]={5, 4, 3, 2, 1};
	int *punt;

	punt = list;//apunto el puntero a la direcc de memoria de list[0]
	conj = punt;//esto esta mal le estoy asignando a un vector de enteros punteros
	list = conj;//tambien esta mal 
	punt = &conj;//aca para que este bien punt deberia ser un doble puntero, &conj es un puntero que apunta a la direcc de memoria de conj.

--c-- 

	int *pint, arrayint[5];
	float *pfloat, arrayfloat[5];

	pint = arrayint; // yes pint=array[0]
	pfloat = arrayfloat; // yes
	pint += 1;//pint=pint + 1 estoy en el pint=array[1]
	pfloat += 1;
	pint++;//me muevo un lugar en la direccion de memoria pint=array[2]
	pfloat++;
	pint -= 1;//pint = array[1]
	pfloat -=1;

--d--

	int *p, a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};// declaro un puntero a int y un array de ints

	int var;// declaro una variable tipo int
	p = a;// a p le asigno el lugar de memoria de a[0]
	*p = 33; //modifico lo apuntado en a[0]=33 
	var = *p;//var=33
	var = *(p+1);//var=a[1]=1
	var = *(p+3);//var=a[3]=3
	var = *(p++);//var=p[0]=33 y despues p=a[1]
	var = *p++;//var=a[1]=1 p=a[2]
	var = *(++p);//var=p+1=a[3]=3  p=a[3]
	var = *++p;//var=a[4]=p+1 
	var = ++*p;//le sumo uno al 4 pero el lugar de memoria es a[4]
	var = (*p)++;//a lo apuntado por p le sumo uno 5+1 var=5 pero p=6
	var = ++(*p);//a lo apunta
	var = *p+1;//

--e--

	int *p, a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	var = *(a+1);// yes 
	var = *(a++);// NO necesitas sumarle un valor especifico y no un incremento.

### ej numero 4 ### 

int *ip, **ipp, (*ip16)[16], i, j;//puntero a ints, puntero a puntero a ints, puntero a un array de 16 ints
int matriz[5][16];

Indique cuál o cuáles de las siguientes expresiones son válidas, cuál o cuáles pueden producir errores y qué error puede o pueden generar:

    ip16 = matriz;//valida al vector de punteros le asigno la matriz
    ip = (int *)matriz;// casteo a entero la matriz y lo guardo en ip 
    ipp = (int **) matriz;// guardo la posicion de la matriz en todo, cambia la manera de acceder al dato y toma al int como un puntero, se rompe todo
    *(*(ip16 + i) + j)//esta pidiendo al puntero que se mueva i punteros.
    *(*(matriz + i ) + j)//== matriz[i][j]

### ej numero 5 ### 

    Escribir un programa que imprima cada uno de los elementos de un arreglo dos dimensional utilizando un puntero para acceder a los mismos, en lugar de utilizar subíndices. Utilizar el siguiente arreglo y los punteros indicados abajo:

    int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};
    int * ptr;
    int (*ptr2vector)[4];
    int fila, col;

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















