#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main

//passagem de par�metros por referencia &

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
	cout << "Primeiro n�mero: " << n1 << endl;
	cout << "Segundo n�mero: " << n2 << endl;
	
	alterar(n1, n2);
	//Ap�s a altera��o
	cout << "Ap�s ----------> Primeiro n�mero: " << n1 << endl;
	cout << "Ap�s ----------> Segundo n�mero: " << n2 << endl;	
	return 0;
}
//declara��o da fun��o depois do main

