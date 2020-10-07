
// DONO DO CÓDIGO: Gabriel Azevedo Scholze 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	// variaveis principais
	float temperatura; 
	char uniInicial; // unidade inicial
	char uniConver; // converção para unidade  
	
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
	
	// Inicio de converção de kelvin
	if((uniInicial == 'K') || (uniInicial == 'k')){
		
		// entrada e saida do seletor de kelvin pra outra unidade 
		printf("Para qual unidade deseja converter [C/F]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	
	    // converção de kelvin para celsius
	    if((uniConver == 'C') || (uniConver == 'c')){
	    	
	    	// calculo de converção K -> C
			celsius = temperatura - 273;
			
			printf("\nSua temperatura em K: %.2f ",temperatura);
			printf("\nSua temperatura em C: %.2f \n\n", celsius);
		}
		
		// converção de kelvin para Fahrenheit
		else if((uniConver == 'F') || (uniConver == 'f')){
			
			// calculo de converção K -> Fahrenheit
			Fahrenheit = 1.8 * (temperatura - 273) + 32;
			
			printf("\nSua temperatura em K: %.2f ",temperatura);
			printf("\nSua temperatura em F: %.2f \n\n",Fahrenheit);
		}
	}
	
	// Inicio de converção de Fahrenheit
	else if((uniInicial == 'F') || (uniInicial == 'f')){
		
		// entrada e saida do seletor de Fahrenheit pra outra unidade
		printf("\nPara qual unidade deseja converter [C/K]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	    
	    // converção de Fahrenheit -> Celsius
	    if((uniConver == 'C')||(uniConver == 'c')){
	    	
	    	// calculo de converção F -> C
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
	
	
	// inicio de converção de Celsius para outra unidade 
	else if((uniInicial == 'C') || (uniInicial == 'c')){
		
		// seleção de unidade para converter celsius
		printf("\nPara qual unidade deseja converter[K/F]: ");
	    scanf("%c",&uniConver);
	    fflush(stdin);
	    
	    
	    // converção de C -> K
	    if((uniConver == 'K')||(uniConver == 'k')){
	    	
	    	// calculo de converção C -> K
	    	kelvin = temperatura + 273;
	    	
	    	printf("\nSua temperatura em C: %.2f ", temperatura);
	    	printf("\nSua temperatura em k: %.2f \n\n", kelvin);
		}
		
		// converção de C -> F
		else if((uniConver == 'F')||(uniConver == 'f')){
			
			// calculo de converção C -> F
			Fahrenheit = (temperatura - 32) / 1.8;
			
			printf("\nSua temperatura em C: %.2f ", temperatura);
			printf("\nSua temperatura em F: %.2f \n\n", Fahrenheit);
		}
		
	}
	
	
	
	
	
	
	system("pause");
}
