#include <stdio.h>

#define MAX_SIZE 20

int verificar(int vetor[], int tamanho, int elemento) {
	
	int i;
	
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1;
        }
    }
    return 0;
}

int* diferenca_vetores(int A[], int tamanho_A, int B[], int tamanho_B, int *resultado){
	int i;
	
	static int C[MAX_SIZE];
    *resultado = 0;
	
    for (i = 0; i < tamanho_A; i++) {
        if (!verificar(B, tamanho_B, A[i])) {
            
            C[*resultado] = A[i];
            (*resultado)++;
        }
    }

    for (i = 0; i < tamanho_B; i++) {
        if (!verificar(A, tamanho_A, B[i])) {
            C[*resultado] = B[i];
            (*resultado)++;
        }
    }

    return C;
}

void imprimir_diferenca(int A[], int tamanho_A, int B[], int tamanho_B){
	int i;
	
    printf("Valores em A e nao em B: ");
    for (i = 0; i < tamanho_A; i++) {
        if (!verificar(B, tamanho_B, A[i])) {
            printf("%d ", A[i]);
        }
    }
    
    printf("\n");
    
    printf("Valores em B e nao em A: ");
    for (i = 0; i < tamanho_B; i++) {
        if (!verificar(A, tamanho_A, B[i])) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");
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
    int *C = diferenca_vetores(A, tamanho_A, B, tamanho_B, &resultado);
    
    printf("A: ");
    imprimir_vetor(A, tamanho_A);
    
    printf("B: ");
    imprimir_vetor(B, tamanho_B);
    
    printf("C: ");
    imprimir_vetor(C, resultado);
    
    printf("\n");
    
	imprimir_diferenca(A, tamanho_A, B, tamanho_B);
	
    return 0;
}
