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