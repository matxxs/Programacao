#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	string nome;
	float renda, imposto;
	cout<<"Informe seu nome: ";
	getline(cin,nome);
	cout<<"Ola "<<nome<<" informe sua renda anual: ";
	cin>>renda;
	cout<<fixed;
	if(renda<=22847.76){
		cout<<"ISENTO"<<endl;
	} else if((renda>=22847.77) && (renda<=33919.8)){
		imposto = renda * 0.075;
		cout<<"O imposto devido eh: R$"<<setprecision(2)<<imposto<<endl;
	} else if((renda>=33919.81) && (renda<=45012.6)){
		imposto = renda * 0.15;
		cout<<"O imposto devido eh: R$"<<setprecision(2)<<imposto<<endl;
	} else if((renda>=45012.61) && (renda<=55976.16)){
		imposto = renda * 0.225;
		cout<<"O imposto devido eh: R$"<<setprecision(2)<<imposto<<endl;
	} else if(renda>=55976.28){
		imposto = renda * 0.275;
		cout<<"O imposto devido eh: R$"<<setprecision(2)<<imposto<<endl;
	}
}
