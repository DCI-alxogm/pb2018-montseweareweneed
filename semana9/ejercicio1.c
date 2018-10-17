/*Este programa es creado por Montserrat Cruz Aguilar el dia 8 de octubre*/

#include<stdio.h>

int main()
{
FILE *info;

info=fopen("num_maximo.txt","r");
printf("Este programa va a proporcionar el mayor numero entero entre una lista de datos\n");
int datos[95];
int i;
int mayor=0;


fscanf(info,"%ls",&datos[95]);
for (i=0;i<96;i++){	
if (datos[i]>mayor){
mayor=datos[i];
}
}
printf("El mayor es %d\n",mayor);

 fclose(info);
return 0;
}

