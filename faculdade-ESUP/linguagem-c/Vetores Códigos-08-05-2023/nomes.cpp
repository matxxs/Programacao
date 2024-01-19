#include<iostream>
using namespace std;

int main(){
	string nomes[5];
	cout<<"***CADASTRO DE NOMES***"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Digite o nome "<< i+1 <<": ";
		getline(cin,nomes[i]);
	}
	system("clear");//comando para limpar a tela (linux e mac = clear)
	cout<<"***RELATORIO DE NOMES***"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<nomes[i]<<endl;
	}
}
