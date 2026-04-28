#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un entero mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Error: el numero debe ser mayor que 1." << endl;
        return 1;
    }

    int original = n;
    int totalFactores = 0;
    bool primero = true;

    cout << n << " = ";

    int d = 2;
    while (d <= n) {
        while (n % d == 0) {
            if (!primero) cout << " x ";
            cout << d;
            primero = false;
            totalFactores++;
            n /= d;
        }
        d++;
    }

    cout << endl;
    cout << "Total de factores primos (con repeticion): " << totalFactores << endl;

    if (totalFactores == 1) {
        cout << original << " es un numero primo." << endl;
    } else {
        cout << original << " no es un numero primo." << endl;
    }

    return 0;
}
