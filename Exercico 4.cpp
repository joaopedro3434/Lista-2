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

    // Verificando o tamanho do terreno
    if (area > 100) {
        cout << "Terreno grande" << endl;
    }

    return 0;
}