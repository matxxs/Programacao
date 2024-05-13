#include <stdio.h>


int main() {

	int array[8];

	int i, maior, menor;
	
	printf("Valores: ");
	for (i = 0; i < 8; i++){
		
		array [i] = i + 1;
		printf(" %d", array[i]);		
    }
    
    maior = menor = array[0];

    for (i = 1; i < 8; i++) {
		if (array[i] > maior) {
            maior = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }
	 
    printf("\n");
	
	printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
	
    return 0;
}

