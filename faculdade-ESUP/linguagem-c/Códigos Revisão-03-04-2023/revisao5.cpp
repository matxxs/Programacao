#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Informe o primeiro numero: ";
	cin>>n1;
	cout<<"Informe o segundo numero: ";
	cin>>n2;
	if(n1>n2){
		cout<<"O primeiro numero eh o maior."<<endl;
	}
	else if(n2>n1){
		cout<<"O segundo numero eh o maior."<<endl;
	}
	else{
		cout<<"Os numeros informados sao iguais."<<endl;
	}
}
