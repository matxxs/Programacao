#include<iostream>
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

float subtracao(){
	float resultado;
	resultado = n1 - n2;
	return resultado;
}

float multiplica(){
	float resultado = n1 * n2;
	return resultado;
}

float divisao(){
	float resultado = 0;
	if(n2 == 0){
		return resultado;
	} else{
		resultado = n1/n2;
		return resultado;
	}	
}

int main(){
	cout<<"Digite um numero: ";
	cin >> n1;
	cout<<"Digite outro numero: ";
	cin >> n2;
	//chamado de funcao
	cout<<"O resultado da soma eh: "<<soma()<<endl;
	cout<<"O resultado da subtracao eh: "<<subtracao()<<endl;
	cout<<"O resultado da multiplicacao eh: "<<multiplica()<<endl;
	cout<<"O resultado da divisao eh: "<<divisao()<<endl;
	return 0;
}
