#include <iostream>

using namespace std;

int main() {
    int valor1, valor2;

    // Entrada de dados
    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    // Verificação dos valores
    if (valor1 > valor2) {
        cout << "O maior valor é: " << valor1 << endl;
    } 
    else if (valor2 > valor1) {
        cout << "O maior valor é: " << valor2 << endl;
    } 
    else {
        cout << "Os números são idênticos." << endl;
    }

    return 0;
}