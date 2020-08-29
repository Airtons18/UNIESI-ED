#include <iostream>

using namespace std;

int main(){
	
	int idade;
	cout << "Digite sua Idade: ";
	cin >> idade;
	
	if (idade >= 5 	&& idade <= 7){
		cout << "Infantil A";
	}
	else if(idade >=8 && idade <= 10){
		cout << "Infantil B";
	}
	else if(idade >= 11 && idade <= 13){
		cout << "Juvenil A";
	}
	else if(idade >= 14 && idade <= 17){
		cout << "Juvenil B";
	}else{
		cout << "Senior";
	}
	
	return 0;
}