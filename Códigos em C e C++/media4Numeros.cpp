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
	
	printf("informe o primeiro número: ");
	scanf("%f", &n1);
	
	printf("informe o segundo número: ");
	scanf("%f", &n2);
	
	printf("informe o terceiro número: ");
	scanf("%f", &n3);
	
	printf("informe o quarto número: ");
	scanf("%f", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma / 4; 
	
	printf("\nEssa é a soma: %f\n", soma);
	printf("Essa é a média: %f\n\n",media);
	
	system("pause");
}
