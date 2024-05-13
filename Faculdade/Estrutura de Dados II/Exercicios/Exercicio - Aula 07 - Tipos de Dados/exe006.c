#include <stdio.h>

#define TAMANHO_VETOR 15

int somaValores(int vetor[], int tamanho, int X, int Y) {
    if (X >= 0 && X < tamanho && Y >= 0 && Y < tamanho) {
        return vetor[X] + vetor[Y]; 
    } else {
        printf("Posições invalidas\n");
        return -1; 
    }
}

int main() {
    int vetor[TAMANHO_VETOR];
    int i, X, Y;

	    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++) {
    	
        vetor[i] = rand() % 100;		
		printf("%d ", vetor[i]);      
    }

    printf("\n");

    do {
        printf("Digite a posicao X: ");
        scanf("%d", &X);
        printf("Digite a posicao Y: ");
        scanf("%d", &Y);
        
    } while (X < 0 || X >= 15 || Y < 0 || Y >= 15);

    int soma = somaValores(vetor, 15, X, Y);
    if (soma != -1) {
        printf("A soma dos valores nas posicaes %d e %d e: %d\n", X, Y, soma);
    }

    return 0;
}

