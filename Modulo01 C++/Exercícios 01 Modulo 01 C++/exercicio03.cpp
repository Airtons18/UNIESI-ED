#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,""); //Acento

	float horasTrabalhadas, salarioMinimo, salarioBruto, imposto;
	cout <<  "Digite o salário minimo: ";
	cin >> salarioMinimo;
	cout << "Digite o número de horas trabalhadas: ";
	cin >> horasTrabalhadas;
	salarioBruto = horasTrabalhadas * (salarioMinimo/2);
	cout << "Valor do salário bruto: R$ ";
	cout << salarioBruto << " (SEM IMPOSTO) !" << endl;
	imposto = (salarioBruto * 0.3);
	cout << "Salario Bruto R$" << salarioBruto << " - " << imposto << endl;
	cout << "Salario a Receber R$" << salarioBruto-imposto;
	
	return 0;
}