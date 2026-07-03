*Este proyecto ha sido creado como parte del currículo de 42 por khurtado, omarquez.*

# PUSH_SWAP
## DESCRIPCIÓN:
**push_swap** es un proyecto algorítmico cuyo objetivo es ordenar una lista de números enteros utilizando dos pilas (`stack a` y `stack b`) y un conjunto restringido de operaciones. La meta es encontrar la solución con el menor número de movimientos posible.
##### Dislaimer!! el siguiente gráfico fue ideado antes de realizar el programa comple, para ayudarnos a entender mejor qué teníamos que realizar en cada paso, el flujo final del programa ha cambiado ligeramente.
![alt text](push_swap.webp)
#### Criterio de desorden
Índice de desorden bajo: Si desorden < 0,2, el método elegido debe ejecutarse
en O(n).
Índice de desorden medio: Si 0,2 ≤ desorden < 0,5, el método elegido debe
ejecutarse en O(n√n).
Índice de desorden alto: Si desorden ≥ 0,5, el método elegido debe ejecutarse
en O(n log n).

## FUNCIONAMIENTO DE LOS ALGORITMOS:

### Algoritmo Simple: Adaptacion de Selection Sort.

Este algoritmo recibe por parametro el **```stack_a```** desordenado.

Se crea dentro de este un **```stack_b```** vacio para poder hacer los movimientos para ordenarlo.

Se define una variable contador llamada **```min```**, para comparar con el **```norm_index```** de cada elemento del **```stack_a```**.

Entoces mientras existan elementos en el **```stack_a```** recorremos comparando:
Si el **```norm_index```** del elemento actual coincide con el contador **```min```**, se realiza la operacion **```pb```** pusheando ese elemento al **```stack_b```** ya que seria el elemento menor del **```stack_a```** y se incrementa el contador para buscar el siguiente.

Y si no coincide, verificamos con la funcion **```ft_find_node```** la mitad siguiente del **```stack_a```** para verificar si encontramos el **```norm_index```** adecuado para realizar la operacion **```pb```**. Si se encuentra se realiza la operacion **```ra```** subiendo todos los elementos del **```stack_a```** una posicion hasta llegar al **```norm_index```** adecuado.

Y si no se encuentra el **```norm_index```** adecuado en la mitad, eso significa que esta en la mitad previa por lo que se realiza la operacion **```rra```**  bajando todos los elementos del stack_a una posicion hasta llegar al **```norm_index```** adecuado.

Cuando el **```stack_a```** se queda sin elementos eso quiere decir que los elementos estan en el orden inverso en el **```stack_b```** por lo que recorremos el **```stack_b```** hasta que este se quede sin elementos realizando la operacion **```pa```** dando como resultado el **```stack_a```** ordenado.

---
### Algoritmo Medio: Basado en chunks (de √n).
Este algoritmo recibe por parametro el stack_a desordenado.

Se crea dentro de este un stack_b vacio para poder hacer los movimientos para ordenarlo.

Se calcula la raíz cuadrada del número mediante el tamaño del stack A.
Mientras el stack A contenga algún elemento, se van pasando los chunks(que van definidos por un rango igual al √n y el index de la lista). A la hora de pasar los números a B, si el número es más grande que la mitad del chunk, se hace un rotate también para que de esta forma todas las mitades mayores de cada chunk queden posicionadas en la parte inferior del stack B.

Cuando B contiene ya todos los elementos, se procede a extraer el número con el índice mayor del stack B y se hace push hacia el stack A (PB).
De esta forma, al tener todos los números mayores próximos unos a otros, realiza una cantidad de pasos menor que el algoritmo simple.

---
### Algoritmo Complejo: Adaptacion de Radix Sort LSB.
Este algoritmo recibe por parametro el **```stack_a```** desordenado.

Se crea dentro de este un **```stack_b```** vacio para poder hacer los movimientos para ordenarlo.

Se define una variable limite llamada **```max_bits```**, para tener un limite de bits sobre el que iterar, asi como 2 contadores llamados **```counter1```** que nos servira para recorrer todo el **```stack_a```** en un bucle exterior y **```counter2```** que nos servira para recorrer en el bucle anidado asignandose como el tamaño del **```stack_a```**.

A la variable **```max_bits```** se le asigna el valor de retorno de la funcion **```ft_max_bits(stack_a->size - 1)```** enviandole por parametro  **```stack_a->size  - 1```** para poder obtener el ultimo elemento. Obteniendo el valor de cuantas veces ese ultimo elemento se puede dividir sobre si mismo.

Entoces recorremos mientras que **```counter1```** no haya llegado al valor de **```max_bits```**:
Se reasigna el valor de **```counter2```** con el tamaño del ```stack_a``` para poder iterar en un bucle anidado.
- Entonces mientras que el valor de **```counter2-- > 0```**
- Verificamos el valor binario del bit actual **```(counter1)```** con el valor binario del **```norm_index```** actual para saber que operacion vamos a hacer.
- Si el bit coincide con 1 se realiza la operacion **```ra```** subiendo todos los elementos del stack_a una posicion hasta llegar al **```norm_index```** adecuado.
- Y si no coincide con 1 se realiza la operacion **```pb```** hasta que **```counter2 == 0```**.
Cuando el **```counter2 == 0```** recorremos el **```stack_b```** hasta que este se quede sin elementos realizando la operacion **```pa```**, incrementamos el contador **```counter1```** para aumentar el bit ordenando cada paso hasta que **```counter1 == max_bits```** dando como resultado el stack_a ordenado.

---

### APORTACIONES DE CADA INTEGRANTE:

### omarquez:
---
- **ft_concat_params**: Funcion para tomar todos los argumentos y concatenarlos en un string separados por espacios en blanco.
- **ft_is_valid_input**: Funcion que analisa la cadena de texto resultado de la concatenacion de los argumentos, para verificar si estos son digitos antes de transformarlos a long.
- **ft_atol**: Implementacion propia de ASCII to LONG, para poder validar que los numeros realmente esten en el rango de los enteros.
- **ft_arr_to_lst**: Funcion que crea el stack_a a partir de un array de longs despues de validarlo.
- **ft_newstack**: Funcion que inicializa el stack alojandole espacio en memoria.
- **ft_is_overflow**: Funcion que recorre el array de longs verificando que cada elemento este dentro del rango de los numeros enteros.
- **ft_is_duplicate**: Funcion que recorre el array de longs verificando que no existan duplicados dentro del array.
- **ft_sort_array**: Funcion que crea un array de longs a partir del array original pero ordenado para poder conocer el indice de normalizacion de cada elemento.
- **ft_find_norm_index**: Funcion que busca el indice de normalizacion de el elemento recibido por parametro.
- **ft_dlstnew**: Reimplementacion de lstnew, para poder crear nodos de acuerdo con la nueva Struct t_d_lst.
- **ft_dlstadd_back**: Reimplementacion de lstadd_back, para poder trabajar sobre la nueva Struct t_stack.
- **ft_dlstclear**: Reimplementacion de lstclear, para poder trabajar sobre la nueva Struct t_stack.
- **ft_simple_sort**: Adaptacion de Selection Sort para trabajar de acuerdo a las operaciones permitidas.
- **ft_find_node**: Funcion para poder verificar que para que lado de la lista es mas optimo hacer rotaciones.
- **ft_rotate_dlst**: Desplaza hacia arriba todos los elementos del stack seleccionado por parametro una posición, convirtiendo el primer elemento en el último.
- **ft_rotate_both**: Desplaza hacia arriba todos los elementos de los 2 stacks una posición, convirtiendo el primer elemento en el último.
- **ft_swap_dlst**: Intercambia los dos primeros elementos del stack seleccionado por parametro. No hace nada si hay solo uno o ningún elemento.
- **ft_swap_both**: Intercambia los dos primeros elementos de los 2 stacks. No hace nada si hay solo uno o ningún elemento.
- **ft_complex_sort**: Adaptacion de Radix Sort LSB para trabajar de acuerdo a las operaciones permitidas.
- **ft_max_bits**: Funcion auxiliar para conseguir la maxima cantidad de bits por la que debe recorrer el complex sort.
- **ft_ftoa**: Implementacion propia de la funcion ftoa Float to ASCII.
- **ft_power**: Implementacion propia de la funcion pow.
### khurtado:
---
- **ft_establish_flags**: Funcion que analiza los argumentos recibidos y extrae si se encuentra las flags predefinidas o el modo opcional --bench.
- **ft_bench_detector**: Funcion auxiliar para detectar si esta presente la flag del modo opcional bench.
- **ft_flag_detector**: Funcion auxiliar para detectar si esta presente alguna flag de las opciones predefinidas para elegir el algoritmo.
- **ft_to_array**: Funcion que transforma la cadena de texto validada a un array de longs.
- **ft_calculate_disorder**: Implementacion de la funcion de compute_disorder incluida en el subject.
- **ft_strategy_setter**: Funcion que busca en base a la flag seleccionada para poder rellenar la cadena de texto de la Struct t_bench.
- **ft_algorithm**: Funcion auxiliar de ft_strategy_setter que analiza en base a la flag seleccionada para poder rellenar la cadena de texto de la Struct t_bench.
- **ft_find_str**: Reimplementacion de ft_strnstr para poder encontrar una cadena de texto pequeña dentro de una grande pero sin devolver la direccion sino que devuelve un entero simulando un booleano.
- **ft_push_dlst**: Funcion que mueve de un stack a otro realizando las conexiones correspondientes con cada stack.
- **ft_dlstadd_front**: Reimplementacion de lstadd_front, para poder trabajar sobre la nueva Struct t_stack.
- **ft_rrotate_dlst**: Desplaza hacia abajo todos los elementos del stack seleccionado por parametro una posición, convirtiendo el último elemento en el primero.
- **ft_rrotate_both**: Desplaza hacia abajo todos los elementos de los 2 stacks una posición, convirtiendo el último elemento en el primero.
- **ft_medium_sort**: Adaptacion de Chunk Based Sort para trabajar de acuerdo a las operaciones permitidas.
- **ft_fill_b**: Funcion auxiliar para rellenar el stack b.
- **ft_fill_a**: Funcion auxiliar para rellenar el stack a, a partir del orden del b para obtener el stack a ordenado.
- **ft_sqrt**: Funcion que calcula la raiz cuadrada de un numero.
### omarquez y khurtado:
---
- **ft_init_bench**: Funcion para inicializar los datos de nuestro Struct t_bench.
- **ft_clean_bench**: Funcion para limpiar el contenido de nuestro Struct t_bench.
- **ft_selector**: Funcion que selecciona el algoritmo a utilizar en base a las flags recibidas.
- **ft_handle_disorder**: Funcion que analiza las flags y el indice de desorden para elegir el flujo del programa.
- **ft_find_node_in_range**: Funcion para poder verificar que para que lado de la lista es mas optimo hacer rotaciones en base a un rango de numeros.
- **ft_print_bench**: Funcion para poder imprimir la informacion adecuada cuando se llama al modo opcional bench.
- **Makefile**: Archivo makefile incorporando la libft y ft_printf.
- **push_swap.h**: Archivo header, incluyendo las nuevas Structs t_bench, t_stack, t_d_lst.

### Operaciones Disponibles
Las instrucciones permitidas para manipular las pilas son:

* `sa`, `sb`, `ss`: Intercambia los dos primeros elementos de la pila A, B o ambas.
* `pa`, `pb`: Mueve el elemento superior de una pila a la otra.
* `ra`, `rb`, `rr`: Desplaza todos los elementos hacia arriba (el primero pasa al final).
* `rra`, `rrb`, `rrr`: Desplaza todos los elementos hacia abajo (el último pasa al inicio).
## INSTRUCCIONES:
Primero debes clonar el repositorio del proyecto con el comando:
```bash
git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-c05127dd-b1d6-47e3-af36-1b0f1de8e9c3-7451687-omarquez push_swap
cd push_swap
```
### Compilación
Una vez clonado y estando dentro del directorio 'push_swap' debes compilar el proyecto, utiliza el `Makefile`:

```bash
make
```
### Uso:
Despues de haber compilado el programa, ya podras probarlo con la cantidad de numeros que desees de esta manera:
```bash
./push_swap 1 2 3 5 4
```
Y el programa te devolvera las operaciones necesarias para poder ordenar esos numeros, siempre y cuando hayan mas de 2 numeros y que estos esten desordenados.

Tambien el programa dispone de 3 algoritmos de ordenacion en base a que tan desordenados se encuentran los numeros introducidos.

El programa es capaz de recibir "flags" para controlar el algoritmo que se va a utilizar con respecto a los numeros introducidos, las flags disponibles son:
| Flag | Descripción |
| :---- | :--- |
| **`--bench`** | El modo bench es opcional, enviara a la salida de errores 'stderr' informacion sobre la cantidad de operaciones realizadas, que tipo de operaciones, indice de desorden, etc. |
| **`--adaptative`** | Si no introduce una flag se elige por defecto, utiliza la funcion de calculate disorder para saber que algoritmo utilizar de acuerdo a su complejidad. |
| **`--simple`** | Utiliza una implementacion de **Selection Sort**. |
| **`--medium`** | Utiliza una implementacion de **Bucket Sort**. |
| **`--complex`** | Utiliza una implementacion de **Radix Sort en formato LSD**. |

### Benchmark:

El modo benchmark (--bench) es opcional, y mostrará a 'stderr' tras la ordenación la siguiente informacion en este formato:
```bash
[bench] disorder: 48.49%
[bench] strategy: Adaptative / O(n√n)
[bench] total_ops: 2582
[bench] sa: 0 sb: 0 ss: 0 pa: 100 pb: 100
[bench] ra: 2378 rb: 0 rr: 0 rra: 4 rrb: 0 rrr: 0
```

## RECURSOS:
- [caiorss]https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html // Nos ayudo a entender una modificacion que teniamos que hacer en el makefile.
- [geeksforgeeks]https://www.geeksforgeeks.org/dsa/check-if-the-given-input-contains-duplicates/ //Ejemplo de apoyo para crear la funcion de verificacion de duplicados.
- [geeksforgeeks]https://www.geeksforgeeks.org/dsa/doubly-linked-list/ // Explicacion sobre las listas doblemente enlazadas
- [tutorialspoint]https://www.tutorialspoint.com/article/write-you-own-power-without-using-multiplication-and-division-operators-in-c-program // Ejemplo de apoyo para hacer nuestra propia funcion pow.
- [geeksforgeeks]https://www.geeksforgeeks.org/cpp/convert-floating-point-number-string/ // Ejemplo de apoyo para hacer nuestra propia funcion ftoa.
- [github.io]https://nmannage.github.io/showcase/push_swap_visualizer/ // Ejemplo visual de los movimientos realizados para entender si nuestro algoritmo hace los movimientos necesarios.
- [geeksforgeeks]https://www.geeksforgeeks.org/dsa/selection-sort-algorithm-2/ //Explicacion del algoritmo de seleccion.
- [deepwiki]https://deepwiki.com/nach131/push_swap/4.3-chunk-based-sorting //Explicacion del algoritmo de ordenamiento en base a chunks.
- [devnyxie]https://www.devnyxie.com/blog/push_swap#step-4-sorting-by-msb //Guia para el entendimiento del uso de Radix Sort LSB para aplicarlo en nuestra implementacion del algoritmo complejo. 

### USO DE LA IA:

- La hemos usado para entender cual seria la manera mas util de crear nuestras estructuras y elegir que propiedades nos serian mas utiles.
- Le hemos preguntado si habia algunos fallos de logica en algunas funciones pero no ha sido tan util en ese aspecto.
