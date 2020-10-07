#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void SOMA(float x, float y )
{
	float val = x + y;
	cout<< "A soma de " << x<< "+" << y << " = " << val;
	
}

float SUB(float x, float y )
{
	float val = x - y;
	return val;
	
}

float DIV(float x, float y )
{

	return (x/y);
	
}


int main(int argc, char** argv) {
	
	float a=0;
	float b=0;
	float resp = 0;
	int op = -1;
	
	cout<< "Digite o valor de X: ";
	cin>> a;
	cout<< endl <<"Digite o valor de Y: ";
	cin>> b;
	
	cout<< "Escolha a opcao desejada:" << endl;
	cout<< "(1) - Digite 1 para soma" << endl;
	cout<< "(2) - Digite 2 para subtracao" << endl;
	cout<< "(3) - Digite 3 para multiplicacao" << endl;
	cout<< "(4) - Digite 4 para divisao" << endl;
	cout<< "Qual a sua opcao: ";
	cin>>op;
	
	switch(op)
	{
		case 1:
			SOMA(a,b);
		break;
		
		case 2:
			resp = SUB(a,b);
			cout<< "A subtracao de " << a<< "-" << b << " = " << resp;
		break;
		
		case 3:
			resp = a*b;
			cout<< "A multiplicacao de " << a<< "*" << b << " = " << resp;
		break;
		
		case 4:
			resp = DIV(a,b);
			cout<< "A divisao de " << a<< "/" << b << " = " << resp;
		break;
		
		default:
			cout<< "Opcao Invalida !!!!  ";
		break;
	}
	
	return 0;
}
