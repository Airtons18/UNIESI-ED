#include <iostream>
#include <locale.h>

using namespace std;
/*Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa.*/

#define TAMANHO 20

//criando uma fun��o que ira imprimir o vetor invertido
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
		cout << endl << "Digite um n�mero: ";
		cin >> L20[i];
	}
	
	inverte(L20);
	
	return 0;
}
