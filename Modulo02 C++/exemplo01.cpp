#include <iostream>
#include <locale.h>

using namespace std;

void ola(void)
{
	cout << "Fun��o Simples" << endl;
}


int main()
{
	setlocale(0, "");
	ola();
	return 0;
}