#include <iostream>

using namespace std;

int main() {
    char sexo;
    float peso, altura, pesoIdeal;

    // Entrada de dados
    cout << "Digite o sexo da pessoa (M/F): ";
    cin >> sexo;

    cout << "Digite o peso da pessoa (kg): ";
    cin >> peso;

    cout << "Digite a altura da pessoa (m): ";
    cin >> altura;

    // Cálculo do peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    }
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else {
        cout << "Sexo invalido!" << endl;
        return 0;
    }

    // Exibindo o peso ideal
    cout << "Peso ideal: " << pesoIdeal << " kg" << endl;

    // Verificação do peso
    if (peso == pesoIdeal) {
        cout << "A pessoa esta com o peso ideal." << endl;
    }
    else {
        cout << "A pessoa nao esta com o peso ideal." << endl;
    }

    return 0;
}