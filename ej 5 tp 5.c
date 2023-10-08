#include <stdio.h>
#include <stdlib.h>

int tienda(int uni,int*vend){
	int i=0,tot=0,mas=0;
	
	for(i=1;i<=20;i++){
		printf("Ingrese unidades vendidas: ",i);
		scanf("%d",&vend[i]);
		tot+=vend[i];
		if(vend[i]>mas){
			mas=vend[i];
			
		}
	}
	printf("El total de unidades vendidas es: %d\n",tot);
	
	printf("Vendedor con mas unidades vendidas : %d\n",mas);
}



int main(){
	int uni,vend[20];
	tienda(uni,vend);
	
	system("pause");
	return 0;
}
