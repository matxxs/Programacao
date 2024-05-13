#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];

    cout << "Digite os elementos da matriz 5x5:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][tamanho - 1 - i];
        matriz[i][tamanho - 1 - i] = temp;
    }

    cout << "A matriz com as diagonais trocadas é:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
