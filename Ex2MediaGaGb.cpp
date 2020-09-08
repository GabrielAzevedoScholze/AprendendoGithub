#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	float gA;
	float gB;
	float media;
	
	printf("Digite a nota do Grau A: ");
	scanf("%f",&gA); 

	printf("Digite a nota do Grau B: ");
	scanf("%f",&gB);
	
	media = (gA + gB * 2) / 3;
	
	printf("\nEssa é a sua média final: %.2f\n\n",media);	
	
	system("pause");
}
