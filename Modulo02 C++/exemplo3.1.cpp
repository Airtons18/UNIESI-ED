#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main

//passagem de par�metros por referencia &
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
	
	cout << "Digite o n�mero 1: " << endl;
	cin  >> num1;
	cout << "Digite o n�mero 2: " << endl;
	cin  >> num2;	
	
	cout << "Voc� digitou o valores: " << num1 << " e " << num2 << endl;
	//troca
	
	troca(num1, num2);
	cout << "Os valores ap�s a troca �: " << &num1 << " e " << &num2 << endl;
	return 0;
}
//declara��o da fun��o depois do main

