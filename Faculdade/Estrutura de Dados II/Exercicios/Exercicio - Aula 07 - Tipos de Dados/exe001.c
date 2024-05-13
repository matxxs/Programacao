#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
	
    int vetor[TAMANHO_VETOR];
    int i;
    
    for (i = 0; i < TAMANHO_VETOR; i++) { 
		vetor[i] = i + 1;
    }
    
    printf("\nValores do vetor: ");
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
