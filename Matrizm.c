#include<stdio.h>//programa de una matriz 3x3
   int MatA[3][3], MatB[3][3], MatC[3][3], i, j;
   int main(){
   	printf("Da el valor de la matriz a 3 por 3: \n");
   	for(i=0; i<3; i++){
   		for(j=0; j<3; j++){
   			scanf("%d", &MatA[i][j]);
		   }
	   }printf("Su matriz a fue: \n");
	   for(i=0; i<3; i++){
	   	for(j=0; j<3; j++){
	   		printf("%d", MatA[i][j]);
		   }printf("\n");
	   }printf("Da el valor de la matriz b 3 por 3: \n");
	   for(i=0; i<3; i++){
	   	for(j=0; j<3; j++){
	   		scanf("%d", &MatB[i][j]);
		   }
	   }printf("Su matriz b fue: \n");
	   for(i=0; i<3; i++){
	   	for(j=0; j<3; j++){
	   		printf("%d", MatB[i][j]);
	   	}printf("\n");
	   }
	   for(i=0; i<3; i++){
	   	for(j=0; j<3; j++){
	   		MatC[i][j]=MatA[i][j]*MatB[i][j];
	   	}
	   }printf("El resultado de su matriz fue: \n");
	   for(i=0; i<3; i++){
	   	for(j=0; j<3; j++){
	   		printf("%d", MatC[i][j]);
	   	}printf("\n");
	   }
   }
