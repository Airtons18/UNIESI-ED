#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main


int obter_valor(void)
{
	int valor;
	cout << "Digite um valor: " << endl;
	cin >> valor;
	return valor;	
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int a, b;
	a = obter_valor();
	b = obter_valor();
	cout << "A soma é: " << a + b << endl;
	
	
	
	return 0;
}
//declaração da função depois do main

