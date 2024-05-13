#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];
    int valorX;
    bool encontrado = false;
    int linhaEncontrado = -1, colunaEncontrado = -1;

    cout << "Digite os elementos da matriz 5x5:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o valor a ser buscado na matriz:" << endl;
    cin >> valorX;

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (matriz[i][j] == valorX) {
                encontrado = true;
                linhaEncontrado = i;
                colunaEncontrado = j;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        cout << "O valor " << valorX << " foi encontrado na linha " << linhaEncontrado + 1 << " e coluna " << colunaEncontrado + 1 << "." << endl;
    } else {
        cout << "O valor " << valorX << " não foi encontrado na matriz." << endl;
    }

    return 0;
}
