/*Programa de sumas sucesivas*/
#include<stdio.h>//Libreria de E/S
    int N1;
    int N2;
    int resultado;
    int i;
    int main()
    {//inicio main
    printf("Introduce el primero numero\n");
    scanf("%d", &N1);
    printf("Introduce el segundo numero\n");
    scanf("%d", &N2);
    i=1;
    while(i<=N1)
	{
	resultado=resultado+N2;
    i=i+1;
		
	}
	printf("El resultado es: %d", resultado);
	return 0;
    
	}//fin main
