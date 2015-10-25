/*Programa que reconozca el mes por el numero*/
#include<stdio.h>//Libreria de E/S
     int numero;
     int main()
     {//inicio main
     printf("Introduce el numero del mes\n");
     scanf("%d", &numero);
     switch(numero)
     {
                   case 1:{printf("Enero");
                   }break;
                   case 2:{printf("Febrero");
                   }break;
                   case 3:{printf("Marzo");
                   }break;
                   case 4:{printf("Abril");
                   }break;
                   case 5:{printf("Mayo");
                   }break;
                   case 6:{printf("Junio");
                   }break;
                   case 7:{printf("Julio");
                   }break;
                   case 8:{printf("Agosto");
                   }break;
                   case 9:{printf("Septiembre");
                   }break;
                   case 10:{printf("Octubre");
                   }break;
                   case 11:{printf("Noviembre");
                   }break;
                   case 12:{printf("Diciembre");
                   }break;
                   default:{printf("No es un mes");
                   }break;
     return 0;
     }
     }//fin main
