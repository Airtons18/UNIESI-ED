#include <iostream> /* inclui diretivas de entrada-saída */


//utiliza o namespace std para definir todas as funções da biblioteca padrão
using namespace std;

//declaração de constante
#define PRECO 1.99

int main()
{
    //declarando as variáveis
	int pera = 3;
    char qualidade = 'A';
    float peso = 2.5;

	//saída de dados (cout)
    cout << "Existem " << pera << " peras de qualidade " << qualidade
         << " pesando " << peso << " quilos." << endl;
    cout << "O preco por quilo eh R$" << PRECO
         << ", o total em R$ eh " << peso * PRECO << endl;
		 
    return 0;
}




