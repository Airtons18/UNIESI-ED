#include <iostream>
#include <locale.h>

using namespace std;

//prot�tipo da fun��o

bool par(int num);
void mensagem();


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int num = 0;
	mensagem();
	cout << "Digite um n�mero: ";
	cin >> num;

	if (par(num))
	{
		cout << "O n�mero" << "� par" << endl;
	}
	else
	{
		cout << "O n�mero" << "� impar" << endl;
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
	cout << "AULA DE ED - M�DULO 02" << endl;
}
