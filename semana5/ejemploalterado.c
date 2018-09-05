#include<stdio.h>
int main()
{
 float temp_c,final,temp_k,delta;
 int n,i,o;
 while(0==1||2)
{
if(o==2)
return 1;
 printf("Hola este programa convierte tempraturas\n"); 
 printf("¿Qué valor le daras a tu temperatura incial?");
 scanf("%f",&temp_c);
 printf("¿Qué valor le daras a tu temperatura final?");
 scanf("%f",&final);
 printf("¿Cuantas veces quieres que el programa se ejecute?");
 scanf("%i",&n);
 
 for(i=0;i<n;i++)
{  temp_k=temp_c+273.15;
   printf("%f %f\n",temp_c,temp_k);
   temp_c=temp_c+delta;
delta=(final-temp_c)/n;
}
printf("¿Quieres ejecutar de nuevo el programa? teclea 1 para continuar o 2 para salir?\n");
 scanf("%i",&o);
} 
return 0;
}
