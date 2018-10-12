#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
FILE *datos;
int i,n;
float s;
float *ptr= (float*)malloc(n*sizeof(float));
n=0;
s=0;
printf("Escribe el numero de datos que hay en tu archivo: ");
scanf("%d",&n);
datos=fopen("promedio.txt","r");
for (i=0;i<n;i++)
{
	fscanf(datos,"%f\n",&ptr[i]);
	s += ptr[i];
}
fclose(datos);
s=s/n;
printf("El promedio es: %f\n",s);
free(ptr);
return 0;
}
