/*Numeros pares*/
#include<stdio.h>
    int N1;
    int N2;
	int i;
    int main()
	{//inicio main	
	
	printf("ingrese un numero:\n");
	scanf("%d",&N1);
	for(i=1;i<=N1;i++){
		
		if(i%2==0){
			for(N2=1;N2<=i;N2++){
				
				printf("%d",i);
				
				
				
			}         
			
		}else{        
			printf("\n");
			printf("%d",i);            
			printf("\n");
		}
	}
	
	return 0;
}//fin main
