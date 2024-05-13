#include <iostream>

using namespace std;

int main() {
    const int tamanho = 4;
    int matriz1[tamanho][tamanho], matriz2[tamanho][tamanho], matrizMaior[tamanho][tamanho];

    cout << "Digite os elementos da primeira matriz 4x4:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os elementos da segunda matriz 4x4:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMaior[i][j] = matriz1[i][j];
            } else {
                matrizMaior[i][j] = matriz2[i][j];
            }
        }
    }

    cout << "A terceira matriz com os maiores elementos entre as duas primeiras é:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matrizMaior[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
