#include<stdio.h>
#include<stdlib.h>
int main()
{
	char cadena[10],cadena2[10],i,j=2;
	scanf("%s",cadena);
	for(i=0;i<10;i++)
	{
		cadena2[i]=cadena[j];
		j--;
	}
	printf("%s ",cadena2);
	system("pause"); 
}
