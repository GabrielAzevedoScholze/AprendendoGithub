#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int cavalos;
	int calculoFerradura;
	
	printf("informe a quantidade de cavalos: ");
	scanf("%d", &cavalos);
	
	calculoFerradura = cavalos * 4;
	
	printf("essa eh a quantidade de ferraduras para equipar os cavalos: %d \n\n", calculoFerradura);
	
	system("pause");
}
