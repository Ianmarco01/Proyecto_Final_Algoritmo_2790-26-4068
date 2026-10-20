INICIO
  Definir opcion_menu, cantidad_producto Como Entero
  Definir precio_producto, subtotal_acumulado Como Real

  REPETIR
    Escribir "=== SISTEMA DE CAJA ==="
    Escribir "1. Registrar venta"
    Escribir "2. Ver resumen parcial del dia"
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

      Escribir "-> El subtotal de esta venta es: Q", subtotal_acumulado

    SINO SI opcion_menu == 2 ENTONCES
      Escribir "Esta opcion la vamos a programar para el hito 2."
    
    SINO SI opcion_menu == 3 ENTONCES
      Escribir "Cerrando el sistema. ¡Nos vemos!"
    
    SINO
      Escribir "Error: Esa opcion no existe. Elige 1, 2 o 3."
    FIN SI

  HASTA QUE opcion_menu == 3
FIN