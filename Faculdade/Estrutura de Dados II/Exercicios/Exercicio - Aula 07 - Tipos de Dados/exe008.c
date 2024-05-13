#include <stdio.h>

int contarY(int X[],int tamanho, int Y){
	
	int contador = 0;
	int i;
	
	for (i = 0; i < tamanho; i++){
		
		if(X[i] == Y){
			contador++;
		}
	}
	
	return contador;
}

int main() {
	
	int X[] = {20, 20, 20, 20, 10, 20, 30, 40, 50};
	int tamanho = sizeof(X) / sizeof(X[0]);
	int i;
	
	//printf("%d", tamanho);
	
    for(i = 0; i < tamanho; i++){
        printf("Valor de X[%d]: %d\n", i, X[i]);
    }
		
	int Y = 20;
	
	int result = contarY(X, tamanho, Y);
	
	printf("\nO valor %d aparece %d vezes no array X.\n", Y, result);
	
    return 0;
}

