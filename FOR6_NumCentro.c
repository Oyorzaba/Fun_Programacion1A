/*Numeros del centro*/
#include <stdio.h>
    int N1;
    int N2;
    int main() 
	{//inicio main 

	
	printf("ingrese el primer numero:");
	scanf("%d",&N1);
	printf("ingrese el segundo numero:");
	scanf("%d",&N2);
	
	if(N1<N2){
		
		for(;N1<=N2;N1++){
			
			printf("%d\n",N1);
			
			
		}
		
	}else{
		
		for(;N1>=N2;N1--){
			
			printf("%d\n",N1);
			
		}		
		
	}
	
	return 0;
}//fin main
