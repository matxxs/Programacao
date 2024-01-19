//fatorial de um numero passado pelo usuario
#include<iostream>
using namespace std;

int main(){
	int numero=0,fatorial=1;
	cout<<"Calculo de fatoriais"<<endl;
	do{
		cout<<"Informe um numero (0 = encerrar o programa): ";
		cin>>numero;
		for(int i=1;i<=numero;i++){
			fatorial = fatorial*i;
		}
		cout<<"O fatorial do numero "<<numero<<" eh "<<fatorial<<endl;
		fatorial = 1;
	}while(numero!=0);
}
