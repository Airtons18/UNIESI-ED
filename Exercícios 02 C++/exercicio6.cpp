#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, ""); //Permite pontuação
	int quad;
	cout << "Quadrado dos números inteiro 1 a 20" << endl;
	for (int i = 1; i < 21; i++){
		quad = i*i;
		cout << "Quadrado do " << i << " = " << quad << endl;
	}
	
	return 0;
}