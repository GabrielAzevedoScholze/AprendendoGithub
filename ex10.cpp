#include <iostream>

using namespace std;

int main()
{
	int qtdP;
	int qtdM;
	int qtdG;
	int totalArrecadado;
	
	cout << "informe a quantidade de camisetas P: ";
	cin >> qtdP;
	
	cout << endl;
	
	cout << "informe a quantidade de camisetas M: ";
	cin >> qtdM;
	
	cout << endl;
	
	cout << "informe a quantidade de camisas G: ";
	cin >> qtdG;
	
	cout << endl;
	
	totalArrecadado = qtdP * 10 + qtdM * 12 + qtdG * 15;
	
	cout << "esse eh o valor total arrecadado: " << totalArrecadado;
	cout << endl << endl; 
	
	
}
