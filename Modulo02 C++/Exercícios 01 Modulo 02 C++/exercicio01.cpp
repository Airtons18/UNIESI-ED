#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

#define TAMANHO 10
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	bool z = false;
	string nomes[TAMANHO];
	string nome;
	
	for (int i = 0; i < TAMANHO; i++)
	{
		cout<< "Digite um nome: " << endl;
		cin >> nomes[i];
		
	}
	cout << "--------- DIGITE UM NOME PARA BUSCAR --------" << endl;
	cout << "Nome: ";
	cin >> nome;
	cout << "------------------------------" << endl;
	for (int i = 0; i < TAMANHO; i++)
	{
		if(nome == nomes[i])
		{
			z = true;
			//cout << "ACHEI" << endl;
		}
		else
		{
			z = false;
			//cout << "NÃO ACHEI" << endl;
		}
	}
	if (z == 1)
	{
		cout << "ACHEI" << endl;
	}
	else
	{
	{
		cout << "NÃO ACHEI" << endl;
	}
	}
	return 0;
}