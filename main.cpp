#include <iostream>

using namespace std;

int main() {
    int opcion_menu, cantidad_producto, ventas_dia;
    double precio_producto, subtotal_acumulado;
    double porcentaje_desc, monto_desc, subtotal_con_desc, iva, total_pagar;
    double pago_cliente, cambio;
    double caja_total, total_descuentos, venta_mayor, venta_menor, promedio;

    ventas_dia = 0;
    caja_total = 0;
    total_descuentos = 0;
    venta_mayor = 0;
    venta_menor = 0;

    do {
        cout << "=== SISTEMA DE CAJA ===" << endl;
        cout << "1. Registrar venta" << endl;
        cout << "2. Ver resumen del dia" << endl;
        cout << "3. Cerrar caja y salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion_menu;

        if (opcion_menu == 1) {
            subtotal_acumulado = 0;
            cout << "--- INICIANDO NUEVA VENTA ---" << endl;

            do {
                cout << "Ingresa el precio del producto (pon 0 para terminar la venta): Q";
                cin >> precio_producto;

                if (precio_producto < 0) {
                    cout << "Error: No se aceptan precios negativos. Intenta de nuevo." << endl;
                } else if (precio_producto > 0) {
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

            if (subtotal_acumulado > 0) {
                if (subtotal_acumulado < 100) {
                    porcentaje_desc = 0;
                } else if (subtotal_acumulado < 500) {
                    porcentaje_desc = 0.05;
                } else {
                    porcentaje_desc = 0.10;
                }

                monto_desc = subtotal_acumulado * porcentaje_desc;
                subtotal_con_desc = subtotal_acumulado - monto_desc;
                iva = subtotal_con_desc * 0.12;
                total_pagar = subtotal_con_desc + iva;