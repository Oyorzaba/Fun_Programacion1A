/*Numero final proceso y suma*/
#include <stdio.h>
    int p;
	int i;
	int op;
    int main() 
    {//inicio main

	
	printf("ingrese el numero:\n");
	scanf("%d",&p);
	
	for(i=1;i<=p;i++){
		
		
		
		printf("%d\n",i);
		op=op+i;
	
		
		
	}
	
	printf("La suma del numero ingresado es: %d\n",op);
	return 0;
}//fin main
