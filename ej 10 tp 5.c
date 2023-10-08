#include <stdio.h>
#include <stdlib.h>

int calculos(int*num){
	int sum=0,produc=1,i=0,numt=0;
	float promeaba=0;
	
	for(i=1;i<=10;i++){
		printf("Ingrese un numero: \n");
		scanf("%d",&num[i]);
		
		sum=sum+num[i];
		produc=produc*num[i];
	}
	promeaba=sum/10;
	for(i=1;i<=10;i++){
		if(num[i]<promeaba){
			numt=numt+1;
		}
	}
	printf("Promedio de los numeros: %.2f\n", promeaba);
	printf("Numeros por debajo del promedio: %d\n",numt);
	printf("Suma de los numeros: %d\n",sum);
	printf("Producto de los numeros: %d\n",produc);
	
}


int main(){
	int num[10];
	calculos(num);
	
	system("pause");
	return 0;
}
