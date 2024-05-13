#include <stdio.h>

#define TAMANHO_VETOR 15

void compactar_vetor(int vetor[], int tamanho_vetor) {
    int posicao_atual = 0; 
	int i;

    for (i = 0; i < tamanho_vetor; i++) {
        
        if (vetor[i] != 0) {
            vetor[posicao_atual] = vetor[i];
            posicao_atual++; 
        }
    }
    
    for (i = posicao_atual; i < tamanho_vetor; i++) {
        vetor[i] = 0;
    }

}

void imprimir_vetor(int vetor[], int tamanho_vetor) {
	
	int i;
	
    for (i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
	
    int vetor[TAMANHO_VETOR] = {0, 0, 0, 1, 0, 2, 3, 0, 4, 5, 6, 0, 0, 7, 8};

    printf("Vetor original: ");
    imprimir_vetor(vetor, TAMANHO_VETOR);

    compactar_vetor(vetor, TAMANHO_VETOR);

    printf("Vetor compactado: ");
    imprimir_vetor(vetor, TAMANHO_VETOR);

    return 0;
}

