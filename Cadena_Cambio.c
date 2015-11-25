#include<stdio.h>
char cadena[10];
char letra1, letra2, i;
int main()
{
	printf("Programa que cambie dos letras\n");
 	printf("Escriba la palabra\n");
 	scanf("%s",cadena);
  	printf("Escriba la primera letra\n");
	scanf("%s",&letra1);
 	printf("Escriba la segunda letra\n");
 	scanf("%s",&letra2);
 	
 	for(i=0;i<10;i++)
 		{
 		  	if(cadena[i]==letra1)
  			{
   			  cadena[i]=letra2;
    		}
 		}
 			printf("%s",cadena);
 			system("pause"); 
}
