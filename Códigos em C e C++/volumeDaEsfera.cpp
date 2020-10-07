// calcular o volume de uma esfera 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float ScopoVolume(float raio){
	
	float calculoVolu = (4 * 3.14 * raio * raio * raio) / 3;
	return(calculoVolu);
}


int main(void){
	
	setlocale(LC_ALL,"portuguese");
	float raio;
	
	printf("informe o raio da esfera: ");
	scanf("%f",&raio);
	
	float volume = ScopoVolume(raio);
	
	printf("\nEsse eh o volume da esfera: %.2f",volume);
	printf(" Em cm³\n\n");
	system("pause");
}

