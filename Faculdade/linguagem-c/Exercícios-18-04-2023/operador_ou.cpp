#include<iostream>
using namespace std;

int main(){
	string nome;
	int idade;
	cout<<"Digite seu nome: ";
	getline(cin,nome);
	cout<<"Digite sua idade: ";
	cin>>idade;
	if((idade>=18)||(idade<71)){ //operador logico ou (or)
		cout<<"Parabens, voce pode retirar sua CNH :)"<<endl;
	}
	else{
		cout<<"Volte mais tarde! :("<<endl;
	}
}
