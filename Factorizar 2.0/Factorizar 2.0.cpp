#include <iostream>
using namespace std;

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int opc;

    do
    {
        int numero;
        cout << "Introduce un numero: ";
        cin >> numero;

        // Calcula y muestra el factorial
        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
        cout << "Le gustaria volver a factorizar? ";
        cout << "1.- Si" << endl;
        cout << "2. No" << endl;
        cin >> opc;
    } while (opc != 2);
    return 0;
}
