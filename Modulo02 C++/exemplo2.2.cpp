#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main


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
	cout << "A soma �: " << a + b << endl;
	
	
	
	return 0;
}
//declara��o da fun��o depois do main

