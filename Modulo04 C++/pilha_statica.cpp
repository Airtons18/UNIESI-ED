#include <iostream>

using namespace std;

#define tam 5

typedef struct {
	int topo;
	int item[tam];
} PILHA;

void iniciarPilha(PILHA &s){
	s.topo = -1;
}

bool verificarPilha(PILHA &s){
	if(s.topo >= 4){
		cout << "PILHA CHEIA" << endl;
		return true;
	}
	else
	{
		cout << "PILHA VAZIA" << endl;
		return false;
	}
}

void push(PILHA &s, int x){
	s.topo++;
	s.item[s.topo] = x;
}

void pop(PILHA &s){
	cout << s.item[s.topo];
	s.topo--;
}

int main (){
	
	PILHA s;
	
	iniciarPilha(s);
	
	verificarPilha(s);
	
	for(int i=0; i<tam; i++){
		push(s, i);
		cout << i << endl;	
	}

	
	verificarPilha(s);
	
	for(int i=0; i<tam; i++){
		pop(s);	
		cout << endl;
	}
	verificarPilha(s);
	return 0;
}