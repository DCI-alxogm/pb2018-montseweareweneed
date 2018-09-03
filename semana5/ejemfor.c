#include<stdio.h>
int main()
{
	float temp_c, temp_k;
	float inicial,final,delta;
	int n=10;
	
	printf("Dame una temperatura en grados celsius:\n");
	scanf("%f", &inicial), 

	temp_c=inicial;

	delta=(final-temp_c)/n;
	for(i=0;i<n;i++){
		temp_k=temp_c+273.15;
		printf("%f %f\n",temp_c,temp_k);
		temp_c=temp_c+delta;		//	temp_c+=delta;

	}
	return 0;
}

