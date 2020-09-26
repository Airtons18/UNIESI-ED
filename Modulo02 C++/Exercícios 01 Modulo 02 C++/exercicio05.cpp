#include <iostream>
#include <locale.h>

/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int TAMANHO=0;
	cout << "Digite um valor: ";
	cin >> TAMANHO;
	
	int A[TAMANHO], B[TAMANHO];
	int SOMA[TAMANHO];
	
	for (int i=0; i<TAMANHO; i++)
	{
		cout << endl << "Digite um valor pro Vetor A: ";
		cin >> A[i];
		
		cout << endl << "Digite um valor pro vetor B: ";
		cin >> B[i];
	}
	
	for (int i=0; i<TAMANHO; i++)
	{
		SOMA[i] = A[i] + B[i];
	}
	
	for (int i=0; i<TAMANHO; i++)
	{
		cout << "SOMA DAS POSIÇÕES " << i << " = " << SOMA[i] << endl; 
	}
	
	
	return 0;
}