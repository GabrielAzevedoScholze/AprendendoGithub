#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>

int main(void){
	FILE *arq;
	char Linha[100];
	char *result;
	int  i;
	// abre arquivo texto para ler
	arq = fopen("arquivo.txt","rt");
	if(arq == NULL)	//se ocorrer erro no arquivo
	{
		printf("problemas na abertura do arquivo\n");
	}
	i = 1;
	while(!feof(arq))
	{
		// le uma linha (inclusive com o '\n')
		result = fgets(Linha, 100, arq); // o 'fgets'lê até 99 caractere
		//ou até o '\n'
		if(result) // se possível ler
		printf("linha %d : %s",i,Linha);
		i++; 		
	}
	fclose(arq);
	return 0;	
	system("pause");
}
