#include <stdio.h>
    int main() 
   {//inicio main
	
	int N1;
	int N2=1;
	int p=1;
	
	
	printf("ingrese un numero\n");
	scanf("%d",&N1);
	
	while(N2<=N1){
		
		if(N2%2==1){
			
			printf("%d\n",N2);
			
			
		}else{
			
			while(p<=N2){
			
				printf("%d\n",N2);
				p=p+1;
			}
			
		}
		N2=N2+1;
	    p=1;
	}
	
	return 0;
}//fin main

