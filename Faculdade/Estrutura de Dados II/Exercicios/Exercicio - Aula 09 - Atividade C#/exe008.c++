#include <iostream>

using namespace std;

const int tamanho = 3;

void somaMatrizes(int matrizA[][tamanho], int matrizB[][tamanho], int matrizC[][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int matrizA[tamanho][tamanho], matrizB[tamanho][tamanho], matrizC[tamanho][tamanho];

    cout << "Digite os elementos da matriz A 3x3:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matrizA[i][j];
        }
    }

    cout << "Digite os elementos da matriz B 3x3:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matrizB[i][j];
        }
    }

    somaMatrizes(matrizA, matrizB, matrizC);

    cout << "A matriz resultante da soma é:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
