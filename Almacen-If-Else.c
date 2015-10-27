/*Programa que almacene numeros y los ordene de mayo a menor*/
#include<stdio.h>//Libreria de E/S

             int num1;
             int num2;
             int num3;
             int num4;
             int num5;
             int mayor;
             int menor;
		     int main()
        {
             printf("Ingrese el primer numero: \n");
             scanf("%d", &num1);
             printf("Ingrese el segundo numero: \n");
             scanf("%d", &num2);
             printf("Ingrese el tercer numero: \n");
             scanf("%d", &num3);
             printf("Ingrese el cuarto numero: \n");
             scanf("%d", &num4);
             printf("Ingrese el quinto numero: \n");
             scanf("%d", &num5);

             if (num1>num2 && num1>num3 && num1>num4 && num1>num5){
             mayor=num1;
             }else
             if (num2>num1 && num2>num3 && num2>num4 && num2>num5){
             mayor=num2;
             }else
             if (num3>num1 && num3>num2 && num3>num4 && num3>num5){
             mayor=num3;
             }else
             if (num4>num1 && num4>num2 && num4>num3 && num4>num5){
             mayor=num4;
             }else
             if (num5>num1 && num5>num2 && num5>num3 && num5>num4){
             mayor=num5;
             }


             if (num1<num2 && num1<num3 && num1<num4 && num1<num5){
             menor=num1;
             }else
             if (num2<num1 && num2<num3 && num2<num4 && num2<num5){
             menor=num2;
             }else
             if (num3<num1 && num3<num2 && num3<num4 && num3<num5){
             menor=num3;
             }else
			  if (num4<num1 && num4<num2 && num4<num3 && num4<num5){
             menor=num4;
             }else
             if (num5<num1 && num5<num2 && num5<num3 && num5<num4){
             menor=num5;
			 }
			 printf("Sus numeros fueron:\n");
			 printf("numero mayor %d\n", mayor);
			 printf("numero menor %d\n", menor);
             return 0;
             }



