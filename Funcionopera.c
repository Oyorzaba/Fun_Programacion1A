#include<stdio.h>
	int res, A, B;
	int suma(A,B){
	res=A+B;
	return res;
	}
	int resta(A,B){
    res=A-B;
	return res;
	}
	int mult(A,B){
	res=A*B;
	return res;
	}
	int div(A,B){
 	res=A/B;	
	return res;
	}
	int main(){
	printf("Ingrese el primer numero: ");
    scanf("%d",&A);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&B);
    suma(A,B);
    printf("El resultado de la suma es: %d\n",res);
    resta(A,B);
    printf("El resultado de la resta es: %d\n",res);
    mult(A,B);
    printf("El resultado de la multiplicacion es: %d\n",res);
    div(A,B);
    printf("El resultado de la divison es: %d\n",res);
    return main;
	}
