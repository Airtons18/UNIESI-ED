#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(0, "");
	
	int op;
	float idade, ot, bo, re, ru; 
	float total, perc, idademedia;
	idade = 0;
	ot = 0;
	bo = 0;
	re = 0;
	ru = 0;
	total = 0;
	while(idade != 404 ){
		cout << "Digite sua idade: ";
		cin >> idade;
		if(idade <= 0){
			cout << "ERRO IDADE INEXISTENTE !!!" << endl; 
		}else{
			if(idade == 404){
				break;
			}
			cout << " ......:::: Digite sua Opini�o ::::...... " << endl;
			cout << "[1] �TIMO | [2] BOM | [3] REGULAR | [4] RUIM | [0] SAIR" << endl;
			cin >> op;
			idademedia = idade+idademedia;
			switch (op){
				
				case 1:
					cout << "VOC� RESPONDEU [�TIMO]" << endl;
					ot += 1;
					total += 1;
					break;
				case 2:
					cout << "VOC� RESPONDEU [BOM]" << endl;
					bo += 1;
					total += 1;
					break;
				case 3:
					cout << "VOC� RESPONDEU [REGULAR]" << endl;
					re += 1;
					total += 1;
					break;
				case 4:
					cout << "VOC� RESPONDEU [RUIM]" << endl;
					ru += 1;
					total += 1;
					break;
				default:
					cout<< "SAINDO....." << endl;
					idademedia = idademedia-idade;
					idade = 404;
					break;
			}

		}
		
	}
	idademedia = idademedia/total;
	cout << "...::: ESTATISTICAS :::... " << endl;
	cout << "Quantidade de pessoas: " << total << endl;
	cout << "M�dia das idades: " << idademedia << endl;
	perc = (ot/total)*100;
	cout << "�TIMO : " << perc << "%" << endl;
	perc = (bo/total)*100;
	cout << "BOM : " << perc << "%" << endl;
	perc = (re/total)*100;
	cout << "REGULAR : " << perc << "%" << endl;
	perc = (ru/total)*100;
	cout << "RUIM : " << perc << "%" << endl;
	
	return 0;
}