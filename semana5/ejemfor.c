#include<stdio.h>
int main()
{
	float temp_c, temp_k;
	float Temp_c=100,final=200,delta;
	int n=10,i;
	
	delta=(final-Temp_c)/n;
	for(i=0;i<n;i++){
		temp_k=temp_c+273.15;
		printf("%f %f\n",temp_c,temp_k);
		temp_c=temp_c+delta;		//	temp_c+=delta;

	}
	return 0;
}

