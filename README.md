# Sistema de Caja para Tienda 

## Descripción del Proyecto
Este es un programa de consola desarrollado en C++ para gestionar la caja de una tienda. El sistema cuenta con un menú interactivo que permite realizar las operaciones diarias del negocio, tales como registrar ventas individuales, generar un resumen de ventas del día y realizar el cierre de caja. 

## Cómo Compilar y Ejecutar
En la terminal, utilizando el compilador `g++`, ejecuta el comando:
`g++ main.cpp -o caja`

Para iniciar el programa:
* **En Windows:** Escribe `.\caja.exe` en la terminal.
* **En Linux / Mac:** Escribe `./caja` en la terminal.

## Estructuras de Control y Lógica Aplicada
En cumplimiento con los requerimientos del proyecto, se implementaron las siguientes estructuras:
* **Ciclo:** Se utilizó un ciclo `while` principal para mantener el menú activo hasta que el usuario elija la opción de salir (opción 3), y ciclos secundarios para pedir el ingreso de productos hasta que se teclee `0`.
* **Condicional:** Se utilizaron estructuras `if` y `else if` para evaluar el subtotal de la compra y aplicar los descuentos correspondientes (0%, 5% o 10%) dependiendo del monto.
* **Validación:** Se implementaron validaciones dentro de ciclos `while` para evitar el ingreso de opciones de menú incorrectas, precios negativos, cantidades fuera del rango permitido (1 a 100), y para asegurar que el pago del cliente cubra el total.

## Uso de Inteligencia Artificial
* **Herramienta utilizada:** Gemini de Google.
* **Uso principal:** Se utilizó como asistente de tutoría técnica para la depuración de errores de sintaxis (como puntos y comas faltantes o errores de llaves) que impedían la compilación en Visual Studio Code, así como apoyo para recordar los comandos de control de versiones en Git y la sintaxis Markdown de este documento.
* **Qué se rechazó y por qué:** Se rechazaron sugerencias de la IA enfocadas en refactorizar el código utilizando arreglos, funciones complejas o programación orientada a objetos. Estas sugerencias fueron descartadas porque el objetivo pedagógico del proyecto es aplicar y demostrar el dominio estricto de las estructuras de control básicas (ciclos y condicionales) vistas en clase, sin recurrir a atajos avanzados.

## Casos de Prueba (Resultados y Capturas)

A continuación se documentan los 5 casos de prueba mínimos solicitados:

### 1. Venta de Q99.99 (sin descuento) y venta de Q100.00 (límite del 5%)
![Caso 1](caso1.png)

### 2. Venta de Q500.00 (límite del 10%)
![Caso 2](caso2.png)

### 3. Cantidad 0, cantidad 101, precio negativo y opción de menú "9"
![Caso 3](caso3.png)

### 4. Resumen del día sin ventas registradas
![Caso 4](caso4.png)

### 5. Pago menor al total
![Caso 5](caso5.png)