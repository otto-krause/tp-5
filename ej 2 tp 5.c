#include <stdio.h>
#include <stdlib.h>

int nume(float prome,int*num ){
	int sum=0, mayor=0,i=0;
	
	for(i=0;i<5;i++){
		printf("Ingresar los numeros: \n");
		scanf("%d",&num[i]);
		sum=sum+num[i];
		if(num[i]>mayor){
			mayor=num[i];
		}
	}
	prome=(float)sum/5;
	printf("Promedio: %.2f\n",prome);
	printf("Mayor: %d\n",mayor);
}

int main(){
	int num[5], sum=0, mayor=0,i=0;
	float prome;
	
	nume(prome,num);
	
	system("pause");
	return 0;
}
