#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){

	setlocale(LC_ALL,"portuguese");
		
	float n1;
	float n2;
	float media;
	
	printf("digite o primeiro n�mero: ");
	scanf("%f",&n1);
	
	printf("digite o segundo n�mero: ");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	printf("\n\nEssa � a m�dia: %.2f\n\n",media);
	
	system("pause");
}
