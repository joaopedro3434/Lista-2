#include <iostream>

using namespace std;

int main() {
    float base, altura, area;

    // Entrada de dados
    cout << "Digite a base do retangulo: ";
    cin >> base;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    // Cálculo da área
    area = base * altura;

    // Exibindo a área
    cout << "A area do retangulo é: " << area << endl;

    // Verificação do tamanho do terreno
    if (area > 100) {
        cout << "Terreno grande" << endl;
    } else {
        cout << "Terreno pequeno" << endl;
    }

    return 0;
}