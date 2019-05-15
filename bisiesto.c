#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define AGNO 2000
// escribir una funcion que calcule años bisiestos 

bool es_bisiesto (int agno){
	if (agno%4!=0);//aca entra si agno es diferente a 0 
		return false;
	if (! agno%400)
		return true;
	if (agno%100!=0)
		return true;
	else
		return false;
}

int dias_mes(int mes,int agno){
	if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
		return 31;
	if (mes==2){
		if(es_bisiesto(agno))   //es_bisiesto ? 29:28 (a)?(b):(c) a es un operador booleano (si es 0 es falso), b si se cumple, c opcion si es falso 
			return 29;
		return 28;
	}
	return 30;
}

int main (void){
	if (es_bisiesto(AGNO)==true)
		printf("el año: %i es bisiesto\n",AGNO);
	else 
		printf("el año %i no es bisiesto\n",AGNO);

	return 0;
}


// version con vectores 

int dias_mes_2(int mes,int agno){
	int dias [12]={31,0,31,30,31,30,31,31,30,31,30,31}

	if (mes==2)
		return es_bisiesto ? 29:28;

	return dias[mes-1];
}


bool es_fecha_valida(int dia,int mes,int agno){
	if (mes<0||mes>12)
		return false;
	if (dia<1||dia<dias_mes_2(mes))
		return false;
	else
		return true;
}





