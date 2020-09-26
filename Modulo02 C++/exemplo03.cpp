#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int num1, num2, temp;
	
	cout << "Digite o número 1: " << endl;
	cin  >> num1;
	cout << "Digite o número 2: " << endl;
	cin  >> num2;	
	
	cout << "Você digitou o valores: " << num1 << " e " << num2 << endl;
	//troca
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "Os valores após a troca é: " << num1 << " e " << num2 << endl;
	return 0;
}
//declaração da função depois do main

