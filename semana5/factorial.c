#include<stdio.h>

int main()
{
	int i,o,fact=1,numero,resultado;
	 while(0==1||2)
	 {

	
	
	printf("Imprime un numero para obtener su factorial\n");
	scanf("%i",&numero);
	if (numero<0)fact=0;
	else if(numero==0) fact=1;
	else{
		for(i=1;i<=numero;i++)

	{
			fact=fact*i;
	
	resultado=fact;



	}
		printf("\n tu factorial es:%i",resultado);


	}


	printf("¿Quieres ejecutar de nuevo el programa? teclea 1 para continuar o 2 para salir?\n");
 scanf("%i",&o);
}
return 0;
}


	


