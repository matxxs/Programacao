#include<iostream>
using namespace std;

int main(){
	int vet[10]; //vetor de 10 posicoes de numeros inteiros
	int soma = 0; //variavel acumuladora
	cout<<"Digite 10 numeros"<<endl;
	for(int i = 0;i < 10; i++){ //loop de controle do vetor
		cin>>vet[i];
	}
	cout<<"Listagem dos dados"<<endl;
	for(int i = 0; i< 10; i++){
		cout<<vet[i]<<endl;
		soma += vet[i]; //soma = soma + vet[i];
	}
	cout<<"\nO somatorio total eh: "<<soma<<endl;
}
