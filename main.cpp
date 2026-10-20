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

        if (opcion_menu == 1) {
            subtotal_acumulado = 0;
            cout << "\n--- INICIANDO NUEVA VENTA ---" << endl;
            
            do {
                cout << "Ingresa el precio del producto (pon 0 para terminar la venta): Q";
                cin >> precio_producto;

                if (precio_producto < 0) {
                    cout << "Error: No se aceptan precios negativos. Intenta de nuevo." << endl;
                } 
                else if (precio_producto > 0) {
                    do {
                        cout << "Ingresa la cantidad (debe ser entre 1 y 100): ";
                        cin >> cantidad_producto;
                        
                        if (cantidad_producto < 1 || cantidad_producto > 100) {
                            cout << "Error: La cantidad no es valida." << endl;
                        }
                    } while (cantidad_producto < 1 || cantidad_producto > 100);

                    subtotal_acumulado = subtotal_acumulado + (precio_producto * cantidad_producto);
                }

            } while (precio_producto != 0);

            cout << "-> El subtotal de esta venta es: Q" << subtotal_acumulado << endl;

        } 
        else if (opcion_menu == 2) {
            cout << "\nEsta opcion la vamos a programar para el hito 2." << endl;
        } 
        else if (opcion_menu == 3) {
            cout << "\nCerrando el sistema. ¡Nos vemos!" << endl;
        } 
        else {
            cout << "\nError: Esa opcion no existe. Elige 1, 2 o 3." << endl;
        }

    } while (opcion_menu != 3);

    return 0;
}