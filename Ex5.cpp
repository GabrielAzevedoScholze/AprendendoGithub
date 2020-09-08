#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int scopoR(int a, int b){
	
	int r = (a + b) * (a + b);
	return(r);
}

int scopoS(int b, int c){
	
	int s = (b + c) * (b + c);
	return(s);
}

int scopoD(int R, int S){
	
	int d = (R + S) / 2;
	return (d);
}


int main(void){
	
	int a;
	int b;
	int c;
	
	
	printf("digite o valor de A: ");
	scanf("%d",&a);
	
	printf("digite o valor de B: ");
	scanf("%d",&b);
	
	printf("digite o valor de C: ");
	scanf("%d",&c);
	
	int R = scopoR(a,b);
	int S = scopoS(b,c);
	
	int D = scopoD(R,S);
	
	printf("resultado = %d\n\n",D);
	
	
	system("pause");
}
