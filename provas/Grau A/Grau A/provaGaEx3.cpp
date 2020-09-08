#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	float n1,n2,media;
	
	printf("Informe N1: ");
	scanf("%f",&n1);
	
	printf("Informe N2: ");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	printf("\nEssa eh a sua media: %.2f\n\n",media);
	
	
	system("pause");
}
