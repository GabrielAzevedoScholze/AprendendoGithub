#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>



int delta (int a, int b, int c){
	
	int delta = pow(b,2) - (4*a*c);
	
	return(delta);	
}

float raizUm (int res, int a, int b){
	
	float raiz1 = ((-b) - sqrt (res)) / 2 * a;
	return raiz1; 
}

float raizDois (int res, int a, int b){

	float raiz2 = ((-b) + sqrt (res)) / 2 * a;
	return raiz2;
}


int main(void){

	
	int a;
	int b;
	int c;
	
	printf("informe o valor de A: ");
	scanf("%d",&a);
	
	printf("informe o valor de B: ");
	scanf("%d",&b);
	
	printf("informe o valor de C: ");
	scanf("%d",&c);
	
	int res = delta(a,b,c);
	
	printf("\n%d\n\n",res);
	
	float x1 = raizUm(res, 4, 5);
	float x2 = raizDois(res, 4, 5);
	
	printf("Raiz 1 %.2f\n\n",x1);
	printf("Raiz 2 %.2f\n\n",x2);
	
	system("pause");
}

