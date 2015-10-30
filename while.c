#include <stdio.h>
	int final;
    int i;
	int OP;
	int main ()
    {//inicio main
		printf("Introduzca el numero\n");
		scanf("%d", &final);
		i=1;
		while(i<=final)
		{
			printf("%d\n", i);
			OP=i+OP;
			i=i+1;
		}
		printf("La operacion es la siguiente: %d\n", OP);
	}//fin main

