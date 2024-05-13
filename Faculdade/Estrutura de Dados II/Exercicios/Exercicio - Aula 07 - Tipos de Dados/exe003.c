#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_ARRAY 50

int main() {
	
	int array[TAMANHO_ARRAY];
	int i;
	double soma = 0;
	double media = 0;
	
    srand(time(NULL));

    for (i = 0; i < TAMANHO_ARRAY; i++) {
        array[i] = rand() % 100; 
        
        soma += array[i];
    }
    
    printf("Valores: ");
    for (i = 0; i < TAMANHO_ARRAY; i++){
    	printf("%d ", array[i]);
    	
	}
	
	media = soma / TAMANHO_ARRAY;

    printf("\n\nA media aritmetica dos valores e: %.2lf\n", media);

    return 0;
}
