#include<stdio.h>
    char cadena[50];
	char subcad[50];
	int i=0;
	int n=0;
	int cont=0;
	int existe=0;
    int main()
    {
	printf("ingrese la palabra:");
	scanf("%s",cadena);

	printf("ingrese la subcadena:");
	scanf("%s",subcad);
	getchar();

	while(cadena[i]!='\0'){


        while(cadena[i]==subcad[n]){

         i++;
         n++;

          if(subcad[n]=='\0'){
          	existe=1;
             printf("si existe");
            break;
          }
        }
        i++;
        n=0;


  }
  if(n==0){

    printf("no existe");
  }
  
}

