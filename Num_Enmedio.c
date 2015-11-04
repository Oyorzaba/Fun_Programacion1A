/*Programa que muestre los numeros del centro entre los numero ingresados*/
#include<stdio.h>//Libreria de E/S
    int N1;
    int N2;
	int main()
	{//inicio main
		printf("Introduce el primer numero\n");
		scanf("%d", &N1);
		printf("Introduce el segundo numero\n");
		scanf("%d", &N2);
		if(N1<=N2){
				while (N1<=N2){
				printf("\n%d\n",N1);
				N1=N1+1;
             }
			}
			else
			if(N2<=N1){

				while (N1>=N2){
				printf("\n%d\n",N1);
				N1=N1-1;
            }
			}
			return 0;
	}//fin main
