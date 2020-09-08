#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int scopoCalculo(int h){
	
	int calcum = pow(h,2) + 2 * 6378150 * h; 
	return(calcum);
}

float scopoResultD(int rest){
	
	float resultD = sqrt(rest);
	return(resultD);
}



int main(void){

	int h;
	
	
	printf("Digite a altura em metros: ");
	scanf("%d",&h);
	
	int rest = scopoCalculo(h);
	float D = scopoResultD(rest);
	
	printf("\nD = %.2f\n\n",D);
	 	
	system("pause");
}
