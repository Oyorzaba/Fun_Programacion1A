#include<stdio.h>
#include<stdlib.h>
     int arreglo[10];
     int i;
     int j;
     int p;
     int main()
{
     for(i<=0; i<10; i++){
     printf("Ingresa el valor: "); 
     scanf("%d", &arreglo[i]);
}
     for(i=0; i<10; i++){
     printf("Sus valores fueron: %d\n", arreglo[i]);
}     
     for(i=0; i<(10-1); i++){  
     for(j=i+1; j<10; j++){
      
     if(arreglo[j]<arreglo[i]){
     p=arreglo[j];
     arreglo[j]=arreglo[i];
     arreglo[i]=p;
}
}
}
     for(i=0; i<10; i++){
     printf("El orden es: %d\n", arreglo[i]);
     system("pause");
}
}       
