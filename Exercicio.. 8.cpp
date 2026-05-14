#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float A, B, C;

    // Entrada de dados
    cout << "Digite o primeiro valor: ";
    cin >> A;

    cout << "Digite o segundo valor: ";
    cin >> B;

    cout << "Digite o terceiro valor: ";
    cin >> C;

    // Verificando se formam um triângulo retângulo
    if ((A * A == B * B + C * C) ||
        (B * B == A * A + C * C) ||
        (C * C == A * A + B * B)) {

        cout << "Os valores formam um triangulo retangulo." << endl;

    } else {

        cout << "Os valores nao formam um triangulo retangulo." << endl;
    }

    return 0;
}