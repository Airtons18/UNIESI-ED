#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int numero, nmaior, nmenor;
	float altura, amaior, amenor;
	amenor = 100.0;
	for(int i = 0; i < 3 ; i++){
		cout << "Digite o número do aluno: " << endl;
		cin >> numero;
		cout << "Altura do Aluno: " << endl;
		cin >> altura;
		//z = altura;
		if (altura > amaior){
			amaior = altura;
			nmaior = numero;
		}
		if(altura < amenor ){
			amenor = altura;
			nmenor = numero;
		}
	}
	cout << "Número do aluno mais alto: " << nmaior << endl;
	cout << "Altura do aluno mais alto: " << amaior << endl; 
	cout << "--------------------------------------------" << endl;
	cout << "Número do aluno mais baixo: " << nmenor << endl;
	cout << "Altura do aluno mais baixo: " << amenor << endl; 
	return 0;
}