// bibliotecas Obrigatórias 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// inclusão de biblioteca de acentuação 
#include <locale.h>

// escopo principal 
int main(void)
{
    // setando a biblioteca <locale.h> para acentuação PT - BR
	setlocale(LC_ALL,"portuguese"); 
	
	// variaveis principais
	float altura;
	float peso;
	float imc;
	
	// variaveis para converção de medida
	float alturaCent;
	float pesoGram;
	float resultImc;
	
	// entrada e saida de Altura 
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	
	// converção da Altura de Metros para Centimetros
	alturaCent = altura * 100; 
	
	// entrada e saida de Peso 
	printf("Informe o seu peso em Kg: ");
	scanf("%f",&peso);
	
	// converção de peso de Kg em Gramas  
	pesoGram = peso * 1000; 
	
	// cálculo do IMC Bruto
	resultImc = pesoGram / (alturaCent * alturaCent);  
	
	// calculo final do IMC
	imc = resultImc * 10; 
	
	// saída do resultaddo da variavel IMC 
	printf("\nEsse é o seu IMC: %.2f",imc); 
	
	// verificação de Categoria do Usuario 
	if(imc <= 17)
	{  
	    printf("\nVocê esta muito abaixo do peso\n\n");
	}
	
    else if((imc >= 17 ) && (imc <= 18.5))
	{	
	    printf("\nVocê esta abaixo do pesso\n\n");
	}
	
    else if((imc >= 18.5) && (imc <= 25))
	{ 
	    printf("\nVocê esta no peso ideal\n\n");
	}
    
	else if((imc >= 25) && (imc <= 30)) 
	{
	    printf("\nVocê esta acima do peso\n\n");
	}
	
	else if((imc >= 30) && (imc <= 35))
	{	
		printf("\nVocê esta com obesidade I\n\n");
	}
	
	else if((imc >= 35) && (imc < 40))
	{	
		printf("\nVocê esta com obesidade II (Severa)\n\n");
	}
	
	else if(imc >= 40)
	{	
		printf("\nVocê esta com obesidade III (Mórbida)\n\n");
	} 
	
	
	// finalisar código 
	system("pause");
}
