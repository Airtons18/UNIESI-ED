#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;
#define TAMANHO 10

/*Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.*/

int main()
{
	setlocale(LC_ALL, "");
	
	int A[TAMANHO], M[TAMANHO];
	int X=0;
	
	//Preenchendo o vetor A
	for(int i=0; i<TAMANHO; i++)
	{
		cout << endl << "Digite um n�mero: ";
		cin >> A[i];
	}
	cout << "------------------------------------------" << endl;
	cout << endl << "Digite mais um n�mero: ";
	cin >> X;
	cout << "------------------------------------------" << endl;
	//Multiplicando o vetor A e armazenando no vetor M
	for (int i=0; i<TAMANHO; i++)
	{
		M[i] = A[i]*X;
	}
	cout << "------------------------------------------" << endl;
	//Imprimindo os resultados
	for (int i=0; i<TAMANHO; i++)
	{
		cout << "TABUADA: " << X << " X " << A[i] << " = " << M[i] << endl; 
	}
	return 0;
}