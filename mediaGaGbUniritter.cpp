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
		
		
		printf("\nEssa � a sua m�dia: %f\n", media);
		printf("Voc� foi REPROVADO %f\n", media);	
	}
	
	else if(media >= 6 ){
		
		
		printf("\nEssa � a sua m�dia: %f\n\n", media);
		printf("Voc� foi APROVADO %f\n\n", media);		 
	}
	
	system("pause");
}
