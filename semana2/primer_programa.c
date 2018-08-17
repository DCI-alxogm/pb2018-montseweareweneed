/*Creado el 12 de agosto del 2018 por Montse*/

#include<stdio.h>

int main()
{
	int edad,edad2;
	char nombre[20];

	
	printf("Dime tu nombre\n");
	scanf("%s",&nombre);
	printf("Introduce tu edad; \n");
        scanf("%i",&edad);
	edad2=edad+10;
	printf("%s tu edad en el 2028 es; %i \n",nombre,edad2);
 
}




