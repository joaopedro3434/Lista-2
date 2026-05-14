#include <iostream>

using namespace std;

int main() {
    float P1, P2, media;

    // Entrada de dados
    cout << "Digite a nota da P1: ";
    cin >> P1;

    cout << "Digite a nota da P2: ";
    cin >> P2;

    // Cálculo da média
    media = (P1 + (2 * P2)) / 3;

    // Exibindo a média
    cout << "Media final: " << media << endl;

    // Verificação da situação do aluno
    if (media >= 5) {
        cout << "Aluno Aprovado." << endl;
    } else {
        cout << "Aluno Reprovado." << endl;
    }

    return 0;
}