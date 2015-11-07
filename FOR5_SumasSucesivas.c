/*Sumas sucesivas*/
#include <stdio.h>
    int N1;
	int N2;
	int resultado;
	int i;
    int main() 
	{//inicio main
	
	printf("ingrese el primer numero:\n");
	scanf("%d",&N1);
	printf("ingrese el segundo numero:\n");
	scanf("%d",&N2);
	
	for(i=1;i<=N1;i++){
		
		resultado=resultado+N2;
		
		
	}
	
	printf("el resultado es: %d",resultado);
	
	return 0;
}//fin main
