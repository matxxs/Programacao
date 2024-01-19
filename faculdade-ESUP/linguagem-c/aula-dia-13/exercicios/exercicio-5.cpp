#include<iostream>

using namespace std;
 // Questão 5 // 
int main (){
	float  n1, n2 , resultado ;
	
	cout << " Informe o primeiro valor : ";
	cin  >> n1;
	
	cout << " Informe o segundo valor : ";
	cin  >> n2; 
	
	if (n2!=0){
		resultado = n1/n2;
		cout << " O resultado e : " << resultado << endl;
	}
	return 0;
}
