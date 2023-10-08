#include <stdio.h>
#include <stdlib.h>
void sueldos(int*suel) {
	
	int i,mas=0,menos=0;
	for (i=1;i<=20;i++){
		printf("Ingrese sueldo : %d \n",i);
		scanf("%d",&suel [i]);
		
		
		
		
		if(suel [i] > 2000){
			mas =mas+1;
		}
		else 
		   menos=menos+1; 
	}
	
	printf("Ganan mas de $2000:  %d \n ",mas);
	printf("Ganan menos de $2000: %d \n ",menos );

}

int main (){
	int suel[21];
	sueldos(suel);
	system("pause");
	return 0;
}
	
	
