#include <iostream>

using namespace std;

void main()
{
	float pontoX;
	float pontoY;
	float area;

	cout << "informe o ponto X do terreno: ";
	cin >> pontoX;

	cout << "informe o ponto Y do terreno: ";
	cin >> pontoY;

	area = pontoX * pontoY;

	cout << "essa eh a area do terreno: " << area;
	cout << endl;

system("pause");
}