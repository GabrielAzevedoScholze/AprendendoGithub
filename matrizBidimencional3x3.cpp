#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int i,j;
	int m[3][3];
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			
			printf("Digite o n�mero: ");
			scanf("%d",&m[i][j]);
		}
		
	}
	
	printf("  \n --Impre��o da matriz -- \n");
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			
			printf("     %d",m[i][j]);
		}
		
		printf("\n");
		
		
	}
	system("pause");
}
