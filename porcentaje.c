/*Programa que saque porcentaje*/
#include<stdio.h>//Libreria de E/S
   float consumo;
   float total;
   float propina;
   float totalper;
   float numper;
   int main()
   {//Inicio main
   printf("Dame el total del consumo/n");
   scanf("%f", &consumo);
   propina=consumo*0.10;
   total=consumo+propina;
   ("El total a pagar es: %f/n", total);
   ("La propina es: %f/n", propina);
   ("Cuato pondra cada persona/n");
   scanf("%f", &numper);
   totalper=total/numper;
   printf("Cada persona debera pagar: %f/n", totalper);
   return 0;
   }//Fin main
