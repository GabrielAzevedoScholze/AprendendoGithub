#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float gA;
	float gB;
	
	float media;
	
	printf("Informe a nota do Grau A: ");
	scanf("%f",&gA);
	
	printf("informe a nota do Grau B: ");
	scanf("%f",&gB);
	
	
	media = (gA * 1 + gB * 2) / 3;
	
	if(media < 6 || media <= 0){
		
		
		printf("\nEssa é a sua média: %f\n", media);
		printf("Você foi REPROVADO %f\n", media);	
	}
	
	else if(media >= 6 ){
		
		
		printf("\nEssa é a sua média: %f\n\n", media);
		printf("Você foi APROVADO %f\n\n", media);		 
	}
	
	system("pause");
}
