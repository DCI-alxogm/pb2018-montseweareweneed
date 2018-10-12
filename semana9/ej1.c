#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *datos;
int i,n,o;
float x,y,z;
float *ptr= (float*)malloc(x*sizeof(float));
x = 0;

printf("Introduce el numero de datos que existen en tu archivo: ");
scanf("%d",&n);
datos=fopen("num_maximo.txt","r");
for (i=0;i<n;i++){ 
	fscanf(datos,"%f\n",&ptr[i]);

if (i==1)
{
	x=ptr[i-1];
	y=ptr[i];
if(y<=x)
	z=x;
else 
	z=y;
}
if(i>1) 
	y=ptr[i];
if(z<y)
	z=y;
else
	z=z;
}
fclose(datos);

printf("El número mayor del archivo es: %f\n",z);
free(ptr);
return 0;
}
