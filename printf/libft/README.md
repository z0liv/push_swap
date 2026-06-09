*Este proyecto ha sido creado como parte del currículo de 42 por khurtado* 
# Descripción

La Libft es el primer proyecto oficial del currículo de 42. Consiste en programar nuestra propia biblioteca estándar de C, recreando funciones de la libc y añadiendo otras utilidades que usaremos en proyectos futuros.

## Funciones incluidas

### Funciones de la Libc (Parte 1)

#### Funciones de comprobación y manipulación de caracteres:
* **ft_isalpha**: Comprueba si el carácter es alfabético.
* **ft_isdigit**: Comprueba si el carácter es un dígito (0 a 9).
* **ft_isalnum**: Comprueba si el carácter es alfanumérico.
* **ft_isascii**: Comprueba si el carácter pertenece al set ASCII.
* **ft_isprint**: Comprueba si el carácter es imprimible (incluyendo el espacio).
* **ft_toupper**: Convierte un carácter a mayúscula.
* **ft_tolower**: Convierte un carácter a minúscula.

#### Funciones de manipulación de strings:
* **ft_strlen**: Calcula la longitud de un string.
* **ft_strlcpy**: Copia un string a un tamaño específico con seguridad.
* **ft_strlcat**: Concatena strings asegurando el tamaño del destino.
* **ft_strchr**: Localiza la primera aparición de un carácter en un string.
* **ft_strrchr**: Localiza la última aparición de un carácter en un string.
* **ft_strncmp**: Compara dos strings hasta un número determinado de caracteres.
* **ft_strnstr**: Localiza un sub-string dentro de otro, limitando la búsqueda.
* **ft_atoi**: Convierte la representación inicial de un string en un entero.

#### Funciones de manipulación de memoria:
* **ft_memset**: Llena un bloque de memoria con un byte específico.
* **ft_bzero**: Escribe ceros en un bloque de memoria.
* **ft_memcpy**: Copia un área de memoria (sin solapamiento).
* **ft_memmove**: Copia un área de memoria (maneja solapamientos de forma segura).
* **ft_memchr**: Localiza un byte específico en un bloque de memoria.
* **ft_memcmp**: Compara dos bloques de memoria.

#### Funciones de memoria dinámica:
* **ft_calloc**: Reserva memoria para un array y la inicializa a cero.
* **ft_strdup**: Duplica un string reservando memoria nueva.

---

 ### Funciones Adicionales (Parte 2)


#### Funciones que no pertenecen a la librería estándar o tienen un enfoque distinto:


**ft_substr**: Extrae una sección de un string.


**ft_strjoin**: Concatena dos strings en uno nuevo.


**ft_strtrim**: Elimina caracteres específicos del inicio y fin.


**ft_split**: Divide un string en un array usando un delimitador.


**ft_itoa**: Convierte un entero a string.


**ft_strmapi** / **ft_striteri**: Aplica una función a cada carácter de un string.


**ft_putchar_fd** / **ft_putstr_fd** / **ft_putendl_fd** / ft_putnbr_fd: Salida de datos a un descriptor de archivo.

---

### Listas enlazadas (Parte 3)


#### Funciones que utilizan una estructura para manejar listas enlazadas:


**ft_lstnew**: Reserva memoria (usando malloc(3)) y devuelve un nuevo nodo. La variable ‘content’ se inicializa con el contenido del parámetro ‘content’. Mientras que la variable ‘next’ se inicializa con NULL.

**ft_lstadd_front**: Añade el nodo ‘new’ al principio de la lista ‘lst’.


**ft_lstsize**: Devuelve el último nodo de la lista.


**ft_lstlast**: Cuenta el número de nodos de una lista.


**ft_lstadd_back**: Añade el nodo ‘new’ al final de la lista ‘lst’.


**ft_lstdelone**: Recibe como parámetro un nodo ‘lst’ y libera la memoria del contenido utilizando la función ‘del’ dada como parámetro. También libera el nodo en sí mismo, pero no libera el siguiente nodo.


**ft_lstclear**: Elimina y libera el nodo ‘lst’ dado y todos los consecutivos del mismo, utilizando la función ‘del’ y free(3). Al final, el puntero a la lista debe ser NULL.


**ft_lstiter**: Itera la lista ‘lst’ y aplica la función ‘f’ en el contenido de cada nodo.


**ft_lstmap**: Itera la lista ‘lst’ y aplica la función ‘f’ al contenido de cada nodo. Crea una lista resultante

de aplicar sucesivamente la función ‘f’ a cada nodo. La función ‘del’ se utiliza para eliminar el contenido de un nodo si es necesario. 

---

# Instrucciones

### Clonar el repositorio

Para empezar set tendra que ejecutar el siguiente comando en la ruta en la que se desee guardar el proyecto:

>git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-0c4dc4d4-dcc4-401b-894a-95063471c79d-7378088-khurtado libft

Una vez clonado el repositorio, podemos empezar a usar el Makefile.

### Compilación
El proyecto incluye un **Makefile** con las reglas estándar. Para compilar la librería, ejecuta en la terminal:

```bash
make        # Compila toda la libreria.
```

Esto generará un archivo llamado `libft.a`, que es la librería estática lista para ser utilizada.

### Uso en tu propio proyecto
Para utilizar esta librería en tus futuros proyectos de C, incluye el encabezado en tu código y enlaza la librería al compilar:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o mi_programa
```

> cc	Invoca al compilador de C (usualmente GCC o Clang).

> main.c	El archivo de código fuente que quieres compilar.

> -L.	"Le dice al compilador que busque librerías en el directorio actual (.). Sin esto, solo buscaría en las carpetas del sistema (como /usr/lib)."

> -lft	Indica que debe incluir (enlazar) la librería llamada libft.a.

> -o mi_programa	"Define el nombre del archivo de salida."

---

# Recursos

### Documentación y Referencias
* **Manuales de C (man)**: La principal fuente de información para recrear la Parte 1 (`man strlen`, `man memcpy`, etc.).
* **Documentación de GNU C Library**: Referencia detallada sobre el comportamiento de las funciones estándar.
* **Tutoriales sobre punteros y memoria**: Artículos de sitios como *GeeksforGeeks* o *StackOverflow* para entender el comportamiento de `memmove` vs `memcpy`.
* **Online GBD**: Página de compilación de códido c en línea.
* **Compañeros de Urduliz**: Para dudas específicas y resolución de errores de compilación en numerosos ejercicios.

### Uso de IA
En este proyecto, se ha utilizado Inteligencia Artificial de la siguiente manera:
* **Documentación**: Apoyo en la redacción y formato de este archivo `README.md`.
* *Nota: No se ha utilizado IA para la escritura directa del código fuente, asegurando así el aprendizaje de la lógica fundamental de C.*
