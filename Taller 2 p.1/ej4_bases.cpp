


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero (1-255): ";
    cin >> n;

    if (n < 1 || n > 255) {
        cout << "Error: el numero debe estar entre 1 y 255." << endl;
        return 1;
    }
    
    int potencia = 1;
    while (potencia * 2 <= n) {
        potencia *= 2;
    }

    cout << n << " en base 2: ";
    int temp = n;
    while (potencia >= 1) {
        if (temp >= potencia) {
            cout << 1;
            temp -= potencia;
        } else {
            cout << 0;
        }
        potencia /= 2;
    }
    cout << endl;
    
    int digito_alto = n / 16;
    int digito_bajo = n % 16;

    cout << n << " en base 16: ";

    if (digito_alto > 0) {
        if (digito_alto < 10) cout << digito_alto;
        else cout << (char)('A' + digito_alto - 10);
    }

    if (digito_bajo < 10) cout << digito_bajo;
    else cout << (char)('A' + digito_bajo - 10);

    cout << endl;

    return 0;
}
