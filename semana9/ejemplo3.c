
#include<stdio.h>
float cuadrado(float h);
int main()
{
float x,xx;
printf("introduce un número \n");
scanf("%f",&x);
xx=cuadrado(x);
printf("El cuadrado de %f es %f \n",x,xx);
return 0;
}
float cuadrado(float h)
{
return h*h;
}
