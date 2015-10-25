/*Programa de una lavadora*/
#include<stdio.h>//Libreria de E/S
  int ropa;
  int TipoRopa;
  int Delicada;
  int Normal;
  int Sucia;
  int main()
  {//inicio main
  printf("Introduzca la cantidad de ropa\n");
  scanf("%d", &ropa);
  if(ropa>=0 && ropa<=10)
  printf("Minimo\n");
  if(ropa>=11 && ropa<=15)
  printf("Medio\n");
  if(ropa>=16 && ropa<=20)
  printf("Maxima\n");
  else
  printf("No lavar\n");

    
  printf("Introduzca el tipo de ropa\n");
  scanf("%d", &TipoRopa);
  if(1==Delicada)
  printf("Tardara 5min\n");
  if(2==Normal)
  printf("Tardara 10min\n");
  if(3==Sucia)
  printf("Tardara 20min\n");
  
 }//fin main
  
  
