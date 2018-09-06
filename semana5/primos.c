#include <stdio.h>
int main()
{
int inicial,final;
int i, a, j;
printf("Inserta un número inicial: \n");
scanf("%i", &inicial);	
printf("Inserta un número final: \n");
scanf("%i", &final); 

for (int j=inicial;j<=final;j++){
 int a=0;
 for(int i=1;i<=100;i++)
 {
     if(j%i==0) 
     a++;
 }
 if (a==2){ 
 printf("%d, ", j);
 }
 }
}
