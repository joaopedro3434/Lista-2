#include <iostream>

using namespace std;

int main() {
    float lado1, lado2, lado3;

    // Entrada de dados
    cout << "Digite o primeiro lado do triangulo: ";
    cin >> lado1;

    cout << "Digite o segundo lado do triangulo: ";
    cin >> lado2;

    cout << "Digite o terceiro lado do triangulo: ";
    cin >> lado3;

    // Verificando se forma um triângulo
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {

        cout << "Os valores formam um triangulo." << endl;

        // Classificação do triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Triangulo Equilatero." << endl;
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Triangulo Isosceles." << endl;
        }
        else {
            cout << "Triangulo Escaleno." << endl;
        }

    } else {
        cout << "Os valores nao formam um triangulo." << endl;
    }

    return 0;
}