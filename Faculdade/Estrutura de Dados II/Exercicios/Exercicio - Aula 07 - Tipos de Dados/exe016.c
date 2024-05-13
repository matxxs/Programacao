#include <stdio.h>

#define TAMANHO 15

void inserir_ordenado(int vetor[], int *tamanho, int elemento) {
    
    int i;
    
    if (*tamanho >= TAMANHO) {
        printf("Vetor cheio. Não é possível inserir mais elementos.\n");
        return;
    }

    int posicao;
    for (posicao = 0; posicao < *tamanho; posicao++) {
        if (elemento < vetor[posicao]) {
            break;
        }
    }

    for (i = *tamanho; i > posicao; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[posicao] = elemento;
    
    (*tamanho)++;
}

void imprimir_vetor(int vetor[], int tamanho) {
	int i;
	
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[TAMANHO];
    int tamanho = 0;

    while (tamanho < TAMANHO) {
        int elemento;
        printf("Digite o %d o elemento: ", tamanho + 1);
        scanf("%d", &elemento);
        
        inserir_ordenado(vetor, &tamanho, elemento);

        printf("Vetor atualizado: ");
        imprimir_vetor(vetor, tamanho);
    }

    return 0;
}

