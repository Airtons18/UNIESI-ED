#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float pe;
	int cp;
	while (cp != 5){
		cout << "Digite o preço da etiqueta R$";
		cin >> pe;
		cout << "_____________________________________________________________" << endl;
		cout << "|		Opção de Pagamento" << endl;
		cout << "|[1] À vista ou cheque, com 10% de desconto" << endl;
		cout << "|[2] À vista com cartão de crédito, com 5% de desconto" << endl;
		cout << "|[3] Em 2 vezes - Sem juros" <<  endl;
		cout << "|[4] Em 3 vezes acréscimo de 10%" << endl;
		cout << "|[5] Sair" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cin >> cp;
		switch(cp)
		{
		case 1:
			cout << "Opção [1] À vista escolhido..";
			pe = pe - (pe * 0.10);
			cout << "Você tera que pagar R$" << pe << endl;
			break;
		case 2:
			cout << "Opção [2] À vista com cartão escolhido.." << endl;
			pe = pe - (pe * 0.05);
			cout << "Você tera que pagar R$" << pe << endl;
			break;
		case 3:
			cout << "Opção [3] Em 2 vezes escolhido.." << endl;
			cout << "Você tera que pagar 2 parcelas de R$" << pe/2 << endl;
			break;
		case 4:
			cout << "Opção [4] Em 3 vezes com juros escolhido.." << endl;
			pe = pe + (pe * 0.10);
			cout << "Você tera que pagar 3 parcelas de R$" << pe/3 << endl;
			break;
		default:
			cout << "Fimm"
			break;
		}
	}
	return 0;
}