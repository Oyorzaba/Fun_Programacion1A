/*Programa que venda productos*/
#include<stdio.h>//Libreria de E/S
     int num;
     int productos;
     int in;
     int total,can;
     int main ()
     {//inicio main
     printf("Eliga la opcion que quiera\n");
     printf("1= para ver los productos\n");
     printf("2= para ver las ganancias\n");
     scanf("%d",&productos);
	 switch(productos)
	 {
	 	    case 1:{
			printf("Productos\n");
	 		printf("N1 Gomitas $8.00\n");
	 		printf("N2 Frutsis $5.00\n");
	 		printf("N3 Chocolates $9.00\n");
	 		printf("N4 Paletas $3.00\n");
	 		printf("N5 Galletas $11.00\n");
	 		printf("¿Que producto comprara?\n");
	 		scanf("%d", &num);
	 		
	 		if(num==1){
	 			printf("¿Cuantos productos llevara?\n");
	 			scanf("%d", &can);
	 			total=can*8;
	 			printf("Usted pagara: %d\n", total, can);
	 			
			 }
	 		else 
			if(num==2){
	 			printf("¿Cuantos productos llevara?\n");
	 			scanf("%d", &can);
	 			total=can*5;
	 			printf("Usted pagara: %d\n", total, can);
	 		}
	 		else 
			if(num==3){
	 			printf("¿Cuantos productos llevara?\n");
	 			scanf("%d", &can);
	 			total=can*9;
	 			printf("Usted pagara: %d\n",total, can);
	 	    }
	 	    else 
			if(num==4){
	 			printf("¿Cuantos productos llevara?\n");
	 			scanf("%d", &can);
	 			total=can*3;
	 			printf("Usted pagara: %d\n", total, can);
	 		}
	 		else 
			if(num==5){
	 			printf("¿Cuantos productos llevara?\n");
	 			scanf("%d", &can);
	 			total=can*11;
	 			printf("Usted pagara: %d\n", total, can);
	 		}
	 		else 
	 		printf("El numero de producto no existe, solo hay 5 productos\n");
	 		}break;
	 	    
	 		case 2:{
	 			printf("El total de la venta es: %d.00 pesos\n", total);
				break;
			 }
	 		
			 
	 }
	return main();
	 }//fin main
     
