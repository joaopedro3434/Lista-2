#include <iostream>

using namespace std;

int main() {
    float P1, P2;

    // Entrada de dados
    cout << "Digite a nota da P1: ";
    cin >> P1;

    // Cálculo da nota necessária na P2
    P2 = (15 - P1) / 2;

    // Exibindo o resultado
    cout << "O aluno precisa tirar " << P2
         << " na P2 para ser aprovado." << endl;

    return 0;
}