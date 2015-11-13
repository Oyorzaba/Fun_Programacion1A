#include<stdio.h>
    int cal;
    int calificaciontotal;
    float prom;
    int cont;
    int materias[10];
    int main()
    {
    while (cont<10){
    printf("Ingrese la calificacion \n");
    scanf("%d",&cal);
    cont++;
    calificaciontotal=calificaciontotal+cal;
    
    }
    prom=calificaciontotal/10;
    printf("El promedio es: %f\n",prom);
    }

