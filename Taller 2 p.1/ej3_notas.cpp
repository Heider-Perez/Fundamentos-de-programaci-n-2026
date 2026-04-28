


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota;
    double suma = 0.0;
    double maxima = -1.0;
    double minima = 6.0;
    int cantidad = 0;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese notas (0.0 a 5.0). Ingrese -1 para terminar." << endl;

    while (true) {
        cout << "Nota: ";
        cin >> nota;

        if (nota == -1) break;

        if (nota < 0.0 || nota > 5.0) {
            cout << "Advertencia: nota fuera de rango. Ignorada." << endl;
            continue;
        }

        cantidad++;
        suma += nota;

        if (nota > maxima) maxima = nota;
        if (nota < minima) minima = nota;

        if (nota >= 3.0) aprobados++;
        else reprobados++;
    }

    if (cantidad == 0) {
        cout << "No se ingresaron notas validas." << endl;
    } else {
        double promedio = suma / cantidad;
        cout << "\n--- Estadisticas ---" << endl;
        cout << "Total de notas   : " << cantidad << endl;
        cout << "Promedio         : " << fixed << setprecision(2) << promedio << endl;
        cout << "Nota maxima      : " << maxima << endl;
        cout << "Nota minima      : " << minima << endl;
        cout << "Aprobados (>=3.0): " << aprobados << endl;
        cout << "Reprobados (<3.0): " << reprobados << endl;
    }

    return 0;
}
