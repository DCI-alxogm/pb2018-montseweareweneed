/*Programa creado por Montserrat Cruz Aguilar el 26 de septiembre de 2018.*/
#include<stdio.h>
#include<math.h> //Dare uso a esta libreria para la operacion de la constnte G 

int main(){

        FILE*Lectura;//Este archivo tendra los datos que se van a leer

        FILE*Escritura;//Este archivo sera de escritura y cada planeta tendra el suyo

        Lectura=fopen("texto_lectura.txt","r");//Se abre un archivo que es de donde estan los datos que se van a tomar 
        Escritura=fopen(nombre_del_planeta,"w"); //Se abre un archivo donde se escribiran los datos por planeta

        //Ahora declarare mis variables, no voy a poner flotantes, sino double porque los numeros abarcan muchos decimales 
        int n,i; // n representa la cantidad de planetas a revisar 
        char nombre_del_planeta[10]; //Se pone asi porque cada planeta adaptara su nombre y puede tener hasta 10 caracteres
        double pi, xo, yo, zo, vxo, vyo, vzo, G, to, distancia, h; //donde las primeras 3 son las coordenadas de posicion, luego vxo, vyo, vzo son las velocidads iniciales, distancia es la distanciaa la estrella luego la constante de Gravitatoria, to es el tiempo inicial, y ct es la constante a sumar de tiempo.  
        double vx,vy,vz,x,y,z; // para las nuevas velocidades y las nuevas coordenadas
        pi=3.14159265359;
        G=4.0*pow(pi,2); //desde antes de trabajar con las lecturas de los archivos destinamos variables, lo cual incluye a la constante G

        for(i=0; i<9; i++){ //el for correra hasta 9 veces, una vez por cada planeta del sistema solar (se puso de limite un 8 pero recordemos que el 0 tambien vale ccomo un numero )
 pi,
                                fscanf(Lectura, "%s", &nombre_del_planeta);
                                fscanf(Lectura,"%lf %lf %lf %lf %lf %lf %lf", &xo,&yo,&zo,&vxo,&vyo,&vzo,&h);



                vxo*=365.242;
  		vyo*=365.242;
                vzo*=365.242;
                to=0



                        int count=0;
                                for(double i=0.0 ; i<=to+h ; i+=h){

                                if(count%10==0){


                                fprintf(Escritura,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",x,y,z,vx,vy,vz,distancia);
                                }
                                count++;
                                //nuevas posiciones
                                x=vxo*h;
                                y=vyo*h;
                                z=vzo*h;


                                distancia=sqrt(pow(x,2)+pow(y,2)+pow(z,2)); // calculamos distancia
                                //calculamos nuevas velocidades

                                vx=vxo-((h*G)/pow(distancia,3));
                                vy=vyo-((h*G)/pow(distancia,3));
                                vz=vzo-((h*G)/pow(distancia,3));




                } //
        } //
        fclose(Escritura); //
        fclose(Lectura); //
return 0; //
}

