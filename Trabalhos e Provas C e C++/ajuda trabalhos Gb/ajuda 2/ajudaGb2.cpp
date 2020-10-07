// Exemplo: abrindo, gravando e fechando arquivo 
#include <stdio.h>

#include <stdlib.h>
#include <conio.h>

int main(void){
	
	FILE *pont_arq; // criar variavel ponteiro para o arquivo
	char palavra[20]; // variavel do tipo string
	
	// abrindo o arquivo com tipo de abertura w
	pont_arq = fopen("palavra.txt", "w");
	
	// teste para verificar se o arquivo realmente foi criado
	if(pont_arq == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	} 
	
	printf("Escreva uma palavra para testar o save do arquivo: ");
	scanf("%s",&palavra);
	
	// usando fprintf para armazenar a string no arquivo
	fprintf(pont_arq,"%s",palavra);
	
	// usando fclose para fechar o arquivo
	fclose(pont_arq);
	printf("Dado gravado com sucesso!");
	return(0);
	system("pause");
}
