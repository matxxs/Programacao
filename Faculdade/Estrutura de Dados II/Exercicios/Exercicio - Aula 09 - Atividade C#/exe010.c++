#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int linhas = 6;
const int colunas = 6;


void gerarMatriz(int matriz[linhas][colunas]) {
    srand(time(nullptr));
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            matriz[i][j] = rand() % 100; 
        }
    }
}

void imprimirMatriz(int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void somaColunasImpares(int matriz[linhas][colunas]) {
    int soma = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (j % 2 != 0) {
                soma += matriz[i][j];
            }
        }
    }
    cout << "Soma dos elementos das colunas ímpares: " << soma << endl;
}

void mediaSegundaQuartaLinha(int matriz[linhas][colunas]) {
    int soma = 0;
    for (int j = 0; j < colunas; ++j) {
        soma += matriz[1][j];
        soma += matriz[3][j];
    }
    double media = soma / (2.0 * colunas);
    cout << "Média aritmética dos elementos da segunda e quarta linha: " << media << endl;
}

int encontrarMaiorValor(int matriz[linhas][colunas]) {
    int maior = matriz[0][0];
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int encontrarMenorDiagonalSecundaria(int matriz[linhas][colunas]) {
    int menor = matriz[0][colunas - 1];
    for (int i = 1; i < linhas; ++i) {
        if (matriz[i][colunas - 1 - i] < menor) {
            menor = matriz[i][colunas - 1 - i];
        }
    }
    return menor;
}

void mediaAritmeticaTotal(int matriz[linhas][colunas]) {
    int soma = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            soma += matriz[i][j];
        }
    }
    double media = soma / (1.0 * linhas * colunas);
    cout << "Média aritmética de todos os valores: " << media << endl;
}

int main() {
    int matriz[linhas][colunas];

    gerarMatriz(matriz);
    cout << "Matriz gerada:" << endl;
    imprimirMatriz(matriz);

    somaColunasImpares(matriz);

    mediaSegundaQuartaLinha(matriz);

    int maior = encontrarMaiorValor(matriz);
    cout << "Maior valor da matriz: " << maior << endl;

    int menorDiagonalSecundaria = encontrarMenorDiagonalSecundaria(matriz);
    cout << "Menor valor da diagonal secundária: " << menorDiagonalSecundaria << endl;

    mediaAritmeticaTotal(matriz);

    return 0;
}
