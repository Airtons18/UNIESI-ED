#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int num1, num2, temp;
	
	cout << "Digite o n�mero 1: " << endl;
	cin  >> num1;
	cout << "Digite o n�mero 2: " << endl;
	cin  >> num2;	
	
	cout << "Voc� digitou o valores: " << num1 << " e " << num2 << endl;
	//troca
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "Os valores ap�s a troca �: " << num1 << " e " << num2 << endl;
	return 0;
}
//declara��o da fun��o depois do main

