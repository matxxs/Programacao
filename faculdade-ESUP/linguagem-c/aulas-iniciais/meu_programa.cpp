#include<iostream>
#include<string>
#include<locale>
using namespace std;

int main (){
	//variaveis do excercicio
	string nome;
	string seu;
	cout << " digite seu nome completo : ";
	cin >> seu;
	getline(cin,nome);
	string idade;
	cout << " Informe sua idade : ";
	cin >> idade;
	string masculino;
	string feminino;
	cout << " Informe seu sexo(a) : ";
	cin >> masculino;
	cin >> feminino;
	cout << "\n";
	cout << " Seu nome e : " << seu << endl;
	cout << " \n"; 
	cout << " Cara voce esta muito VELHO " << idade << " ANOS ";
	cout << " Garota voce esta muito VELHA " << idade << " ANOS ";
	
	
}
