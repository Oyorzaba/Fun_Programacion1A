/*Programa que convierta de Megabytes a bits, bytes, gigabytes y terabytes*/
#include<stdio.h>//Librería de E/S
  float mega;
  int bit;
  int byte;
  float giga;
  float tera;
  int main()
  {//Inicio main
  printf("Programa que convierta una unidad de datos donde la base seran los MEGABYTES\n");
  printf("Ingresa un valor en Megabytes");
  scanf("%f", &mega);
   bit=(int)mega*1024*1024*8;
   byte=(int) mega*1024*1024;
   giga=mega/1024;
   tera=mega/1024/1024;
  printf("El resultado en bits es: %d \n", bit);
  printf("El resultado en bytes es: %d \n", byte);
  printf("El resultado en Gigabytes es: %f \n", giga);
  printf("El resultado en bits es: %f \n", tera);
  return 0;
  }//Fin main
