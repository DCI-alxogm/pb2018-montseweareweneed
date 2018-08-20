#include<stdio.h>
#include<math.h>

int main ()
{
	float C1,Kr1,Fr1,Cr1,Farenheit;
	printf ("Hola, dame una temperatura en Grados celsius\n");
	scanf("%f",&C1);
	Kr1=C1+273.5;
	printf ("\n la temperatura de la cantidad que ingresaste es equivalente en escala Kelvin  a:%f \n",Kr1);
	Fr1=(C1*1.8)+32;
        printf ("\n la temperatura de la cantidad que ingresaste es equivalente en escala Farenheit a:%f \n",Fr1);

	printf("Dime tu resultado en Farenheit\n");
	scanf("%f",&Farenheit);
	Cr1=(Fr1-32)/1.8;
	printf("Tu resultado anterior en celsuis: %f\n",Cr1);


}

