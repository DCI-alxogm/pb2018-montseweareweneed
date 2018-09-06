#include <stdio.h>
int main()
{
int ini,fin,n,a,j;

printf("este programa te dara los numeros primos de un intervalo que a continuación vas a definir.\n");
printf("Dame un número para iniciar: \n");
scanf("%i", &ini);	
printf("Dame un número para finalizar: \n");
scanf("%i", &fin); 

for (int j=ini;j<=fin;j++){
 int a=0;
 for(int n=1;n<=100;n++)
 {
     if(j%n==0) 
     a++;
 }
 if (a==2){ 
 
	 
	 
	 printf("%d, ", j);
 }
 }
}
