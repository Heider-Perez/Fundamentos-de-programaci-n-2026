// Ejercicio 1


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero (1-9): ";
    cin >> n;

    if (n < 1 || n > 9) {
        cout << "Error: El numero  debe estar entre 1 y 9." << endl;
        return 1;
    }

    int impar = 1;

    for (int fila = 1; fila <= n; fila++) {
        for (int col = 1; col <= fila; col++) {
            if (col > 1) cout << " ";
            cout << impar;
            impar += 2;
        }
        cout << endl;
    }

    return 0;
}
