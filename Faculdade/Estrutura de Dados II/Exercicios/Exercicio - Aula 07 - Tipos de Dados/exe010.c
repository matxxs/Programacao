#include <stdio.h>

#define TAMANHO_HABITANTES 50

void Dados(char genero[], int olhos[], int cabelos[]){
	
	int i;
	
	printf("INSIRA OS DADOS PARA OS %d HABITANTES:\n\n", TAMANHO_HABITANTES);
	
	for(i =0; i < TAMANHO_HABITANTES; i++){
		printf("Habitante %d:\n", i + 1);
        printf("Genero (f/m): ");
        scanf(" %c", &genero[i]);
        printf("Cor dos olhos (1-azul, 2-verde, 3-castanho): ");
        scanf("%d", &olhos[i]);
        printf("Cor dos cabelos (1-louro, 2-preto, 3-castanho): ");
        scanf("%d", &cabelos[i]);
		
		printf("\n");	
	}
	
}

int main() {
	
	char genero[TAMANHO_HABITANTES];
	int olhos[TAMANHO_HABITANTES], cabelos[TAMANHO_HABITANTES];
	
	int cont_homens = 0, cont_mulheres = 0;
    int cont_azuis = 0, cont_verdes = 0, cont_castanhos_olhos = 0;
    int cont_louros = 0, cont_pretos = 0, cont_castanhos_cabelos; 
    
    Dados(genero, olhos, cabelos);
    
    int i;
    
    for(i = 0; i < TAMANHO_HABITANTES < i++){
    	
    	if(genero[i] == 'm')
    		cont_homens++;
    	else
    		cont_mulheres++;
			
		switch (olhos[i]) {
            case 1:
                cont_azuis++;
                break;
            case 2:
                cont_verdes++;
                break;
            case 3:
                cont_castanhos_olhos++;
                break;
        }

        switch (cabelos[i]) {
            case 1:
                cont_louros++;
                break;
            case 2:
                cont_pretos++;
                break;
            case 3:
                cont_castanhos_cabelos++;
                break;
        }	
    		
	}
	
	printf("\nGênero:\n");
    printf("%d homens\n", cont_homens);
    printf("%d mulheres\n", cont_mulheres);

    printf("\nOlhos:\n");
    printf("%d azuis\n", cont_azuis);
    printf("%d verdes\n", cont_verdes);
    printf("%d castanhos\n", cont_castanhos_olhos);

    printf("\nCabelos:\n");
    printf("%d louros\n", cont_louros);
    printf("%d pretos\n", cont_pretos);
    printf("%d castanhos\n", cont_castanhos_cabelos);

    return 0;
}


