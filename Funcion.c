#include<stdio.h>//Funcion
	int resultado;
	int suma(int N1, int N2){
	int res;
	res=N1+N2;  //cuerpo de la funcion
	resultado=N1+N2;
	return res;	
	}
	

	int main(){
	int res;
	res=suma(2,3);
	printf("El resultado es: %d\n", res);
	printf("El resultado es: %d", resultado);
	}
