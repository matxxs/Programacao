#include <iostream>

using namespace std;

int main() {
    const int tamanho = 4;
    int matriz[tamanho][tamanho];
    int matrizResultado[tamanho][tamanho];

    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        matrizResultado[0][i] = matriz[3][i];
        matrizResultado[3][i] = matriz[0][i];
    }

    for (int i = 1; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matrizResultado[i][j] = matriz[i][j];
        }
    }

    cout << "A matriz resultante é:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
