#include<stdio.h>
   int m1;
   int m2;
   int m3;
   int num;
   int main()
   {
   	printf("Ingrese los metros que cae\n");
   	scanf("%d", &m1);
   	printf("Ingrese los metros en los que sube\n");
   	scanf("%d", &m2);
   	printf("Ingrese los metros en los que baja\n");
   	scanf("%d", &m3);
   	if (m2<=m3)
   	{
			printf("El cangrejo nunca podra salir");
	}
	for (num=0; m1>=0; num++)
    {
   		if (m2>=0 && m3>=0)
   		{
			m1=m1-m2;
			m1=m1+m3;
		}   		
	}
    printf("Los dias que tardo en salir fueron\n%d", num);	
	return 0;		
    }

