#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main

//passagem de parâmetros por referencia &
void troca(int & num1,int & num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int num1, num2;
	
	cout << "Digite o número 1: " << endl;
	cin  >> num1;
	cout << "Digite o número 2: " << endl;
	cin  >> num2;	
	
	cout << "Você digitou o valores: " << num1 << " e " << num2 << endl;
	//troca
	
	troca(num1, num2);
	cout << "Os valores após a troca é: " << &num1 << " e " << &num2 << endl;
	return 0;
}
//declaração da função depois do main

