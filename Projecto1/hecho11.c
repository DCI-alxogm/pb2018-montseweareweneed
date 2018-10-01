#include<stdio.h>
#include<math.h>

int main(){

        FILE*lectura;
        FILE*escritura;

        lectura=fopen("info.txt","r");
        double x[9],y[9],z[9],vx[9], vy[9], vz[9], r;
        float t[9], tf[9], G, a, h;
        int i;
        char planeta[11];
        for(i=0; i<9; i++){

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
for(a=t[i]; a<=tf[i]+h ; a+=h){
h=0.00222;
x[i]=x[i]+vx[i]*h;
y[i]=y[i]+vy[i]*h;
z[i]=z[i]+vz[i]*h;
G=4*pow(3.14159265,2);
  r=sqrt(pow(x[i],2)+pow(y[i],2)+pow(z[i],2));
           vx[i]=vx[i]-h*((G*x[i])/pow(r,3));
           vy[i]=vy[i]-h*((G*y[i])/pow(r,3));
           vz[i]=vz[i]-h*((G*z[i])/pow(r,3));

                fprintf(escritura, "\n %f %lf %lf %lf %lf %lf  %lf", a*365.2, x[i], y[i], z[i], vx[i], vy[i], vz[i]);
                }
        }
        fclose(escritura);
        fclose(lectura);
        return 0;
}
