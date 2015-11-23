#include<stdio.h>
#include<stdlib.h>
int arreglo[10];
int i;
int j;
int aux;
int mediana;
int main()
{
	for(i<=0; i<10; i++){
		printf("Ingresa el valor: "); 
		scanf("%d", &arreglo[i]);
	}
	    
	for(i=0; i<(10-1); i++){  
		for(j=i+1; j<10; j++){
			
			if(arreglo[j]<arreglo[i]){
				aux=arreglo[j];
				arreglo[j]=arreglo[i];
				arreglo[i]=aux;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("El orden es: %d\n", arreglo[i]);
		
	}
	for(i=0; i<10; i++){
		if(arreglo[i]==arreglo[4]){
			mediana=arreglo[i];
			}
		
		
	}
	printf("La mediana es: %d\n", mediana);
	system("pause");
}       
     
