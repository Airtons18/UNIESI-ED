#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char** argv)
{
	int n = 0;
	int base = 0;
	int altura = 0;
	
	cout << "Digite o número: ";
	cin >> n;
	cout << "Digite a base: ";
	cin >> base;
	cout << "Digite a altura: ";
	cin >> altura;
	
	cout << "Fatorial do: " << n << " : " << fatorial(n) << endl;
	cout << "Area do quadrado: " << n << " : " << areaQuadrado(n) << endl;
	cout << "Area do Retângulo: " << n << " : " << areaRetangulo(base, altura) << endl;
	return 0;
}