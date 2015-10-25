/*Programa que reconozca el mes por el numero*/
#include<stdio.h>//Libreria de E/S
     int numero;
	 int main()
     {//inicio main
     printf("Introduce el numero del mes\n");
     scanf("%d", &numero);
     if(numero==1)
     printf("Enero\n");
     if(numero==2)
     printf("Febrero\n");
     if(numero==3)
     printf("Marzo\n");
     if(numero==4)
     printf("Abril\n");
     if(numero==5)
     printf("Mayo\n");
     if(numero==6)
     printf("Junio\n");
     if(numero==7)
     printf("Julio\n");
     if(numero==8)
     printf("Agosto\n");
     if(numero==9)
     printf("Septiembre\n");
     if(numero==10)
     printf("Octubre\n");
     if(numero==11)
     printf("Noviembre\n");
     if(numero==12)
     printf("Diciembre\n");
     if(numero>=12)
     printf("No es un mes\n");
     return 0;
     }//fin main
     
     
      
