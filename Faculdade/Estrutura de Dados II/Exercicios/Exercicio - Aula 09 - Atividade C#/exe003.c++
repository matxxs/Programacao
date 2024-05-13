#include <iostream>

using namespace std;

int main() {
    const int tamanho = 2;
    int matriz[tamanho][tamanho];
    int contador = 0;

    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    cout << "A matriz possui " << contador << " valores maiores que 10." << endl;

    return 0;
}
