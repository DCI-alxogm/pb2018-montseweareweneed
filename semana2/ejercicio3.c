/*Este programa debera tener operaciones
 */

#include <stdio.h>
#include <math.h>
int main()

{
        
	float a,b,c,d,e,f,g;

        printf("Escribe un entero\n");
        scanf("%f",&a);
        printf("Escribe otro entero\n");
        scanf("%f",&b);
        printf("Escribe otro entero\n");
        scanf("%f",&c);
        printf("Escribe otro entero\n");
        scanf("%f",&d);
        e=(a+b)*c/d;
        f=((a+b)*c)/d;
        g=a+(b*c)/d;
        printf("\n tu primer resultado es:%f",e);
        printf("\n tu segundo resultado es %f",f);
        printf("\n tu tercer resultado es:%f",g);


}

