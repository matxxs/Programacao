#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int tamanho_cartela = 5;

bool numeroRepetido(int cartela[tamanho_cartela][tamanho_cartela], int numero) {
    for (int i = 0; i < tamanho_cartela; ++i) {
        for (int j = 0; j < tamanho_cartela; ++j) {
            if (cartela[i][j] == numero) {
                return true;
            }
        }
    }
    return false;
}

void gerarCartela(int cartela[tamanho_cartela][tamanho_cartela]) {
    srand(time(nullptr));
    int numerosSelecionados = 0;

    while (numerosSelecionados < tamanho_cartela * tamanho_cartela) {
        int numero = rand() % 100; 

        if (!numeroRepetido(cartela, numero)) {
            cartela[numerosSelecionados / tamanho_cartela][numerosSelecionados % tamanho_cartela] = numero;
            numerosSelecionados++;
        }
    }
}


void exibirCartela(int cartela[tamanho_cartela][tamanho_cartela]) {
    for (int i = 0; i < tamanho_cartela; ++i) {
        for (int j = 0; j < tamanho_cartela; ++j) {
            cout << cartela[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int cartela[tamanho_cartela][tamanho_cartela];

    
    gerarCartela(cartela);
    exibirCartela(cartela);

    return 0;
}
