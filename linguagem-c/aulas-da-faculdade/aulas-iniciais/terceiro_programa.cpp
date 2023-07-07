/*
*Exercicio 1
*Da aula de programacao
*/
#include<iostream>
#include<string>
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
	string email;
	cout << " digite seu e-mail: ";
	cin >> email;
	cout << "\n";
	cout << " Seu nome e : " << seu << endl;
	cout << " Seu e-mail e : " << email;
	cout << " \n"; 
	cout << " NAO CONSEGUIMOS ENCONTRAR SUA IDADE DE " << idade << " NO BANCO DE DADOS " ; 
 
}
	
