#include <iostream>
#include <locale.h>

using namespace std;
/*Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.*/

#define TAMANHO 20

//criando uma função que ira imprimir o vetor invertido
void inverte(int L20[])
{
	int tam = TAMANHO;
	for(int i=tam-1; i >= 0; i--)
	{
		cout << endl << L20[i];
	}
}

int main()
{	
	//int TAMANHO=4;
	setlocale(LC_ALL, "");
	int L20[TAMANHO];
	//preenchendo o vetor com for
	for (int i=0; i<TAMANHO; i++)
	{
		cout << endl << "Digite um número: ";
		cin >> L20[i];
	}
	
	inverte(L20);
	
	return 0;
}
