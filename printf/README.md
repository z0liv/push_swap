*Este proyecto ha sido creado como parte del currículo de 42 por khurtado* 
# ft_printf

## Descripción

`ft_printf` es una reimplementación de la función estándar `printf` de C. Este proyecto forma parte del currículo de 42 y tiene como objetivo:

- **Objetivo Principal**: Recrear la funcionalidad de la función `printf` de la biblioteca estándar de C (`stdio.h`), comprendiendo en profundidad cómo funciona la formación y procesamiento de cadenas de formato.

- **Visión General**: El proyecto requiere implementar una función variádica (`va_args`) que interprete especificadores de formato (como `%d`, `%s`, `%x`, etc.) y convierta los argumentos proporcionados en una salida formateada. Esta tarea implica trabajar con:
  - Funciones variádicas (variable argument lists)
  - Análisis de cadenas de formato
  - Conversión de tipos de datos

## Especificadores Soportados

El proyecto implementa soporte para los siguientes especificadores de formato:

- **`%c`**: Carácter (char)
- **`%s`**: Cadena de caracteres (string)
- **`%p`**: Puntero (en formato hexadecimal con prefijo `0x`)
- **`%d`** y **`%i`**: Entero con signo (int)
- **`%u`**: Entero sin signo (unsigned int)
- **`%x`**: Entero en hexadecimal minúscula
- **`%X`**: Entero en hexadecimal mayúscula
- **`%%`**: Carácter porcentaje

## Algoritmo y Estructura de Datos

### Elección del Algoritmo

Se utilizó un **enfoque de análisis secuencial de caracteres** para procesar la cadena de formato:

1. **Iteración sobre la cadena de formato**: Se recorre carácter a carácter buscando el especificador `%`.
2. **Extracción de flags y modificadores**: Cuando se encuentra `%`, se analiza el siguiente carácter.
3. **Identificación del especificador**: Se determina el tipo de dato a convertir (`c`, `s`, `d`, etc.).
4. **Conversión y formateo**: Según el especificador, se convierte el argumento al formato requerido.
5. **Retorno del contador**: Se devuelve el número total de caracteres escritos.

### Justificación

- **Simplicidad y eficiencia**: Este enfoque es directo.
- **Manejo de contexto**: Permite capturar y aplicar modificadores de forma coherente.
- **Escalabilidad**: Es fácil agregar nuevos especificadores sin cambiar la estructura fundamental.


## Instrucciones

### Clonar el repositorio

Para comenzar, clona el repositorio en la carpeta de tu elección:

```bash
git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-1340624d-1c6d-4e4f-a296-8fd8fd7ddf66-7413675-khurtado printf
cd printf
```

### Compilación

El proyecto incluye un **Makefile** con reglas estándar. Para compilar la librería:

```bash
make            # Compila la librería ft_printf
make clean      # Elimina los archivos .o generados
make fclean     # Elimina todos los archivos generados (incluyendo .a)
make re          # Recompila desde cero (clean + all)
```

Esto generará un archivo llamado **`libftprintf.a`**, que es la librería estática lista para ser utilizada.

### Uso en tu propio proyecto

Para utilizar esta librería en tus proyectos de C:

1. **Incluye el header**:
```c
#include "ft_printf.h"
```

2. **Compila enlazando la librería**:
```bash
cc main.c -L. -lftprintf -o mi_programa
```

**Explicación de las flags**:
- `-L.` → Busca librerías en el directorio actual
- `-lftprintf` → Enlaza con `libftprintf.a`


## Recursos

### Mi compañero Oliver de Urduliz.

### Documentación y Referencias

- **Manuales de C (`man` pages)**: 
  - `man printf` → Comportamiento y especificadores de `printf`
  - `man 3 stdarg` → Funciones variádicas (`va_start`, `va_arg`, `va_end`)
  - `man 3 va_args` → Argumentos variables

- **Documentación de GNU C Library**: Referencia detallada sobre el comportamiento de `printf` y sus variantes.

- **Tutoriales sobre funciones variádicas**:
  - GeeksforGeeks: "Variable Length Arguments in C"
  - StackOverflow: Preguntas y respuestas sobre `va_args`


- **Online compilers**: Herramientas como PythonTutor o OnlineGDB para probar fragmentos de código.

### Uso de Inteligencia Artificial

En este proyecto, se ha utilizado IA de la siguiente manera:

- **Documentación**: Asistencia en la redacción y estructuración de este archivo `README.md`.


## Características Destacadas

- ✅ Soporte completo de especificadores básicos (`%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`)
- ✅ Retorno del número correcto de caracteres escritos
- ✅ Compilación limpia sin warnings
- ✅ Integración con libft
