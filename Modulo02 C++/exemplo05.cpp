#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main

//Sobrecarga de nomes de funções
//Funções com mesmo nomes porem com quantidade de parâmetros diferentes

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
//declaração da função depois do main

