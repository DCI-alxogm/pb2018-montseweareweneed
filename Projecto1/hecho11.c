#include<stdio.h> //ponemos las librerias correspondientes
#include<math.h> //se pone esta porqwue se va a utilizar un pow y un sqrt

int main(){ //declaramos abierto

        FILE*lectura;// Declaramos dos archivos a usar
        FILE*escritura;

        lectura=fopen("info.txt","r");//el nombre del archivo que va a leer se pone despues de declarar el archivo "lectura" abierto


	// declararemos las variables que vamos a usar 
        double x[9],y[9],z[9],vx[9], vy[9], vz[9], r;

        float t[9], tf[9], G, a, h;
        //la unica variable entera que ocupamos va a ser la que nos va aindicar la cantidad de planetas a calcular
	int i;
        char planeta[11]; // el nombre de los planetas no debe de tener mas de 11 variables, lo hice asi porque tuve un problema con los nombres

        for(i=0; i<9; i++){ //se indica que el ciclo de lectura y de impresion de la informacion se hara partiendo del cero, y llegara hasta el numero menor que el 9, pero como el 0 tambien vale terminaran siendo 9 



		//en todas las siguientes instrucciones se indica como se hara un escaner de nuestro archivo a ser "lectura", el orden importa mucho pues se adaptaran valores a las variables
      fscanf(lectura,"%s",&planeta[i]);
   fscanf(lectura,"%lf",&x[i]);
      fscanf(lectura,"%lf",&y[i]);
    fscanf(lectura,"%lf",&z[i]);
    fscanf(lectura,"%lf",&vx[i]);
    fscanf(lectura,"%lf",&vy[i]);
  fscanf(lectura,"%lf",&vz[i]);
   fscanf(lectura,"%f",&t[i]);
 fscanf(lectura,"%f",&tf[i]);
escritura=fopen(planeta,"w");

//aqui se inicia un for que va sumar nuestra constante de tiempo, es decir, vamos a ir sumando un tiempoal valor anteior
for(a=t[i]; a<=tf[i]+h ; a+=h){
h=0.00222; // la constante a usar
x[i]=x[i]+vx[i]*h; //estos van a ser los nuevos valores que va a tomar nuestra x,y,z que se imprimiran mas adelante.
y[i]=y[i]+vy[i]*h;
z[i]=z[i]+vz[i]*h;
G=4*pow(3.14159265,2); //nuestra constante de gravedad adapat el valor que debe tener, siendo multiplicada por pi al cuadrado
  r=sqrt(pow(x[i],2)+pow(y[i],2)+pow(z[i],2));// aqui vamos a calcular la distancia del nuestro planeta a nuestra estrella. 
           vx[i]=vx[i]-h*((G*x[i])/pow(r,3));
           vy[i]=vy[i]-h*((G*y[i])/pow(r,3));
           vz[i]=vz[i]-h*((G*z[i])/pow(r,3));


	   //a continuacion indicamos nuestra proxima impresion en el archivo que se va a crear por planeta. indicamos solo las x,y,z y las velocidades
                fprintf(escritura, "\n %f %lf %lf %lf %lf %lf  %lf", a*365.2, x[i], y[i], z[i], vx[i], vy[i], vz[i]);
                }
        }
        fclose(escritura);//cerramos los archivos tanto de lectura y de escritura

        fclose(lectura);// el de lectura se puede cerrar desde que se termina el escaner pero en general el orden no importa
        return 0;//indicamos que ya vamos a cerrar nuestro programa
}// nuestro programa ha terminado
