#include <iostream>
#include <stack>

//Somente o ultimo dado atual pode removido

using namespace std;

int main (){
	
	/* empty , size, top, push, pop */
	
	stack <string> Uno;
	
	Uno.push("Coringa Comprar 4 Cartas");
	Uno.push("Bloqueio");
	Uno.push("Pular");
	Uno.push("Comprar 2 Cartas");
	Uno.push("Reverter");
	Uno.push("Coringa");
	
	cout << "Tamanho da pilha: " << Uno.size() << "\n\n";	
	
	while (!Uno.empty()){
		
		// Ver o Elemento da Pilha
		cout << "Carta: " << Uno.top() << "\n";
		
		// Remover Elemento da Pilha
		Uno.pop();
	}
	
	cout << "\n" <<"Tamanho da pilha: " << Uno.size();	
	
	return 0;
}


