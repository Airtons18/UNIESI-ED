#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main

//passagem de parâmetros por referencia &

void alterar(int &n1,int &n2)
{
	   n1 = 100;
	   n2 = 200;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int n1=0, n2=0;
	cout << "Digite n1: ";
	cin >> n1;
	cout << "Digite n2: ";
	cin >> n2;
	cout << "Primeiro número: " << n1 << endl;
	cout << "Segundo número: " << n2 << endl;
	
	alterar(n1, n2);
	//Após a alteração
	cout << "Após ----------> Primeiro número: " << n1 << endl;
	cout << "Após ----------> Segundo número: " << n2 << endl;	
	return 0;
}
//declaração da função depois do main

