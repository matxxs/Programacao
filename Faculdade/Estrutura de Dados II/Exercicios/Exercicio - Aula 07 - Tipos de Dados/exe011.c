#include <stdio.h>

#define MAX_SIZE 20

int* soma_vetores(int A[], int tamanho_A, int B[], int tamanho_B, int *resultado){
    static int C[MAX_SIZE];
    *resultado = 0; 
	int i;
	
    for (i = 0; i < tamanho_A; i++) {
		C[*resultado] = A[i];
        (*resultado)++;
    }

    for (i = 0; i < tamanho_B; i++) {
        C[*resultado] = B[i];
        (*resultado)++;
    }

    return C;
}

void imprimir_vetor(int vetor[], int tamanho) {
	
	int i;
	
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
	
    int A[] = {1, 2, 3, 4, 5};
    int tamanho_A = sizeof(A) / sizeof(A[0]);

    int B[] = {4, 5, 6, 7, 8};
    int tamanho_B = sizeof(B) / sizeof(B[0]);
    
    int resultado;
    int *C = soma_vetores(A, tamanho_A, B, tamanho_B, &resultado);
    
    printf("A: ");
    imprimir_vetor(A, tamanho_A);
    
    printf("B: ");
    imprimir_vetor(B, tamanho_B);
    
    printf("C: ");
    imprimir_vetor(C, resultado);
	
	
    return 0;
}
