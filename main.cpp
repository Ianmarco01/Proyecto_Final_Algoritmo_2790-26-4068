#include <iostream>

using namespace std;

int main() {
    int opcion_menu;
    float precio_producto;
    int cantidad_producto;
    float subtotal_acumulado;

    do {
        cout << "\n=== SISTEMA DE CAJA ===" << endl;
        cout << "1. Registrar venta" << endl;
        cout << "2. Ver resumen parcial del dia" << endl;
        cout << "3. Cerrar caja y salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion_menu;


    } while (opcion_menu != 3);

    return 0;
}