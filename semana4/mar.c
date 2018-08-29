#include<stdio.h>
#include<math.h>
int main()
{
int l=1;
int o;
float d,y,r,a;
float C,F,K;
printf("¿Cual accion deseas realizar, convertir coordenadas cartesianas a polares o convertir temperaturas? \n");
while (l==1)
{
printf("Teclea 1 para convertir coordenadas\n");
printf("Teclea 2 para convertir temperaturas\n");
scanf("%i",&o);
switch (o)
{ case 1:
printf("El programa sirve para convertir coordenadas cartesianas a coordenadas polares \n");
printf("intorduce el valor para x\n");
scanf("%f",&d);
printf("intorduce el valor para y\n");
scanf("%f",&y);
r=sqrt((pow(d,2))+(pow(y,2)));
y=(180/3.1416)*y;
d=(180/3.1416)*d;
a=atan(y/d);
if(d>=0 && y>=0)
{a=a;}
else if(d<0 && y>=0)
{a=a+90;}
else if(d<0 && y<0)
{a=a+180;}
else if(d>=0 && y<0)
{a=a+240;}
d=(3.1416/180)*d;
y=(3.1416/180)*y;
printf("el valor de la primera coordenada r es:%f\n",r);
printf("el valor de la segunda coordenada teta es:%f\n",a);
printf("la coordenada inicial para x fue:%f\n",d);
printf("la coordenada inicial para y fue:%f\n",y);
  break;
case 2:
  printf("Conertidor de temperaturas de grados centigrados a kelvin y farenheit \n");
printf("¿que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
printf("la temperatura equivalente en F° es:%f\n",F);
printf("la temperatura equivalente en K es:%f\n",K);
printf("la temperatura incicial en C° es:%f\n",C);
  break;
default:
printf("opcion invalida\n");
break;
}
printf("Si quieres elegir otra opcion inserta 1\n");
printf("Si quieres salir del programa pulsar cualquier numero que no sea el 1\n");
scanf("%i",&l);
}
return 0;
}
