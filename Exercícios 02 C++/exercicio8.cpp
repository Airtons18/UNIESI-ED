#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int op, votBranco, votNulo, ca, cb;
	bool z;
	float perc, total;
	total = 0;
	votBranco = 0;
	votNulo = 0;
	ca = 0;
	cb = 0;
	while (z != true){
		cout << "-----------------------------------" << endl;
		cout << "Eleição Vote no Candidatos" << endl;
		cout << "Candidado [1]" << endl;
		cout << "Candidado [2]" << endl;
		cout << "Voto em Branco [3]" << endl;
		cout << "Voto Nulo [4]" << endl;
		cout << "Sair [0]" << endl;
		cin >> op;
		switch(op){
			case 1:
				ca = ca+1;
				total += 1;
				break;
			case 2:
				cb = cb+1;
				total += 1;
				break;
			case 3:
				votBranco = votBranco+1;
				total += 1;
				break;
			case 4:
				votNulo = votNulo+1;
				total += 1;
				break;
			default:
				cout << "Acabou a votaçã....." << endl;
				z = true;
				break;
		}
	}
	cout << ".:: Estatisticas ::." << endl;
	cout << total << endl;
	cout << ca << endl;
	perc = (ca/total)*100;
	cout << "Porcentagem de votos do Candidato A: " << perc << "%" << endl;
	perc = (cb/total)*100;
	cout << "Porcentagem de votos do Candidato B: " << perc << "%" << endl;
	perc = (votNulo/total)*100;
	cout << "Porcentagem de votos nulo: " << perc << "%" << endl;
	perc = (votBranco/total)*100;
	cout << "Porcentagem de voto em Branco: " << perc << "%" << endl;
	return 0;
}