#include<stdio.h>
    int identidad[3][3];
    int i;
    int j;
    int main()
    {
    	identidad[0][0]=0;
    	identidad[0][1]=0;
    	identidad[0][2]=1;
    	identidad[1][0]=0;
    	identidad[1][1]=1;
    	identidad[1][2]=0;
    	identidad[2][0]=1;
    	identidad[2][1]=0;
    	identidad[2][2]=0;
    	
    	for(i=0; i<3; i++){
    		for(j=0; j<3; j++){
    			printf("%d ", identidad[i][j]);
      		}
      		printf("\n");
    	}
    }
