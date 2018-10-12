#include<stdio.h>

void suma1();
float suma2(float h);
void suma3(float x);
float suma4();

int main()
{
	int e;
	float x,x2;
	float a;
	float xx;
	
	printf("Elige como quieres que se calcule el programa: \t (1) sin argumentos de entrada ni salida \t (2) con argumentos de entrada y salida\t (3) con argumentos de entrada unicamente\t (4) con argumentos de salida unicamente\n");
	scanf("%i",&e);

	if(e==1)
	suma1();
	return 1;


	if(e==2)
	
	
	printf("Introduce un numero para sumarle ese mismo numero: \n");
	scanf("%f",&x);
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
	return 2;

	if(e==3)
	
	
	printf("Introduce un numero para sumarle ese mismo numero: \n");
	scanf("%f",&a);
	suma3(a);
	return 3;


	if(e==4)

	xx=suma4();
	
	printf("La suma de %f es %f\n",xx);
	return 4;

return 0;
}
void suma1()
{
	float x,x2;
	printf("Introduce un numero para sumarle ese mismo numero: \n");
	scanf("%f",&x);
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
}
float suma2(float h)
{
	return suma2(h);
}
void suma3(float x)
{
	float x2;
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
	
}
float suma4()
{
	float x,x2;
	printf("Introduce un numero para sumarle ese mismo numero: \n");
	scanf("%f",&x);
	x2=x+x;
	return x2;
}
