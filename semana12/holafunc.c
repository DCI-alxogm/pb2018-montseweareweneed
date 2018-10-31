#include <stdio.h>
#include "holamake.h"

void printholamake( ){

// aqui se modificara el archivo con una operación prueba para calcular las medidas de un recrtangulo
int  area,base,altura;
printf("Escribe un entero que será tu base\n");
scanf("%i",&base);
printf("Escribe un entero que será tu area\n");
scanf("%i",&altura);

area=base*altura;
printf("%d \n", area);

printf("\n tu primer resultado es:%i, \n",area);

return ;
}

