/*Programa que almacene numeros y los ordene de mayo a menor*/
#include<stdio.h>//Libreria de E/S
		int main()
        {
             int num1;
             int num2;
             int num3;
             int mayor;
             int medio;
             int menor;
             printf("Ingrese el primer numero: \n");
             scanf("%d", &num1);
             printf("Ingrese el segundo numero: \n");
             scanf("%d", &num2);
             printf("Ingrese el tercer numero: \n");
             scanf("%d", &num3);
             
             if (num1>num2 && num1>num3)
             mayor=1;
             else
             if (num2>num3)
             mayor=num2;
             else 
             mayor=num3;
             if (num1<num2 && num1<num3)
             menor=num1;
             else
             if (num2<num3)
             menor=num2;
             else
             menor=num3;
             if (num1!=mayor && num1!=menor)
             medio=num1;
             else
             if (num2!=num3)
             medio=num2;
             else 
             medio=num3;
			 printf("Sus numeros fueron:\n");
			 printf("numero mayor %d\n", mayor);
			 printf("numero medio %d\n", medio);
			 printf("numero menor %d\n", menor);
			 
             return 0;
             }
             
             
             
