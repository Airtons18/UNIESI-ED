#include <iostream>
#include <locale.h>

using namespace std;

//protótipo da função

bool par(int num);
void mensagem();


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int num = 0;
	mensagem();
	cout << "Digite um número: ";
	cin >> num;

	if (par(num))
	{
		cout << "O número" << "é par" << endl;
	}
	else
	{
		cout << "O número" << "é impar" << endl;
	}


	return 0;
}
bool par(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mensagem()
{
	cout << "AULA DE ED - MÓDULO 02" << endl;
}
