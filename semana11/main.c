#include <math.h>
#include <stdio.h>

	int x,y,n,t,n1;
	float down,up,le,ri,e;	


int main() {
	
	//lee los valores de la variables del archivo llamado constantes.txt
	FILE *fp;
	fp= fopen("constantes.txt","r");
	fscanf(fp,"%f %f %f %f %i %f",&down,&up,&le,&ri,&n,&e);
	fclose(fp);
	
	//se imprimen los valores leidos en el archivo llamado constantes.txt
	printf("Tempreratura inferior %lf\n",down);
	printf("Tempreratura superior %lf\n",up);
	printf("Tempreratura izquierda %lf\n",le);
	printf("Tempreratura derecha %lf\n",ri);
	printf("Tamaño de la placa= %i\n",n);
	printf("Epsilon= %lf\n",e);
	
	float plate[n][n];
	float error[n][n],tn[n][n],to[n][n],max;
	
	//rellena los valores de la matriz con 0
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
			plate[x][y]=0;
		}
	}
	//rellena los valores de la fila inferior
	for(x=0;x<n;x++){
		plate[x][14]=down;		
	}
	//rellena los valores de la columna izquierda
	for(y=0;y<n;y++){
		plate[0][y]=le;		
	}
	//rellena los valores de la columna derecha
	for(y=0;y<n;y++){
		plate[14][y]=ri;		
	}
	//rellena los valores de la fila superior
	for(x=0;x<n;x++){
		plate[x][0]=up;		
	}
	
//realiza "t" iteraciones para calcular los nuevos valores de la placa	
for(t=0;t<20;t++){
	
	//Declaramos el nombre generico de los archivos "resulN.txt"	
	char archivo[11]={'r','e','s','u','l','0','.', 't', 'x', 't','\0'};
	//Modificamos el nombre generico segun la iteracion
	archivo[5]=archivo[5]+t;
	//lo copiamos a una string para poder crear un archivo que se llame asi
	FILE *resultados;
	//creamos el archivo, de tipo w para escribir
	resultados = fopen(archivo, "w");
	//En este ciclo, imprimimos la iteracion completa en el archivo
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
			fprintf(resultados,"%0.3f\t", plate[x][y]);
		}
		fprintf(resultados, "\n");		
	}
	fprintf(resultados, "\n");

	//Cerramos el archivo de escritura
	fclose(resultados);
	
	//en este ciclo se copia la matriz calculada en la iteracion ANTERIOR
	for(y=1;y<n-1;y++){
		for(x=1;x<n-1;x++){
			to[x][y]=plate[x][y];
		}
	}
	
	// se calculan los nuevos valores de cada itracion
	for(y=1;y<n-1;y++){
		for(x=1;x<n-1;x++){
			plate[x][y]=(plate[x+1][y]+plate[x-1][y]+plate[x][y+1]+plate[x][y-1])/4;
			
			
		}
	}
	//en este ciclo se copia la matriz calculada en la iteracion ACTUAL
	for(y=1;y<n-1;y++){
		for(x=1;x<n-1;x++){
			tn[x][y]=plate[x][y];
		}
	}
	//en este ciclo se calcula el error y se compara con epsilon para determinar hasta alcanzar el error maximo permitido por epsilon
	if(t>0){
		for(y=1;y<n-1;y++){
			for(x=1;x<n-1;x++){
				error[x][y]=(tn[x][y]-to[x][y])/to[x][y];
				
				//pirmero se calculan todos los errores por cada valor de la matriz este "if" seleciona el error mas grande para que
				// de esta forma todos los errorer por cada poscision de la matriz quede inferior a epsilon
				if(x>1){
					if(error[x][y]>error[x-1][y-1]){
						max=error[x][y];	
						if(max<e){
							t=21;
						}	
					}	
				}
					
						
			}
		}
	}
	
		

}

//se imprimen los valores de la temperatura de la ultima iteracion
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
			printf("%f ",plate[x][y]);
		}
		printf(" \n");
	}
	return 0;
}
