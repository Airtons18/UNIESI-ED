#include <iostream>

using namespace std;
//1)
	//A = VERDADEIRA
	//B = VERDADEIRA
	//C = FALSO
	//D = VERDADEIRA
//2)Mostra apenas os valores de A e B pois o ponteiro não armazena nada então é NULO;
//3)Mostra o valor de A e o Valor de B e o ponteiro mostra o conteudo da variavel de B
//4)O Ponteiro ira setar o valor 20 para a variavel (A)
/*5)Usa-se o caractere Asterisco coloca-se ele antes da primeira letra da variavel ex: 
int *var;*/
//6)Ela contem o endereço de uma outra variavel e o conteudo da mesma.
//7)

int main(){
	
	int vet[] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = &vet[0];
	cout << "Imprimindo da ORDEM NORMAL" << endl;
	for(int i=0; i<=10-1; i++){
		cout << *ptr << endl;
		*ptr++;
	}	
	//Inverso
	ptr = &vet[9];
	cout << "Imprimindo na ORDEM INVERSA" << endl;
	for(int i=9; i>=0; i--){
		cout << *ptr << endl;
		*ptr--;
	}
	return 0;
}