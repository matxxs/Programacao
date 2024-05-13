#include <stdio.h>

#define TAMANHO_ARRAY 10

void imprimir_array(int vetor[], int tamanho_vetor) {
	
	int i;
	
    for (i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int array[TAMANHO_ARRAY];
    int i,numero;
    int contador = 0;

    while (contador < TAMANHO_ARRAY) {
    	
    	printf("Contador[%d], Digite um numero: ", contador + 1);
        scanf("%d", &numero);
        
        int repetido = 0;
    		  	
    	for(i = 0; i < contador; i++){

    		if(array[i] == numero){
    			repetido = 1;
    			printf("Numero ja digitado! Digite outro numero.\n");
    			break;
			}
		}
		
		if(!repetido){
			array[contador] = numero;
            contador++;
		}
    }

    printf("\nVetor final:\n");
    imprimir_array(array, TAMANHO_ARRAY);

    return 0;
}
