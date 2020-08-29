#include <iostream>

using namespace std;

int main(){
	double peso, imc, altura;
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << " Digite sua altura: ";
	cin >> altura;
	imc = peso/(altura*altura);
	if (imc < 20.0){
		cout << "Abaixo do Peso: ";
		
	}else if(imc >= 20.0 && imc < 25.0){
			  cout << " Peso Ideal";		
	}else{
		cout << "Acima do Peso"; 
	}
	return 0;
}