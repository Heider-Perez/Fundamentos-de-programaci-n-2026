

#include <iostream>
using namespace std;

int main() {
    int acumulado = 0;
    int valor;
    bool jugando = true;

    while (jugando) {
        cout << "Ingrese un valor (0-6): ";
        cin >> valor;

        if (valor < 0 || valor > 6) {
            cout << "Error: ingrese un valor entre 0 y 6." << endl;
            continue;
        }

        if (valor == 1) {
            cout << "Perdio todos sus puntos. Fin del juego." << endl;
            acumulado = 0;
            jugando = false;
        } else if (valor == 0) {
            cout << "Juego terminado voluntariamente." << endl;
            jugando = false;
        } else {
            acumulado += valor;
            cout << "Puntos acumulados: " << acumulado << endl;
        }
    }

    if (acumulado > 0) {
        cout << "Gano con " << acumulado << " puntos." << endl;
    } else {
        cout << "Resultado final: 0 puntos." << endl;
    }

    return 0;
}
