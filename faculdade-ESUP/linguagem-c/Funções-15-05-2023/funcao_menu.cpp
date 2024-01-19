#include<iostream>
#include<cstdlib>
using namespace std;
//variaveis globais - variaveis acessiveis tem todo o programa
float n1, n2;
//variaveis locais - variaveis acessiveis apenas na funcao de declaracao
float soma(){
	float resultado;
	resultado = n1 + n2;
	//retorno da funcao
	return resultado;
}
//funcao de subtracao
float subtracao(){
	float resultado;
	resultado = n1 - n2;
	return resultado;
}
//funcao de multiplicacao
float multiplica(){
	float resultado = n1 * n2;
	return resultado;
}
//funcao de divisao
float divisao(){
	float resultado = 0;
	if(n2 == 0){
		return resultado;
	} else{
		resultado = n1/n2;
		return resultado;
	}	
}
//funcao do cadastro dos numeros
void numeros(){
	cout<<"Digite um numero: ";
	cin >> n1;
	cout<<"Digite outro numero: ";
	cin >> n2;
}
//funcao que monta o menu e invoca as funcionalidades
void menu(){
	int opc;
	do{
		cout<<"****** CALCULADORA BASICA ******"<<endl;
		cout<<"Informe a operacao desejada\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair"<<endl;
		cin >> opc;
		switch (opc){
			case 1:
				cout<<"O resultado da soma eh: "<<soma()<<endl;
				break;
			case 2:
				cout<<"O resultado da subtracao eh: "<<subtracao()<<endl;
				break;
			case 3:
				cout<<"O resultado da multiplicacao eh: "<<multiplica()<<endl;
				break;
			case 4:
				cout<<"O resultado da divisao eh: "<<divisao()<<endl;
				break;
			case 0:
				cout<<"Obrigado por utilizar este software! ;)"<<endl;
				break;
			default:
				cout<<"Opcao invalida!"<<endl;
				break;
		}
		system("pause");
		system("cls");
	}while(opc!=0);
}
//funcao principal que executa o programa
int main(){
	numeros();
	system("cls");
	menu();	
	
	return 0;
}
