#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main

//Sobrecarga de nomes de fun��es
//Fun��es com mesmo nomes porem com quantidade de par�metros diferentes

int soma(int n1, int n2){
	
	return n1 + n2;
}

int soma(int n1, int n2, int n3){
	return n1 + n2 + n3;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	cout << soma(10,20) << endl;
	
	cout << soma(10, 20, 30) << endl;
	
	return 0;
}
//declara��o da fun��o depois do main

