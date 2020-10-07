
// DONO DO C�DIGO: Gabriel Azevedo Scholze 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	// variaveis principais
	float temperatura; 
	char uniInicial; // unidade inicial
	char uniConver; // conver��o para unidade  
	
	float celsius; // calculos celsios
	float kelvin; // calculo Kelvin
	float Fahrenheit; // calculo Fahrenheit
	
    // entrada e saida da variavel temperatura
	printf("Digite uma temperatura: ");
	scanf("%f",&temperatura);
	fflush(stdin);
	
	// entrada e saida da unidade inicial
	printf("Qual a unidade que ela foi medida[K/C/F]: ");
	scanf("%c",&uniInicial);
	fflush(stdin);
	
	// Inicio de conver��o de kelvin
	if((uniInicial == 'K') || (uniInicial == 'k')){
		
		// entrada e saida do seletor de kelvin pra outra unidade 
		printf("Para qual unidade deseja converter [C/F]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	
	    // conver��o de kelvin para celsius
	    if((uniConver == 'C') || (uniConver == 'c')){
	    	
	    	// calculo de conver��o K -> C
			celsius = temperatura - 273;
			
			printf("\nSua temperatura em K: %.2f ",temperatura);
			printf("\nSua temperatura em C: %.2f \n\n", celsius);
		}
		
		// conver��o de kelvin para Fahrenheit
		else if((uniConver == 'F') || (uniConver == 'f')){
			
			// calculo de conver��o K -> Fahrenheit
			Fahrenheit = 1.8 * (temperatura - 273) + 32;
			
			printf("\nSua temperatura em K: %.2f ",temperatura);
			printf("\nSua temperatura em F: %.2f \n\n",Fahrenheit);
		}
	}
	
	// Inicio de conver��o de Fahrenheit
	else if((uniInicial == 'F') || (uniInicial == 'f')){
		
		// entrada e saida do seletor de Fahrenheit pra outra unidade
		printf("\nPara qual unidade deseja converter [C/K]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	    
	    // conver��o de Fahrenheit -> Celsius
	    if((uniConver == 'C')||(uniConver == 'c')){
	    	
	    	// calculo de conver��o F -> C
			celsius = (temperatura - 32) / 1.8;
			
			printf("\nSua temperatura em F: %.2f ", temperatura);
			printf("\nSua temperatura em C: %.2f \n\n", celsius);
		}
		
		else if((uniConver == 'K')||(uniConver == 'k')){
			
			kelvin = (temperatura  + 459.67) * 5/9;
			
			printf("\nSua temperatura em F: %.2f ", temperatura);
			printf("\nSua temperatura em K: %.2f \n\n", kelvin);
		}
	}
	
	
	// inicio de conver��o de Celsius para outra unidade 
	else if((uniInicial == 'C') || (uniInicial == 'c')){
		
		// sele��o de unidade para converter celsius
		printf("\nPara qual unidade deseja converter[K/F]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	    
	    
	    // conver��o de C -> K
	    if((uniConver == 'K')||(uniConver == 'k')){
	    	
	    	// calculo de conver��o C -> K
	    	kelvin = temperatura + 273;
	    	
	    	printf("\nSua temperatura em C: %.2f ", temperatura);
	    	printf("\nSua temperatura em k: %.2f \n\n", kelvin);
		}
		
		// conver��o de C -> F
		else if((uniConver == 'F')||(uniConver == 'f')){
			
			// calculo de conver��o C -> F
			Fahrenheit = (temperatura - 32) / 1.8;
			
			printf("\nSua temperatura em C: %.2f ", temperatura);
			printf("\nSua temperatura em F: %.2f \n\n", Fahrenheit);
		}
		
	}
	
	
	
	
	
	
	system("pause");
}
