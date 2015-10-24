#include<stdio.h> //Libreria en E/S
/*programa que sepa la tapa en la que se encuentra*/
int main()
{
	int edad;
	printf("introduzca su edad expresada en años\n");
	scanf("%d", &edad);
	if(edad >=0 && edad<=12)
	printf("eres un niño\n");
	if(edad >=13 && edad<=18)
	printf("eres un adolescente\n");
	if(edad >=19 && edad<=29)
	printf("eres un joven\n");
	if(edad >=30 && edad <=59)
	printf("eres un adulto\n");
	if(edad >=60)
	printf("eres un adulto mayor\n");
}
