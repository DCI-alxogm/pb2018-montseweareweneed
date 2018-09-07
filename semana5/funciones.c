#include<stdio.h>
#include<math.h>

int main()
{
int n,i;
float x,del, ex, lo, si, co, ra, a, b;
        printf("Este programa calcula funciones:\n");
	printf("valor inicial:\n");
	scanf("%f", &a);
	printf("Valor final: \n");
	scanf("%f", &b);
	printf("el espaciado que quieres es:\n");
	scanf("%f", &del);
n=((b-a)/del);
for(i=0;i<=n;i++)
{

     x=(a+(del*i));
     ex=exp(x);
     lo=log(x);
     si=sin(x);
     co=cos(x);
     ra=sqrt(x);
     printf("El número dado es %f \n", x); 
     printf("El exponente del número es: %f \n", ex);
     printf("El logaritmo del  número es:%f \n", lo);
     printf("El seno del número es: %f \n", si);
     printf("El coseno del número es:%f \n", co);
     printf("La raíz del número es: %f \n", ra);
}
return 0;
}
