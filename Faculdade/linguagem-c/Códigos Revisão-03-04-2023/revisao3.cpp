//estruturas condicionais se ... senao (if ... else)
#include<iostream>
using namespace std;

int main(){
	float v1,v2,resultado;
	cout<<"Informe um numero para divisao: ";
	cin>>v1;
	cout<<"Informe outro numero para divisao: ";
	cin>>v2;
	if(v2==0){
		cout<<"Nao podemos dividir por zero"<<endl;
	}
	else{
		resultado = v1/v2;
		cout<<"O resultado eh: "<<resultado<<endl;
	}
}
