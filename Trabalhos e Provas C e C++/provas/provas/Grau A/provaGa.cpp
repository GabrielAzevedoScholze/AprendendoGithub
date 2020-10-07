// bibliotecas Obrigat�rias 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// inclus�o de biblioteca de acentua��o 
#include <locale.h>

// escopo principal 
int main(void)
{
    // setando a biblioteca <locale.h> para acentua��o PT - BR
	setlocale(LC_ALL,"portuguese"); 
	
	// variaveis principais
	float altura;
	float peso;
	float imc;
	
	// variaveis para conver��o de medida
	float alturaCent;
	float pesoGram;
	float resultImc;
	
	// entrada e saida de Altura 
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	
	// conver��o da Altura de Metros para Centimetros
	alturaCent = altura * 100; 
	
	// entrada e saida de Peso 
	printf("Informe o seu peso em Kg: ");
	scanf("%f",&peso);
	
	// conver��o de peso de Kg em Gramas  
	pesoGram = peso * 1000; 
	
	// c�lculo do IMC Bruto
	resultImc = pesoGram / (alturaCent * alturaCent);  
	
	// calculo final do IMC
	imc = resultImc * 10; 
	
	// sa�da do resultaddo da variavel IMC 
	printf("\nEsse � o seu IMC: %.2f",imc); 
	
	// verifica��o de Categoria do Usuario 
	if(imc <= 17)
	{  
	    printf("\nVoc� esta muito abaixo do peso\n\n");
	}
	
    else if((imc >= 17 ) && (imc <= 18.5))
	{	
	    printf("\nVoc� esta abaixo do pesso\n\n");
	}
	
    else if((imc >= 18.5) && (imc <= 25))
	{ 
	    printf("\nVoc� esta no peso ideal\n\n");
	}
    
	else if((imc >= 25) && (imc <= 30)) 
	{
	    printf("\nVoc� esta acima do peso\n\n");
	}
	
	else if((imc >= 30) && (imc <= 35))
	{	
		printf("\nVoc� esta com obesidade I\n\n");
	}
	
	else if((imc >= 35) && (imc < 40))
	{	
		printf("\nVoc� esta com obesidade II (Severa)\n\n");
	}
	
	else if(imc >= 40)
	{	
		printf("\nVoc� esta com obesidade III (M�rbida)\n\n");
	} 
	
	
	// finalisar c�digo 
	system("pause");
}
