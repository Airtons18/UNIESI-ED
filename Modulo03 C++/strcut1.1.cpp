#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
	string nome;
	int idade;
};

int main()
{

	pessoa p;

	cout << "Digite seu nome: ";
	cin >> p.nome;
	cout << "Quantos anos voce tem? ";
	cin >> p.idade;
	cout << p.nome << ", " << p.idade << " anos";

	return 0;
}

