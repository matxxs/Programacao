#include <iostream>

using namespace std;

const int num_alunos = 100;
const int num_questoes = 10;

int calcularPontuacao(char respostas_aluno[num_questoes], char gabarito[num_questoes]) {
    int pontuacao = 0;
    for (int i = 0; i < num_questoes; ++i) {
        if (respostas_aluno[i] == gabarito[i]) {
            pontuacao++;
        }
    }
    return pontuacao;
}

int main() {
    char respostas_alunos[num_alunos][num_questoes];

    char gabarito[num_questoes];

    cout << "Digite as respostas do gabarito (a, b, c ou d):" << endl;
    for (int i = 0; i < num_questoes; ++i) {
        cin >> gabarito[i];
    }

    cout << "Digite as respostas dos alunos:" << endl;
    for (int i = 0; i < num_alunos; ++i) {
        cout << "Aluno " << i + 1 << ":" << endl;
        for (int j = 0; j < num_questoes; ++j) {
            cin >> respostas_alunos[i][j];
        }
    }

    cout << "Pontuação dos alunos:" << endl;
    for (int i = 0; i < num_alunos; ++i) {
        int pontuacao = calcularPontuacao(respostas_alunos[i], gabarito);
        cout << "Aluno " << i + 1 << ": " << pontuacao << " pontos" << endl;
    }

    return 0;
}
