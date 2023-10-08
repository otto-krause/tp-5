#include <stdio.h>
#include <stdlib.h>
void nume (int*num) {
	while(num[1] < num[2]){
		
		printf("%d \n ",num[1]+1); 
		num[1]++; 
	}
	

}


int main (){
	
	
	int num [2],numt =0;
	
	printf("Ingrese un numero : \n");
	scanf("%d",&num[1]);
	printf("Ingrese un numero : \n");
	scanf("%d",&num[2]);
	
	
	nume(num);
	system("pause");
	return 0;
}
