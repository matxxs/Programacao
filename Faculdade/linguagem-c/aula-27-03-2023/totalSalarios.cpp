#include<iostream>
using namespace std;

int main(){
	float salario, total=0;
	int cont=1;
	while(cont<=10){
		cout<<"Digite o salario "<<cont<<": ";
		cin>>salario;
		total = total + salario;
		cont++;
	}
	cout<<"O total pago eh: "<<total<<endl;
}
