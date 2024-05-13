#include <stdio.h>

int main ()
{
	int n1, n2, res, op;
	
	while (op!= 'a'){
	
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	
	printf("Escolha a operacao:\n1 - Adição\n2 - Subtração\n3 - Multiplicacao\n4 - Divisao\n");
	scanf("%d",&op);
	
	
//	if (op > 4) {
//		printf("SE NAO SABE LER NAOO ");
//		return ;
//	}
	
	if(op == 1){
		res = n1 + n2;
		
	}
	
	if(op == 2){
		res = n1 - n2;
	}
	
	if (op == 3){
		res = n1 * n2;
	} 
	
	if (op == 4){
		res = n1 / n2;
	} 

	
		printf("O resultado eh:%d ", res);
	
		return 0;		
}
}
