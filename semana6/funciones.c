#include <stdio.h>
#include <math.h>

FILE *funciones;


void evaluar(double a){	
	double res;
	fprintf(funciones, "\nPara x = %f", a);
	res = exp(a);
	fprintf(funciones, "\nExponencial es igual a %f", res);
	res = log10(a);
	fprintf(funciones, "\nLogaritmo es igual a %f", res);
	res = sin(a);
	fprintf(funciones, "\nSeno es igual a %f",res);
	res = cos(a);
	fprintf(funciones, "\nCoseno es igual a %f", res);
	res = sqrt(a);
	fprintf(funciones, "\nRaíz cuadrada es igual a %f\n", res);
}

int main(){
	funciones = fopen("funciones.txt", "w");
	
	printf("\n Introduzca la variable x: ");
	double x, aux, fin, n, delta;
	scanf("%lf", &x);

	printf("\nEscriba el valor final: ");
	scanf("%lf", &fin);
	
	printf("\nEscriba el espaciado deseado para el intervalo: ");
	scanf("%lf", &n);

	for(int i=0 ; (x+n*i)<=fin ; i++){
		
		aux = x+n*i;
		
		evaluar(aux);		
	}
	printf("\n Los resultados se encuentran en el archivo 'función.txt'\n");
	fclose(funciones);	
	return 0;
}
