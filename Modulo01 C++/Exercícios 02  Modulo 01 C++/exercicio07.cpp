#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, ""); //Permite pontua��o
	for (int i = 1; i <= 500; i++){
		if (i%5 == 0){
			cout << i << " � divisivel por 5" << endl;
		}
	}
	
	
	return 0;
}