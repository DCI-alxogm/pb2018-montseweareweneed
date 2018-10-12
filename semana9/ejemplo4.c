
#include<stdio.h>
float cuadrado();
int main()
{
float x2;
x2=cuadrado();
printf("%f",x2);
return 0;
}


float cuadrado()
{
float x,xx;
printf("introduce un número \n");
scanf("%f",&x);
xx=x*x;
return xx;
}
