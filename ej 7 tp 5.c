#include <stdio.h>
#include <stdlib.h>
void notas(int mas,int menos) {
	
	printf("Notas mayores a 8 :  %d \n ",mas);
	printf("Notas menores a 8 : %d \n ",menos );
}

int main (){
	
	
	int nota[16],i,mas=0,menos=0;
	for (i=1;i<=15;i++){
		printf("Ingrese nota : %d \n",i);
		scanf("%d",&nota[i]);
		
		
		
		
		if(nota[i] >8){
			mas =mas+1;
		}
		else 
		   menos=menos+1; 
	}
	notas(mas,menos);
	system("pause");
	return 0;
}

