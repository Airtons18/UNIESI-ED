#include <iostream>
#include <locale.h>

using namespace std;
//protótipo da função para funções digitada depois do main

//Sobrecarga de nomes de funções
//Funções com mesmo nomes porem com quantidade de parâmetros diferentes

void mensagem(){
	cout << "Sobrecarga de função" << endl;
}

void mensagem(int n){
	cout << "Número: " << n << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	
	mensagem();
	mensagem(10);
	
	return 0;
}


