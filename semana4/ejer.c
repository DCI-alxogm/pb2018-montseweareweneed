#include<stdio.h>
#include<math.h>

int main()
{

	int opcion;
	float C,K,F,C1;
	float x,y,z,r,o,p,o1,p1;
	float x1,y1,z1;
	int op=1;


	op=1;
		


	while(op==1){
	printf(" Teclea una opción \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas");

	scanf("%i",&opcion);

	switch(opcion)
	{
	case 1:
		printf("Esta es la primera opcion");

		printf("Dame la temperatura en °C:\n");
		scanf("%f",&C);

		K=C+273.15;
		F=(9*C)/5+32;
		C1=(F-32)/1.8;

		printf("\n Su valor en K es:%f",K);
		printf("\n Su valor en °F es:%f",F);
		printf("\n Su valor de °F a °C es:%f",C1);

		break;

	case 2:
		printf("Esta es la segunda opcion");
		printf("Ingrese una coordenada x:\n");
		scanf("%f",&x);
		printf("Ingrese una coordenada y:\n");
		scanf("%f",&y);
		printf("Ingrese una coordenada z:\n");
		scanf("%f",&z);

		r=sqrt((x*x)+(y*y)+(z*z));
		o=acos(z/r);
		p=atan(y/x);
		o1=o*57.296;
		p1=p*57.296;

		printf("\n El valor para r es:%f",r);
		printf("\n El valor para tetha en grados es:%f",o1);
		printf("\n El valor para phi en grados es:%f",p1);

		x1=r*sin(o1)*cos(p1);
		y1=r*sin(o1)*sin(p1);
		z1=r*cos(o1);

		printf("\n El valor de x es:%f",x1);
		printf("\n El valor de y es:%f",y1);
		printf("\n El valor de z es:%f",z1);
		break;

	default:
		printf("No es una opción válida");
		break;
	}
	printf("¿Deseas realizar otra conversion?, Presiona 1 para realizar otra operacion, o presiona cualquier otro numero para salir)\n");
		scanf("%i",&op);
	}

	return 0;

}





