#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	int i = 0;
	int vet[8];
	
	
	while(i < 8){
		printf("digite um numero: ");
		scanf("%d",&vet[i]);
		
		i++;
	}
	printf("\n os valores digitados sao: ");
		for( i = 0; i < 8; i++){
			printf("\n posicao: %d ", i);
			printf("valor: %d",vet[i]);
		}
			
			printf("\n\n");
	
	system("pause");
}
