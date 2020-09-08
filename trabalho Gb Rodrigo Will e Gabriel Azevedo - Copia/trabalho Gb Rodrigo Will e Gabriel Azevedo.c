//Rodrigo Will e Gabriel Azevedo

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

// Fun��o Energia Cin�tica
float ScopoEnergiaCinetica(float V, float m){

	
	float Ec = (m * pow(V,2)) / 2;
	return (Ec);
}

// Fun��o da for�a centr�peta
float ScopoForcaCentripeta(float m, float V, float raio){
	
	float Fcp = pow(V,2) / raio * m;
	return (Fcp);

// Fun��o da Segunda Lei De Newton
float ScopoSegundaLeiDeNewton(float m, float a){
	
	float F = m * a;
	return(F);
}

// Fun��o do Volume da Esfera
float ScopoVolume(float raio){
	
	float calculoVolu = (4 * 3.14 * raio * raio * raio) / 3;
	return(calculoVolu);
}

//Fun��o da Equa��o de Torricelli
float ScopoTorricelli(float V0, float a, float t){
	
	float vF = V0 + 2 * a * t; // Valor Final
	return(vF);
}

// Fun��o da bhaskara para obter o valor de DELTA 
int ScopoDelta (int Bha, int Bhb, int Bhc){
	
	int delta = pow(Bhb,2) - (4*Bha*Bhc);
	return(delta);	
}

// Fun��o da bhaskara com opera��o de MENOS ( - )
float ScopoRaizUm (int resultDelta, int Bha, int Bhb){
	
	float raiz1 = ((-Bhb) - sqrt (resultDelta)) / 2 * Bha;
	return raiz1; 
}

// Fun��o da bhaskara com opera��o de MAIS ( + )
float ScopoRaizDois (int resultDelta, int Bha, int Bhb){

	float raiz2 = ((-Bhb) + sqrt (resultDelta)) / 2 * Bha;
	return raiz2;
}



int main(void){
	
	setlocale(LC_ALL,"portuguese"); // setando a biblioteca de acentua��o locale para o portugu�s
	
    FILE *pont_arq;	// declara��o do ponteiro

	//declar��o de variaveis inteiras
	float raio;  
	float a;
	float t;
	float m;
	float V;
	float V0;
	float x;
	float y;
	
	
	if(pont_arq == NULL){
    printf("Erro na abertura do arquivo!");
    return 1;
    }	    
	
    pont_arq = fopen ("variaveis.txt", "w"); 	// ponteiro que aporta para o documento
    
	printf("Digite o valor de RAIO: ");
    scanf("%f", &raio); 
    fprintf(pont_arq,"%.2f",raio);
  	    
    printf("Digite o valor de Acelera��o (a): ");
    scanf("%f", &a); 
	fprintf(pont_arq,"%.2f",a);  
  
    printf("Digite o valor de Tempo (t): ");
    scanf("%f", &t); 
    fprintf(pont_arq,"%.2f",t);
  
    printf("Digite o valor de Massa (m): ");
    scanf("%f", &m); 
    fprintf(pont_arq,"%.2f",m);
   
    printf("Digite o valor de Velocidade (v): ");
    scanf("%f", &V); 
    fprintf(pont_arq,"%.2f",V);
   
	  	
    printf("Digite o valor de Velocidade Inicial Em m/s (V0): ");
    scanf("%f", &V0);
	fprintf(pont_arq,"%.2f",V0);
    
   
    printf("Digite o valor de X: ");
    scanf("%f", &x);
	fprintf(pont_arq,"%.2f",x);
     
  
    printf("Digite o valor de Y: ");
    scanf("%f", &y);
    fprintf(pont_arq,"%.2f",y);

	fclose(pont_arq);
	system("cls"); 	// limpa a tela





	// declara��o de ponteiro resp
	FILE *pont_resp;
	
	if(pont_resp == NULL){
    printf("Erro na abertura do arquivo!");
    return 1;
    }	    
	
	
	//abrindo o arquivo com tipo de abertura w
	pont_resp = fopen ("respostas.txt", "w");


// INICIO set�r das opera��o da bhaskara
	 int Bha = 1;
	 int Bhb = 12;
	 int Bhc = -13;
	
	int resultDelta = ScopoDelta(Bha,Bhb,Bhc);
	fprintf(pont_resp,"%.2f",resultDelta);
    
	float x1 = ScopoRaizUm(resultDelta,Bha,Bhb);
	fprintf(pont_resp,"%.2f",x1);

	float x2 = ScopoRaizDois(resultDelta,Bha,Bhb);
    fprintf(pont_resp,"%.2f",x2);

	printf("	---- Resultados da Bhaskara ----\n\n");
    
	printf("	O Resultado da Raiz 2: %.2f\n",x2);
    printf("	O Resultado da Raiz 1: %.2f\n\n",x1);
// FIM do set�r de opera��o da bhaskara
	
	
	
// INICIO Set�r de opera��o do Vol�me da esfera
	
	float volume = ScopoVolume(raio);
	fprintf(pont_resp,"%.2f",volume);

	printf("\n	---- Resultado do Volume Da Esfera ----\n\n");
	
	printf("	O Volume Da Esfera: %.2f",volume);
	printf(" Em cm�\n\n");
// FIM do Set�r de opera��o do Vol�me da esfera
	
	
	
// INICIO do Set�r de opera��o da Equa��o de Torricelli

	float VelociFinal = ScopoTorricelli(V0,a,t);
	fprintf(pont_resp,"%.2f",VelociFinal);
	
	printf("\n	---- Resultado da Equa��o de Torricelli ----\n\n");
	
	printf("	A Velocidade Final �: %.2f",VelociFinal);
	printf(" m/s \n\n");
	
// FIM do do Set�r de opera��o da Equa��o de Torricelli
	
	
	
	
// INICIO do set�r de opera��es da Segunda Lei de Newton ( F = m*a )

	float resultForca = ScopoSegundaLeiDeNewton(m,a);
	fprintf(pont_resp,"%.2f",resultForca);
	
	printf("\n	---- Resultado da Segunda Lei de Newton ----\n\n");
	
	printf("	A For�a Resultante � %.2f",resultForca);
	printf(" m/s� \n\n");
// FIM do set�r de opera��es da Segunda Lei de Newton ( F = m*a )




// INICIO ddo set�r de opera��es da for�a centr�peta 
	
	float ResultForcaCentripeta = ScopoForcaCentripeta(m,V,raio);
	fprintf(pont_resp,"%.2f",ResultForcaCentripeta);
	
	printf("\n	---- Resultado da For�a Centr�peta  ----\n\n");
	printf("	O Resultado da For�a Centr�peta �: %.2f",ResultForcaCentripeta);
	printf(" N \n\n");
// FIM do do set�r de opera��es da for�a centr�peta 
	



// INICIO do set�r de opera��es da Energia Cin�tica 
	
		float ResultEnergiaCinetica = ScopoEnergiaCinetica(V,m);
		fprintf(pont_resp,"%.2f",ResultEnergiaCinetica);
		
		printf("\n	---- Resultado da  Energia Cin�tica ----\n\n");
		printf("	O Resultado da  Energia Cin�tica �: %.2f",ResultEnergiaCinetica);
		printf(" J (Joule) \n\n");
// FIM do set�r de opera��es da Energia Cin�tica 
	
	
	fclose(pont_resp);
	system("pause");
}
