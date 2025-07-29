![Descripción](https://img.shields.io/badge/Descripción-blue?style=for-the-badge)

**ft_printf** es una reimplementación de la función estándar `printf` de C, creada para entender a fondo:

- El parseo de cadenas de formato.
- El manejo de argumentos variables con `stdarg.h`.
- La impresión de distintos tipos de datos.
- El control de ancho de campo, precisión y flags.

Este proyecto es ideal para profundizar en el funcionamiento interno de una de las funciones más utilizadas en C y reforzar conceptos de punteros, estructuras de datos ligeras y manejo de memoria.

![Funcionalidades](https://img.shields.io/badge/Funcionalidades-green?style=for-the-badge&logo=readthedocs)


- Soporte de los siguientes especificadores de conversión:  
  - **`%c`** — caracter  
  - **`%s`** — cadena de caracteres  
  - **`%p`** — punteros (imprime dirección en hexadecimal)  
  - **`%d`**, **`%i`** — enteros con signo  
  - **`%u`** — enteros sin signo  
  - **`%x`**, **`%X`** — enteros en hexadecimal (minúsculas y mayúsculas)  
  - **`%%`** — signo de porcentaje literal

- Flags y modificadores:  
  - **`-`** (alineación a la izquierda)  
  - **`0`** (relleno con ceros)  
  - Precisión (`.n`)  
  - Ancho de campo (n)

- Gestión de errores:  
  - Detección de formatos inválidos.  
  - Manejo seguro de cadenas nulas.

- Sin uso de la función `printf` o familiares de la libc para formateo:  
  - Únicamente `write()` para salida.

---
