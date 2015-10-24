/*Programa  que resuelva suma, resta, multiplicacion y division*/
#include<stdio.h>//Librería de E/S
  int N1;
  int N2;
  int suma;
  int resta;
  int mult;
  float div;
  int main()
  {//Inicio main
  printf("Dame un numero");
  scanf("d%", &N1);
  printf("Dame otro numero");
  scanf("d%", &N2);
  suma=N1+N2;
  resta=N1-N2;
  mult=N1*N2;
  div=N1/N2;
  div=(float)N1/N2;
  Printf("El resultado de la suma es: %d\n", suma);
  Printf("El resultado de la resta es: %d\n", resta);
  printf("El resultado de la multiplicacion es: %d\n", mult);
  printf("El resultado de la division es: %f\n", div);
  
  return 0;
  
  
  
  }//Fin main
  

