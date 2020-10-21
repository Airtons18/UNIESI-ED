#include <iostream>

using namespace std;

#define tam 5

typedef struct{
	int inicio;
	int item[tam];
} FILA;

void iniciarFila(FILA &f){
	f.inicio = -1;
}

bool verificarFila(FILA &f){
	if((f.inicio >= 4) && f.inicio <= tam){
		return true;
	}
	else
	{
		return false;
	}
}

void push(FILA &f, int x){
	f.inicio++;
	f.item[f.inicio] = x;	   	
}

void pop(FILA &f){
	f.inicio++;
	f.item[f.inicio];
}

int main()
{
	FILA f;
	
	if(verificarFila(f) == true){
		cout << "FILA CHEIA" << endl;
	}
	else
	{
		cout << "FILA VAZIA" << endl;
	}
	
	iniciarFila(f);
	
	push(f, 1);
	push(f, 2);
	push(f, 3);
	push(f, 4);
	push(f, 5);
	
	for(int i=0; i<tam; i++){
		cout << f.item[i] << endl;
	}
	
	if(verificarFila(f) == true){
		cout << "FILA CHEIA" << endl;
	}
	else
	{
		cout << "FILA VAZIA" << endl;
	}
	iniciarFila(f);
	pop(f);
	
	for(int i=0; i<tam; i++){
		cout << f.item[i] << endl;
	}
/*
	cout << "INICIO VALOR: " << f.inicio << endl;
	cout << "TAMANHO VALOR: " << tam << endl;
	cout << "CALC VALOR: " << f.inicio - tam << endl;
*/				
	return 0;
}