/*Creado por Montserrat Cruz Aguilar, el 3 de octubre*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, i, *ptr, sum=0;
	ptr=(int*) malloc(num*sizeof(int)); //con esto se reserva la memoria usando malloc
	
	printf("Introduce el número de elementos\n");
	scanf("%d",&num);
	
	if(ptr==NULL)
	{
		printf("Error! memoria no reservada.\n");
		exit(0);	
	}
	printf("Introduce los elementos del arreglo:\n");
	for(i=0; i<num; i++)
	{
		scanf("%d", ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d", sum);
	free(ptr);
	return 0;
}
