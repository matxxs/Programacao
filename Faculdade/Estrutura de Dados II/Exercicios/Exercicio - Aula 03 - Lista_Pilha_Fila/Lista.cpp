#include <iostream>
#include <list>

//Lista os dados armazenados de forma sequencial

using namespace std;

int main(){
	
	/*push_front, push_back, iterator, sort, begin */
	
	// Limite de 50
	list<int> number;
	int tam, i;
	
	tam = 10;
	for(i = 0; i < tam; i++){
		
		number.push_front(i);
	}
	
	cout << "Tamanho da Lista: " << number.size() << "\n\n";
	
	tam = number.size();
	for(i = 0; i < tam; i++){
		
		cout << number.front() << "\n";
		number.pop_front();
	}
	
	return 0;
}
