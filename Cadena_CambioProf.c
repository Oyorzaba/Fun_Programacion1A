#include<stdio.h>
#include <stdlib.h>
char cadena[50];
char remplazar, buscar, i;
int main()
{
	scanf("%s", cadena);
	scanf(" %c", &buscar);
	scanf(" %c", &remplazar);
	for(i=0; i<50; i++){
		
		if(cadena[i]==buscar){
			cadena[i]=remplazar;
			printf("El cambio es: %s", cadena);
		}
	}
	system("pause"); 
}
	
