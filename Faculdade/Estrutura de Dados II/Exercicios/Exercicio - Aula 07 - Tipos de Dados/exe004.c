#include <stdio.h>

int obterElemento(int array[], int tamanho, int posicao) {
    
    if (posicao >= 0 && posicao < tamanho) {
        return array[posicao]; 
        
    } else {
        printf("Posicao invalida\n");
        return -1; 
    }
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int posicao;

    printf("Digite a posicao do elemento que deseja obter: ");
    scanf("%d", &posicao);

    int elemento = obterElemento(array, tamanho, posicao);

    if (elemento != -1) {
        printf("O elemento na posicao %d e: %d\n", posicao, elemento);
    }

    return 0;
}

