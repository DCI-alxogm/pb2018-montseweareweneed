
/*Creado el día 22 de agosto por Montserrat Cruz Aguilar*/


#include<stdio.h>
int main()
{
	int numero1, numero2;
	printf("Introduzca dos numeros enteros: ");
	scanf("%i %i", &numero1, &numero2);

	if(numero1==numero2)
	{
		printf("Resultado: %d=%d", numero1,numero2);
	}
	else if (numero1>numero2)
	{
                printf("Resultado: %d>%d", numero1,numero2);
        }
	else 
	{
                printf("Resultado: %d<%d", numero1,numero2);
        }
	return 0;
}
		
	

	
