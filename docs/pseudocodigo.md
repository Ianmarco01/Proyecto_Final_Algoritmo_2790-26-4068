INICIO
  Definir opcion_menu, cantidad_producto, ventas_dia Como Entero
  Definir precio_producto, subtotal_acumulado Como Real
  Definir porcentaje_desc, monto_desc, subtotal_con_desc, iva, total_pagar Como Real
  Definir pago_cliente, cambio Como Real
  Definir caja_total, total_descuentos, venta_mayor, venta_menor, promedio Como Real

  ventas_dia = 0
  caja_total = 0
  total_descuentos = 0
  venta_mayor = 0
  venta_menor = 0

  REPETIR
    Escribir "=== SISTEMA DE CAJA ==="
    Escribir "1. Registrar venta"
    Escribir "2. Ver resumen del dia"
    Escribir "3. Cerrar caja y salir"
    Escribir "Elige una opcion: "
    Leer opcion_menu

    SI opcion_menu == 1 ENTONCES
      subtotal_acumulado = 0
      Escribir "--- INICIANDO NUEVA VENTA ---"
      
      REPETIR
        Escribir "Ingresa el precio del producto (pon 0 para terminar la venta): Q"
        Leer precio_producto

        SI precio_producto < 0 ENTONCES
          Escribir "Error: No se aceptan precios negativos. Intenta de nuevo."
        SINO SI precio_producto > 0 ENTONCES
          REPETIR
            Escribir "Ingresa la cantidad (debe ser entre 1 y 100): "
            Leer cantidad_producto
            
            SI cantidad_producto < 1 O cantidad_producto > 100 ENTONCES
              Escribir "Error: La cantidad no es valida."
            FIN SI
          HASTA QUE cantidad_producto >= 1 Y cantidad_producto <= 100

          subtotal_acumulado = subtotal_acumulado + (precio_producto * cantidad_producto)
        FIN SI

      HASTA QUE precio_producto == 0

      SI subtotal_acumulado > 0 ENTONCES
        SI subtotal_acumulado < 100 ENTONCES
          porcentaje_desc = 0
        SINO SI subtotal_acumulado < 500 ENTONCES
          porcentaje_desc = 0.05
        SINO
          porcentaje_desc = 0.10
        FIN SI

        monto_desc = subtotal_acumulado * porcentaje_desc
        subtotal_con_desc = subtotal_acumulado - monto_desc
        iva = subtotal_con_desc * 0.12
        total_pagar = subtotal_con_desc + iva

        REPETIR
          Escribir "Total a pagar: Q", total_pagar
          Escribir "Ingrese el pago del cliente: Q"
          Leer pago_cliente

          SI pago_cliente < total_pagar ENTONCES
            Escribir "Error: El dinero no alcanza."
          FIN SI
        HASTA QUE pago_cliente >= total_pagar

        cambio = pago_cliente - total_pagar

        Escribir "--- RECIBO ---"
        Escribir "Subtotal: Q", subtotal_acumulado
        Escribir "Descuento: Q", monto_desc
        Escribir "IVA: Q", iva
        Escribir "Total: Q", total_pagar
        Escribir "Su cambio es: Q", cambio

        ventas_dia = ventas_dia + 1
        caja_total = caja_total + total_pagar
        total_descuentos = total_descuentos + monto_desc

        SI ventas_dia == 1 ENTONCES
          venta_mayor = total_pagar
          venta_menor = total_pagar
        SINO
          SI total_pagar > venta_mayor ENTONCES
            venta_mayor = total_pagar
          FIN SI
          SI total_pagar < venta_menor ENTONCES
            venta_menor = total_pagar
          FIN SI
        FIN SI
      FIN SI

    SINO SI opcion_menu == 2 ENTONCES
      SI ventas_dia == 0 ENTONCES
        Escribir "Aun no hay ventas registradas."
      SINO
        promedio = caja_total / ventas_dia
        Escribir "--- RESUMEN DEL DIA ---"
        Escribir "Ventas totales: ", ventas_dia
        Escribir "Ingresos totales: Q", caja_total
        Escribir "Total de descuentos: Q", total_descuentos
        Escribir "Venta mayor: Q", venta_mayor
        Escribir "Venta menor: Q", venta_menor
        Escribir "Promedio de venta: Q", promedio
      FIN SI

    SINO SI opcion_menu == 3 ENTONCES
      Escribir "Cerrando el sistema. ¡Nos vemos!"
    
    SINO
      Escribir "Error: Esa opcion no existe. Elige 1, 2 o 3."
    FIN SI

  HASTA QUE opcion_menu == 3
FIN