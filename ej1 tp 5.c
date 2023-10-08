#include <stdio.h>
#include <stdlib.h>
void total(int rt,int*resis) {
	printf("La resistencia total es %d \n ",rt);
	printf("Las resistencias ingresadas fueron:%d \n ",resis[1]);
	printf("Las resistencias ingresadas fueron:%d \n ",resis[2]);
	printf("Las resistencias ingresadas fueron:%d \n ",resis[3]);
	printf("Las resistencias ingresadas fueron:%d \n ",resis[4]);
	printf("Las resistencias ingresadas fueron:%d \n ",resis[5]);
}

int main (){
	
	
	int resis[6],i,rt=0;
	for (i=1;i<=5;i++){
		printf("Ingrese la resistencia %d:  \n",i);
		scanf("%d",&resis[i]);
		
		rt=rt+resis[i];
		
	}
	total(rt,resis);
	system("pause");
	return 0;
}
