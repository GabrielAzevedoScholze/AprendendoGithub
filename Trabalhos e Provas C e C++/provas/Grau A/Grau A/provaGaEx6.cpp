#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	char n1,n2,n3,n4;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	n3 = n1 / n2;
	n4 = n1 + n2 + n3;
	
	
	printf("N1 = %d\tN2 = %d\tN3 = %d\tN4 = %d\n\n",n1,n2,n3,n4);
	
	
	system("pause");
}
