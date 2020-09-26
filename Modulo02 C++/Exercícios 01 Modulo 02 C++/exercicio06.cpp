#include <iostream>
#include <locale.h>

#define TAMANHO 366

using namespace std;
/*Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia anual*/

int main(){
	setlocale(LC_ALL, "");
	
	float tempmedia[TAMANHO];
	float soma=0, media=0, menor=0, maior=0;
	int abaixo=0;
	
	//prenchendo o vetor tempmedia e ja somando para realizar a m�dia
	for(int i=0; i<TAMANHO; i++)
	{
		cout << endl << "Digite a temperatura: ";
		cin >> tempmedia[i];
		soma += tempmedia[i];
	}
	media = soma/TAMANHO; //media anual
	
	//contador de dias para ver quantos que est�o a abaixo da m�dia anual
	for(int i=0; i<TAMANHO; i++)
	{
		if(tempmedia[i] < media)
		{
			abaixo++;
		}
	}
	menor = tempmedia[0];
	for(int i=0; i<TAMANHO; i++)
	{
		if (tempmedia[i] < menor)
		{
			menor = tempmedia[i];
		}
		else
		{
			maior = tempmedia[i];
		}
	}
	
	//imprimindo
	cout << "----------------------------------" << endl;
	cout << "Menor temperatura do ano: " << menor << "�" << endl;
	cout << "Maior temperatura do ano: " << maior << "�" << endl;
	cout << "Temperatura m�dia anual: " << media << "�" << endl;
	cout << "Dias em que a temperatura foi menor que a media: " << abaixo << endl; 
	
	return 0;
}