/*Este programa es creado por Montserrat Cruz Aguilar*/

#include<stdio.h>
	int main(){
	int X = 10,i;	
	float num [X];
	printf("\nEscribe el tamaño del arreglo: ");
	scanf("%i", &X);

	for(int i = 0; i < X; i++){num[i]=0.0;} //Asigna el valor 0 a cada uno de los elementos del arreglo
	
		
	for (int i = 0; i < X; i++){ //Asigna el valor a partir de lo proporcionado por el usuario 
		scanf("%f",&num[i]);	
	}
	for (i = 0; i < X; i++){
		printf("%f\n", num[i]);	//Imprime a la pantalla el valor del elemento i-esimo del arreglo 
	}
			

return 0;
}

