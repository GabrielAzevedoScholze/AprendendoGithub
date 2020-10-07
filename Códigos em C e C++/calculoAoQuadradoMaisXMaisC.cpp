// a.x^2 + b.x + c

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>


int ScopCalculo(int a, int b, int c, int x){
	
	int calculo = a*x*x + b*x + c;  
	return(calculo);
}


int main(void){

	int a;
	int b;
	int c;
	int	x;
	
	printf("informe o valor da variavel A: ");
	scanf("%d", &a);
	
	printf("informe o valor da variavel B: ");
	scanf("%d", &b);	
	
	printf("informe o valor da variavel C: ");
	scanf("%d", &c);
	
	printf("informe o valor da variavel X: ");
	scanf("%d", &x);
	
	int result = ScopCalculo(a,b,c,x);
	
	printf("\nResultado: %d\n\n",result);
	
	system("pause");
}
