/*PROGRAMA QUE CADASTRA, LISTA, E BUSCA NOMES*/
#include<iostream>
using namespace std;

int main(){
	int opc;
	int achei = 0;   //variavel achei valida se o nome foi encontrado
	string vetor[5]; //vetor que vai receber os nomes cadastrados
	string busca;    //variavel que vai buscar o nome desejado
	do{
		achei = 0;
		system("cls");
		cout<<"CADASTRO DE NOMES"<<endl;
		cout<<"Escolha a opcao desejada"<<endl;
		cout<<"1 - CADASTRAR\n2 - LISTAR\n3 - BUSCAR\n0 - SAIR\n";
		cin>>opc;
		cin.ignore();
		//switch ... case
		switch(opc){
			case 1:
				system("cls");
				cout<<"CADASTRO DOS NOMES"<<endl;
				for(int i=0;i < 5;i++){
					cout<<"Digite o nome "<<i+1<<": ";
					getline(cin,vetor[i]);
				}
				break;
			case 2:
				system("cls");
				cout<<"RELATORIO DE NOMES CADASTRADOS"<<endl;
				for(int i=0;i < 5;i++){
					cout<<vetor[i]<<endl;
				}
				system("pause");
				break;
			case 3:
				system("cls");
				cout<<"BUSCA DE DADOS"<<endl;
				cout<<"Informe o nome que deseja encontrar: ";
				getline(cin,busca);
				for(int i = 0; i < 5; i++){
					if(vetor[i] == busca){
						cout<<"O nome "<<busca<<" foi encontrado na posicao "<<i<<endl;						
						achei = 1;
						break;
					}
				}
				if(achei == 0){
					cout<<"Nome nao encontrado.:'("<<endl;
				}
				system("pause");
				break;
			case 0:
				break;
			default:
				cout<<"OPCAO INVALIDA! TENTE NOVAMENTE"<<endl;
				system("pause");
				break;
		}
	}while(opc!=0);
}
