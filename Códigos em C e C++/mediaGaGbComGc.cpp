#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float gA;
	float gB;
    float media;
	char escolha;
    
	printf("Informe a nota do Grau A: ");
	scanf("%f",&gA);
	
	printf("informe a nota do Grau B: ");
	scanf("%f",&gB);
	
	
	media = (gA + gB * 2) / 3;
	
	printf("Essa é a sua media: %.2f\n\n", media);
	
	if(media >= 6 ){
		
		printf("Você foi APROVADO \n\n");	
			 
	}
	
	else if (media < 6 || media <= 0){
	  
	  printf("Você esta no Grau C\n\n");	
	
	}
	
	system("pause");
}
