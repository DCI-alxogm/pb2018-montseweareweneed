
#include<stdio.h>

FILE *estudiantes;

int main (){
	


		int N=10,i,semes[N],edad[N],semestre1=0,semestre2=0,semestre3=0,semestre4=0,semestre5=0,semestre6=0,semestre7=0,semestre8=0,semestre9=0,semestre10=0,sex[N],h=0,m=0;
		float prom[N],promediox=0;


			printf ("Introducir la información de 10 estudiantes\n");

			for(i=0;i<N;i++){

			printf("Ingrese la informacion del estudiante %i:\n",i+1);

			printf("Semestre \n");
			scanf("%i",&semes[i]);

			if (semes[i]==1)++semestre1;
			else if (semes[i]==2)++semestre2;
			else if(semes[i]==3)++semestre3;
			else if(semes[i]==4)++semestre4;
			else if(semes[i]==5)++semestre5;
			else if(semes[i]==6)++semestre6;
			else if(semes[i]==7)++semestre7;
			else if(semes[i]==8)++semestre8;
			else if(semes[i]==9)++semestre9;
			else if(semes[i]==10)++semestre10;

			printf("Promedio \n");
			scanf("%f",&prom[i]);

			promediox=promediox+prom[i];


			printf("Edad \n");
			scanf("%i",&edad[i]);

			printf("Para hombre presione 0, para mujer presione 1\n");
			scanf("%i",&sex[i]);
			if (sex[i]==0)++h;
			else if (sex[i]==1)++m;



					}

			printf("Los estudiantes de cada semestre son, en el 1ro: %i, 2do: %i, 3ro: %i, 4to: %i, 5to: %i, 6to: %i,  7mo: %i, 8vo: %i,  9no: %i  10mo: %i  \n",semestre1,semestre2,semestre3,semestre4,semestre5,semestre6,semestre7,semestre8,semestre9,semestre10);

			promediox=promediox/10;
			printf("Promedio global: %f \n",promediox);

			printf(" %i son mujeres y %i son hombres\n",m,h);


      printf("\n Los resultados se encuentran en el archivo 'estudiantes.txt'\n");
    
 fclose(estudiantes);

	return 0;
}
