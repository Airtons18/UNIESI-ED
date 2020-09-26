#include <iostream>
#include <locale.h>

using namespace std;

void ola(void)
{
	cout << "Função Simples" << endl;
}


int main()
{
	setlocale(0, "");
	ola();
	return 0;
}