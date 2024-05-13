/*programa que recebe do usuario 5 nomes*/
#include<iostream>
using namespace std;

int main(){
	string nome; //variavel que vai receber os nomes
	int cont = 1; //variavel de controle do loop
	while(cont<=5){
		cout<<"Digite o nome "<<cont<<": ";
		getline(cin,nome);
		cont++;
	}
}
