#include <stdio.h>
#include<math.h>

int main ()

{
	float X,Y1,Y2,Y3,rad;
	printf("Dame un valor para X\n");
	scanf("%f",&X);
	Y1=exp(-X);
	printf("Tu resultado al evaluar en la funcion y=exp(-X)es igual a:\n",Y1);
	rad=(X*3.1416)/180;
	printf("Y1:%f\n",Y1);
	printf("radianes:%f\n"rad);	
	
	printf("dime tu resultado en radianes\n");
	scanf("%F",rad);
	Y2=cos(rad)+(2*tan(rad));
	Y3=log(X)+(3*pow(X,2));
	printf("\n resultado de la segunda funcion es:%f",Y2);
	printf("\n resultado de la tercera funcion es:%f",Y3);

}






}
