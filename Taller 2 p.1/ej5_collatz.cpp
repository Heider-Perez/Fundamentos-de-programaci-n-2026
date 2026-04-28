#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Error: el numero debe ser mayor que 1." << endl;
        return 1;
    }

    long long actual = n;
    long long maximo = n;
    int pasos = 0;
    bool primero = true;

    while (actual != 1) {
        if (!primero) cout << " -> ";
        cout << actual;
        primero = false;

        if (actual % 2 == 0) {
            actual /= 2;
        } else {
            actual = 3 * actual + 1;
        }

        pasos++;
        if (actual > maximo) maximo = actual;
    }

    cout << " -> " << actual << endl;
    cout << "Pasos: " << pasos << endl;
    cout << "Valor maximo: " << maximo << endl;

    return 0;
}
