/*este ejemplo fue hecho por Montserrat Cruz Aguilar*/
#include<stdio.h>
int main(){
	int i, num[6], sum=0;
	printf("Introduce 6 numeros enteros:\n");
	for(i=0; i<6; i++){
		//(num+1) es equivalente a &num[i]
		scanf("%d", (num+i));
		
		//*(num+i) es equivalente a num[i]
		sum += *(num+i);
	}
	printf("Suma=%d", sum);
	return 0;
}
