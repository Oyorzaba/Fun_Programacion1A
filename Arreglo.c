 #include<stdio.h>
     int arreglo[10];
     int i;
    
     int main()
     {
	 arreglo[0]=1;
     arreglo[1]=2;
	 arreglo[2]=3;
	 arreglo[3]=4;
	 arreglo[4]=5;
	 arreglo[5]=6;
	 arreglo[6]=7;
	 arreglo[7]=8;
	 arreglo[8]=9;
	 arreglo[9]=10;
	 
   	 for(i=0; i<10; i++){
   	 	arreglo[i]=arreglo[i]*10;
	      		printf("%d\n", arreglo[i]);
	      		
	      	}
     }
