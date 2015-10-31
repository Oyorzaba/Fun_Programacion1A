/*Programa de sumas sucesivas*/
#include<stdio.h>//Libreria de E/S
   int N1;
   int N2;
   int resultado;
   int i;
   int main()
   {//inicio main
   printf("Ingrese el primer numero\n");
   scanf("%d", &N1);
   printf("Ingrese el segundo numero\n");
   scanf("%d", &N2);
   i=1;
   do {resultado=N2+resultado;
   i=i+1;
   
   }while
   (i<=N1);
   printf("El resultado es: %d", resultado);
   return 0;
   }//fin main
