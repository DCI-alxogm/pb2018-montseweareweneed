#include<stdio.h>
#include<math.h>


int main ()

{
	float x,y,z,r,a,p;
	
	printf("Introduce un valor para x\n");
	scanf("%f",&x);
	printf("Introduce un valor para y\n");
	scanf("%f",&y);
	printf("Introduce un valor para z\n");
	scanf("%f",&z);
	r=sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
	x=(180/3.1416)*x;
	y=(180/3.1416)*y;
	z=(180/3.1416)*z;
	a=acos(z/r);
	p=atan(y/x);
	x=(3.1416/180)*x;
	y=(3.1416/180)*y;
	z=(3.1416/180)*z;
	printf("El valor de tu primer coordenada (r) es:%f\n",r);
	printf("El valor de tu primer coordenada (teta) es:%f\n",a);
	printf("El valor de tu primer coordenada (phi) es:%f\n",p);


	printf("Tu coordenada inicial para x fue:%f\n",x);
	printf("Tu coordenada inicial para y fue:%f\n",y);
	printf("Tu coordenada inicial para z fue:%f\n",z);
	return 0;
}



