#include <iostream>

using namespace std;

int main() {
    const int tamanho = 4;
    int matriz[tamanho][tamanho];

    cout << "Digite os elementos da matriz 8x8:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            matriz[i][j] = 0; // Atribui zero a todos os elementos acima da diagonal principal
        }
    }

    cout << "A matriz resultante (triangular inferior) é:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
