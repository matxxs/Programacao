#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int matriz[tamanho][tamanho];
    int maiorValor = matriz[0][0];
    int linhaMaior, colunaMaior;

   
    cout << "Digite os elementos da matriz 10x10:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    
    cout << "O maior valor da matriz está na linha " << linhaMaior + 1 << " e coluna " << colunaMaior + 1 << endl;

    return 0;
}
