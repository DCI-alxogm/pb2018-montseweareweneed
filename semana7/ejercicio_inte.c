#include<stdio.h>
#include<math.h>

int main ()
{
int p,a,b,N,k,i,j;
float fx[i],Intx[i],x[i],sum,fa,h,delta;
printf("Elabora una base de datos\n");
FILE *datos;
FILE *resultados;
datos=fopen("entrada.txt","r");
fscanf(datos,"%i %i %i %i %i",&p,&a,&b,&N,&k);
fclose(datos);
for(i=0;i<N;i++)
{
x[i]=0;
fx[i]=0;
Intx[i]=0;
}
for(i=0;i<N;i++)
{
x[i]=0;
fx[i]=0;
Intx[i]=0;
}
delta=(b-a)/N;
for(i=0;i<=N;i++)
{
x[i]=a+(i*delta);
fx[i]=pow(x[i],p);
}
fa=pow(a,p);
for(i=0;i<=N;i++)
{
h=(x[i]-a)/k;
sum=0;
for(j=1;j<k;j++)
{
sum=sum+pow(x[i]+ h*j, p);
}
Intx[i]=((fx[i]+fa)/2)+sum;
}
resultados=fopen("resultados.txt","w");
fprintf(resultados,"x\t f(x)\t I(x)\n");
for(i=0;i<N;i++)
{
fprintf(resultados,"%f\t %f \t %f \n",x[i],fx[i],Intx[i]);
}
return 0;
}
