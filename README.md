*Este proyecto ha sido creado como parte del currículo de 42 por khurtado, omarquez.*

# PUSH_SWAP
## DESCRIPCIÓN:
**push_swap** es un proyecto algorítmico cuyo objetivo es ordenar una lista de números enteros utilizando dos pilas (`stack a` y `stack b`) y un conjunto restringido de operaciones. La meta es encontrar la solución con el menor número de movimientos posible.
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

### USO DE LA IA:

- La he usado para entender cual seria la manera mas util de crear nuestras estructuras y elegir que propiedades nos serian mas utiles.

## FUNCIONAMIENTO DE LOS ALGORITMOS:
