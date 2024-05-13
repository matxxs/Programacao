#include <iostream>
#include <queue>

//first-in-first-out
//Somente o objeto que está mas tempo na lista pode ser removido

using namespace std;

int main(){
	
	/* empty , size, front, back, push, pop */
	
	queue <int> number;
	
	number.push(10);
	number.push(20);
	number.push(30);
	number.push(40);
	number.push(50);
	
	cout << "Tamanho da Fila: " << number.size() << "\n";
	
	// Ver Primeiro Elemento (front)
	cout << "Primeiro Numero: " << number.front() << "\n";	
	
	// Ver Ultimo Elemento (back)
	cout << "Ultimo Numero: " << number.back() << "\n\n";
	
	while(!number.empty()){
			
		cout << "Numero: " << number.front() << "\n" ;
		
		// Remover Elemento
		number.pop();
	}
	
	cout << "\n";
	
	cout << "Tamanho da Fila: " << number.size() << "\n";
	cout << "Primeiro Numero: " << number.front() << "\n" ;
	cout << "Ultimo Numero: " << number.back();
	
	return 0;
}
