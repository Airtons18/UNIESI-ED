#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
#define tam 2

struct pessoa{
	char nome[50];
	char endereco[50];
	char cpf[50];
	float idade;
	
};

int main(void){
	setlocale(0, "");
	struct pessoa p[tam];
	//Pessoa p;
	int i;
	for(i = 0; i<tam; i++){
		cout << "Nome: " << endl;
		gets(p[i].nome);
		cout << "Endereço: " << endl;
		gets(p[i].endereco);
		cout << "CPF: " << endl;
		gets(p[i].cpf);
		cout << "Idade: ";
		cin >> p[i].idade;
	}
	for(i=0; i<tam; i++){
		cout << "Nome: " << p[i].nome << endl;
		cout << "Endereço: " << p[i].endereco << endl;
		cout << "CPF: " << p[i].cpf << endl;
		cout << "Idade: " << p[i].idade << endl;
	}
	
    return 0;
}