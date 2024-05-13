#include <stdio.h>

#define TAMANHO_ARRAY 100

int encontrar_menor(int array[], int tamanho_array){
	
	int menor = array[0], i;
	
	for(i = 0; i < tamanho_array; i++){
		
		if(array[i] > menor){		
			menor = array[i];
		}
	}
	return menor;	
}

int encontrar_maior(int array[], int tamanho_array){
	
	int maior = array[0], i;
	
	for(i = 0; i < tamanho_array; i++){
		
		if(array[i] < maior){			
			maior = array[i];
		}
	}
	return maior;
}

int encontrar_metade(int array[], int tamanho_array){
	
	int metade = tamanho_array / 2;
	return array[metade];
}

void imprimir_array(int array[], int tamanho) {
	int i;
	
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(){
	
	int array[TAMANHO_ARRAY];
	int i, tamanho;
	
	printf("Digite o tamanho do vetor (ate %d): ", TAMANHO_ARRAY);
    scanf("%d", &tamanho);
	
	printf("Digite %d Valores: \n", tamanho);
    for (i = 0; i < tamanho; i++) {
    	printf("Valor %d: ", i );
    	scanf("%d", &array[i]);
    }
    printf("\n");
    
    int maior = encontrar_maior(array, tamanho);
    int menor = encontrar_menor(array, tamanho);
    int metade = encontrar_metade(array, tamanho);

	printf("\nVetor informado: ");
    imprimir_array(array, tamanho);
	
	printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);	
	printf("Valor na metade do vetor: %d\n", metade);	
	
	return 0;
}
