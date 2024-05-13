#include <stdio.h>

int main() {
	
	int A[6] = { 1, 0, 5, -2, -5, 7};	
	
	int soma, i;
	
	soma = A[0] + A[1] + A[5];
	printf("A soma dos valores e: %d\n", soma);
	
	printf("\n");
	
	printf("Valor inicial = Vetor na posicao A[4], valor %d: \n", A[4]);
	A[4] = 100;
	printf("Valor atual = Vetor na posicao A[4], valor %d: \n", A[4]);
	
	printf("\n");
	
    for (i = 0; i < 6 ; i++) {
        printf("Valor do vetor A[%d]: %d\n", i, A[i]);
    }

    return 0;
}
