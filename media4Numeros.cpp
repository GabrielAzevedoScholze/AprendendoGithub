#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");	

	float n1;
	float n2;
	float n3;
	float n4;
	
	float soma;
	float media;
	
	printf("informe o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("informe o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("informe o terceiro n�mero: ");
	scanf("%f", &n3);
	
	printf("informe o quarto n�mero: ");
	scanf("%f", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma / 4; 
	
	printf("\nEssa � a soma: %f\n", soma);
	printf("Essa � a m�dia: %f\n\n",media);
	
	system("pause");
}
