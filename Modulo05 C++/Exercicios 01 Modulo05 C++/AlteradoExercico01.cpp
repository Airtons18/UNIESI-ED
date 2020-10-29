#include <iostream>
#include <string>
#include <list>
#include <iterator>

struct nomeFunc
{
	char nome[100];
};


using namespace std;

void ImprimirFuncionarios(const list<string>& Funcionarios){
	list<string>::const_iterator elemento;
	if(Funcionarios.empty())
	{
		cout << "Não ha funcionarios cadastrados\n";
	}
	else
	{
		elemento = Funcionarios.begin();
		do{
			cout << *elemento << "\n";
			elemento++;
		}while (elemento != Funcionarios.end());
		cout << endl;
	}
}


int main()
{
	list<string> Funcionarios;
	int qtdFunc = 0, opc = 0;
	//string nomeFunc;
	nomeFunc nf[100];
	
	bool z = true;
	while (z != false){
		cout << "-=-=-=-=- LISTA DE FUNCIONARIOS -=-=-=-=-=-\n";
		cout << "(1)Cadastrar Funcionarios \n(2)Imprimir \n(3)Ordenar\n";
		cout << "(4)Reversa\n(5)Quantidade de funcionarios\n";
		cin >> opc;
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
		switch(opc)
		{
		case 1:
			cout << "-=-=-=-=- LISTA DE FUNCIONARIOS -=-=-=-=-=-\n";
			cout << "Quantidade de funcionarios: \n";
			cin >> qtdFunc;
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
			for (int i =0; i<qtdFunc; i++)
			{
				cout << "Nome do funcionario: " << endl;
			    cin.getline(nf[0].nome, sizeof(nf[0].nome));
				Funcionarios.push_back(nf[0].nome);
			}
			break;
		case 2:
			ImprimirFuncionarios(Funcionarios);
			break;
		case 3:
			Funcionarios.sort();
			ImprimirFuncionarios(Funcionarios);
			break;
		case 4:
			Funcionarios.reverse();
			ImprimirFuncionarios(Funcionarios);
			break;
		case 5:
			cout << "Quantidade de funcionarios: "<< Funcionarios.size() << endl;
			break;
		default:
			cout << "Encerando......\n";
			z = false;
			break;
		}
	}
	
	
	
	
	
	return 0;
}