#include <iostream>
#include <locale.h>

using namespace std;
//prot�tipo da fun��o para fun��es digitada depois do main

//Sobrecarga de nomes de fun��es
//Fun��es com mesmo nomes porem com quantidade de par�metros diferentes

void mensagem(){
	cout << "Sobrecarga de fun��o" << endl;
}

void mensagem(int n){
	cout << "N�mero: " << n << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	
	mensagem();
	mensagem(10);
	
	return 0;
}


