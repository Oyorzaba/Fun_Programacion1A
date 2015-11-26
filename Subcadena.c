#include<stdio.h>
#include <stdlib.h>
#include<string.h>
    char cadena[10];
	char letra1[10];
	//char letra2;
    int i;
	int n;
	int cont=0;
	int cont2=0;
	//int aux=0;
	//int aux2=0;
    int main(){
	printf("ingrese la palabra:\n");
	scanf("%s",cadena);

	printf("ingrese la subcadena:\n");
	scanf("%s",letra1);
	getchar();
	for(i=0; i<strlen(cadena);i++){
    for(n=0; n<strlen(letra1);n++){


        if(cadena[i]!=letra1[n]){
            cont2=cont2+1;

        }
        if(cadena[i]==letra1[n]){

            cont=cont+1;
            cont2=cont2-3;
        }

    }
 }

    if(cont2>cont){

      printf("No existe la subcadena %s en la cadena %s\n",letra1,cadena);
    }
    else if(cont<cont2){
      printf("Si existe la subcadena %s en la cadena %s\n",letra1,cadena);
    }else if(cont>cont2){
     printf("Si existe la subcadena %s en la cadena %s\n",letra1,cadena);
    }
	system("pause"); 
}

