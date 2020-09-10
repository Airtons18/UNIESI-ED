#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float salario, novoSalario;
	cout << "Digite seu salário: R$";
	cin >> salario;
	if (salario < 1000){
		novoSalario = salario + (salario * 0.15);
	}
	else if ((salario >= 1000) && (salario <= 1500)) {
		novoSalario = salario + (salario * 0.10);
	}
	else{
		novoSalario = salario + (salario * 0.05);
	}
	cout << "Novo salario calculado...." <<  endl;
	cout << "Seu novo salario é de R$" << novoSalario << endl;
	return 0;
}