#include <stdio.h>
#include <stdlib.h>

void promediar( float prome) {
	printf("Valor promedio  es %.2f \n ",prome  );
	
}

int main (){
	
	
	int alum[31],i;
	float prome=0 ;
	for (i=1;i<=30;i++){
		printf("Ingrese nota del alumno %d:  \n",i);
		scanf("%d",&alum[i]);
		
		prome=prome+alum[i];
		
	}
	prome=prome/30; 
	
	promediar(prome);
	
	system("pause");
	return 0;
}

