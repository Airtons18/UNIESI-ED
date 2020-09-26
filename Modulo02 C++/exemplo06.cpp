#include <iostream>

using namespace std;

#define ESTUDANTE 5

int main(int argc, char** argv)
{
	int indice;
	float total, nota[ESTUDANTE];
	indice = 0;
	
	//preencher valor
	
	while (indice < ESTUDANTE)
	{
		cout << "Entre com a nota do estudante: " << indice+1 << ": ";
		cin >> nota[indice];
		indice += 1;
	}
	cout << "-----------------------------------" << endl;
	
	total = 0;
	int qtd = 1;
	//imprime o vetor
	for (int i =0; i < ESTUDANTE; i++)
	{
		cout << "Nota: " << qtd << ": " << nota[i] << endl;
		total = total+nota[i];
		qtd++;
	}
	
	
	cout << endl << "Media: " << total/ESTUDANTE << endl; 
	return 0;
}