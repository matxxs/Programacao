#include <iostream>
using namespace std;
 
 //receber salario 
 // 80 funcionario 
 //media salaria  da empresa 
 //soma total do salario

int main (){
	
	float soma = 0;
	float media;
	int salario [80];
	
	
	for (int i = 0 ; i < 5; i++){
		
	cout << " Escreva o salario do funcionario" <<endl;
	cin >> salario[i];
	soma = soma + salario[i];
	system("cls");
	
	
	}
	cout <<"A soma total do salario eh: "<<soma<<endl;
	
	media = soma/80;
	cout << "A soma salarial da empresa eh: "<< media<<endl;
	
	
	
}
