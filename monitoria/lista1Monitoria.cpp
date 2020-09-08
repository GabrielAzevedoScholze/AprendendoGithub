#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float largura;
	float comprimento;
	float area;
	
	printf("informe a largura do terreno: ");
	scanf("%f", &largura);
	
	printf("informe o comprimento do terreno: ");
	scanf("%f", &comprimento);
	
	area = largura * comprimento;
	
	printf ("\na Area do terreno eh essa: %f\n\n", area);

	system("pause");
}
