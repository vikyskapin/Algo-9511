#include <stdio.h>
#include <stdlib.h>

//typedef data_type <alias_name>

//typedef int my_int; //las identidades no ocupan espacion en la memoria, y pueden declararse globalmente o localmente. 
	 
/* ### EJEMPLO CON UN INT

int main (void){ 

	my_int y=0; 

	printf(" %i\n",y);

	return 0;

}	*/
//### EJEMPLO CON UN ARRAY
/*
int main (void){
	typedef int array[5];

	array x={10,20,30,40,50};
	for(my_int i=0;i<5;i++){
		printf("%i\n",x[i]);
	}


	return 0;
}

*/

struct Emp {
	int eno;
	char ename[20];
	float esal;
};
	/*struct Emp employee;
		struct emp es un data type y es raro declarar un tipo de variable con dos palabras por eso se usa typedef para ponerle un alias 

	typedef struct Emp employee;

	typedef employee e;*/

char* read (void);

int main(void){
 char name[20];
 printf("enter name\n");
 fgets(name,20,stdin);
 printf("welcome,%s\n",name);

 return 0;
	
}

char* read (void){
	char *name=NULL;
	printf("enter name\n");
	fgets(name,20,stdin);
	return name;
}