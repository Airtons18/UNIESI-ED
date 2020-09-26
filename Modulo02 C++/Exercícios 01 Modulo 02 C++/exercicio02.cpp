#include <iostream>
#include <locale.h>

using namespace std;

#define TAMANHO 20 //defifindo o tamanho do vetor

int main()
{
	setlocale(LC_ALL, ""); //passando para utf-8
	float notas[TAMANHO];	
	float soma = 0, media = 0;
	int acima = 0;
	
	//preenchendo o vetor com o for e j� adicionando para a var:Soma
	for (int i = 0; i < TAMANHO; i++)
	{
		cout << endl << "Digite a nota do aluno " << i << ": ";
		cin >> notas[i];
		soma += notas[i];
	}
 	media = soma/TAMANHO; // calcula a m�dia aritimetica da turma
 	for (int i = 0;i < TAMANHO; i++)
	 {
	 	if (notas[i] > media)
		 {
		 	acima++; //contador para ver quantos que se encaixam na condi��o
		 }
	 }
	//exibe todos os resultados
    cout << "-----------------------------" << endl;
	cout << "M�dia da Turma: " << media << endl;
	cout << "Alunos que foram acima da m�dia: " << acima << endl;
	
	
	return 0;
}