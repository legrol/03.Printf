![Descripción](https://img.shields.io/badge/Descripción-blue?style=for-the-badge)

**ft_printf** es una reimplementación de la función estándar `printf` de C, creada para entender a fondo:

- El parseo de cadenas de formato.
- El manejo de argumentos variables con `stdarg.h`.
- La impresión de distintos tipos de datos.
- El control de ancho de campo, precisión y flags.

Este proyecto es ideal para profundizar en el funcionamiento interno de una de las funciones más utilizadas en C y reforzar conceptos de punteros, estructuras de datos ligeras y manejo de memoria.

![Funcionalidades](https://img.shields.io/badge/Funcionalidades-green?style=for-the-badge)


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

![Estructura](https://img.shields.io/badge/Estructura-orange?style=for-the-badge)

```text
03.Printf-main/
├── includes/          # Cabeceras (.h)
│   └── ft_printf.h
├── srcs/              # Implementación en C (.c)
│   ├── ft_printf.c    # Función principal y dispatch
│   ├── parser.c       # Parseo de formato y flags
│   ├── handlers.c     # Funciones de impresión por tipo
│   ├── utils.c        # Helpers de conversión y medición
│   └── ...
├── tests/             # (Opcional) casos de prueba automatizados
├── Makefile           # Reglas de construcción
└── libftprintf.a      # Biblioteca compilada (artefacto)

![Compilación](https://img.shields.io/badge/Compilación-blue?style=for-the-badge)

  - make

  - make all — Compila todo y genera libftprintf.a.

  - make clean — Elimina los objetos intermedios (*.o).

  - make fclean — Además de clean, elimina la biblioteca libftprintf.a.

  - make re — Ejecuta fclean y luego all.

![Uso](https://img.shields.io/badge/Uso-yellow?style=for-the-badge)

  Incluye la cabecera en tu programa:

    #include "ft_printf.h"
  
  Enlaza contra la biblioteca al compilar:
  
    gcc -L. -lftprintf your_program.c -o your_program
  
  Ejecutar el programa, usando ft_printf como cuando se usa printf:
  
    ft_printf("Hola %s, tienes %03d mensajes pendientes\n", nombre, mensajes);


![Autor](https://img.shields.io/badge/Autor-red?style=for-the-badge)

- Roberto del Olmo Lima
- [![GitHub](https://img.shields.io/badge/GitHub-Profile-informational?style=for-the-badge&logo=github&logoColor=white&color=181717)](https://github.com/legrol)
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/roberto-del-olmo-731746245)
