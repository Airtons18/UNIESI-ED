#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main

int quadrado(int num);


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	int l1, l2, l3;

	cout << "Digite o valor do lado 1: " << endl;
	cin >> l1;
	cout << "Digite o valor do lado 2: " << endl;
	cin >> l2;
	cout << "Digite o valor do lado 3: " << endl;
	cin >> l3;

	if (l1 >> 0 && l2 > 0 && l3 > 0 &&
			quadrado(l1) + quadrado(l2) == quadrado(l3) ||
			quadrado(l2) + quadrado(l3) == quadrado(l1) ||
			quadrado(l3) + quadrado(l1) == quadrado(l2))
	{
		cout << " " << l1 << " " << l2 << " " << l3 << " podem formar um triângulo reto" << endl; 
	}
	else
	{
		cout << " " << l1 << " " << l2 << " " << l3 << " não podem formar um triângulo reto" << endl; 
	}
	return 0;
}
//declaração da função depois do main
int quadrado(int num){
	return num * num;	
}
