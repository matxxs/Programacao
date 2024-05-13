#include <stdio.h>

#define TAMANHO_ARRAY 30

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

int main(){
	
	int array[TAMANHO_ARRAY];
	int i;
	
	printf("Digite %d Valores: \n", TAMANHO_ARRAY);
    for (i = 0; i < TAMANHO_ARRAY; i++) {
    	printf("Valor %d: ", i );
    	scanf("%d", &array[i]);
    }
    printf("\n");
    
    int maior = encontrar_maior(array, TAMANHO_ARRAY);
    int menor = encontrar_menor(array, TAMANHO_ARRAY);

	
	printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);	
	
	return 0;
}
