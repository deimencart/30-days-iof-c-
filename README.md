# 🚀 C++ 30 Days Challenge

**Objetivo:** Dominar C++ en 30 días para preparar el examen de PACS y desarrollar habilidades de programación para la maestría en Robótica, Gráficos y Visión por Computadora.

**Basado en:** [Fundamentals on Computing](https://adolfomunoz.github.io/FoC/) - UNIZAR

---

## 📋 Estructura del Repositorio

```
cpp-30-days-challenge/
├── README.md
├── week1/          # Fundamentos
│   ├── day01/
│   ├── day02/
│   └── ...
├── week2/          # Memoria y Punteros
├── week3/          # OOP y Polimorfismo
└── week4/          # STL, Templates, Proyecto Final
```

---

## 🗓️ Schedule

### Semana 1: Fundamentos Sólidos
*Temas FoC: Imperative programming, Subprograms*

| Día | Mañana (20-30 min) | Noche (30-45 min) | Conceptos |
|-----|-------------------|-------------------|-----------|
| 1 | FizzBuzz Extendido | Simulador de Sensor | if/else, loops, funciones |
| 2 | Swap Three Ways | Calculadora Matrices 3x3 | Paso por valor/puntero/ref |
| 3 | Torres de Hanoi | Flood Fill Algorithm | Recursión |
| 4 | Detector Palíndromos | Parser Comandos Robot | Arrays, C-strings |
| 5 | Visualizador Memoria | Array Dinámico Manual | Intro punteros, new/delete |
| 6 | Iteración con Punteros | Procesador Imagen ASCII | Aritmética de punteros |
| 7 | Quiz Autoevaluación | **Game of Life** 🏆 | Proyecto integrador |

### Semana 2: Memoria y Punteros
*Temas FoC: Memory Management, Compilation*

| Día | Mañana (20-30 min) | Noche (30-45 min) | Conceptos |
|-----|-------------------|-------------------|-----------|
| 8 | Memory Tracker | Clase Matrix Dinámica | new/delete[], copy constructor |
| 9 | Sistema de Callbacks | Quicksort con Comparador | Punteros a funciones |
| 10 | Experimento Stack Overflow | Memory Pool Allocator | Stack vs Heap |
| 11 | Linked List | Binary Search Tree | Estructuras con punteros |
| 12 | Const Correctness | Smart Buffer Class | const con punteros |
| 13 | Bugs para GDB | Memory Debugger Propio | Debugging básico |
| 14 | Quiz Semana 2 | **Image Buffer Library** 🏆 | Proyecto integrador |

### Semana 3: OOP y Polimorfismo
*Temas FoC: Classes, Polymorphism*

| Día | Mañana (20-30 min) | Noche (30-45 min) | Conceptos |
|-----|-------------------|-------------------|-----------|
| 15 | Clase Vector3D | Transform/Matrix4x4 | Clases, constructores |
| 16 | Jerarquía de Shapes | Sistema de Sensores | Herencia básica |
| 17 | Virtual vs Non-Virtual | Sistema de Plugins | Funciones virtuales |
| 18 | Interfaz de Nodo | Componentes Ray Tracer | Clases abstractas |
| 19 | Diamond Problem | Component System | Herencia múltiple |
| 20 | Clase Fraction | Smart Matrix Operators | Sobrecarga operadores |
| 21 | Quiz OOP | **Mini Scene Graph** 🏆 | Proyecto integrador |

### Semana 4: STL, Templates y Proyecto Final
*Temas FoC: Smart Pointers, Good Practices, Debugging*

| Día | Mañana (20-30 min) | Noche (30-45 min) | Conceptos |
|-----|-------------------|-------------------|-----------|
| 22 | vector e iteradores | Tu propio Vector\<T\> | STL containers |
| 23 | map y unordered_map | Cache LRU | Containers asociativos |
| 24 | sort, find, transform | Procesamiento con STL | Algoritmos STL |
| 25 | Funciones Template | Stack\<T\> y Queue\<T\> | Templates básicos |
| 26 | unique_ptr | shared_ptr y weak_ptr | Smart pointers |
| 27 | Valgrind Básico | Debugging Memory Leaks | Leak detection |
| 28 | Profiling con gprof | Optimización de Código | Performance |
| 29 | Diseño Ray Tracer | **Mini Ray Tracer Pt.1** 🏆 | Proyecto final |
| 30 | Testing y Debugging | **Mini Ray Tracer Pt.2** 🏆 | Proyecto final |

---

## 🛠️ Setup

### Compilación
```bash
# Con warnings y debug info
g++ -Wall -Wextra -g programa.cpp -o programa

# Con sanitizers (detecta errores de memoria)
g++ -Wall -Wextra -g -fsanitize=address programa.cpp -o programa
```

### Debugging con GDB
```bash
gdb ./programa
(gdb) break main
(gdb) run
(gdb) next          # siguiente línea
(gdb) print var     # ver variable
(gdb) bt            # backtrace
```

### Memory Leaks con Valgrind
```bash
valgrind --leak-check=full ./programa
```

---

## ✅ Checklist Diario

### Antes de empezar:
- [ ] Crear carpeta `dayXX/`
- [ ] Leer el objetivo del ejercicio

### Ejercicio mañana:
- [ ] Escribir código
- [ ] Compilar con `-Wall -Wextra`
- [ ] Probar casos básicos
- [ ] `git commit -m "Day XX morning: [nombre]"`

### Ejercicio noche:
- [ ] Escribir código
- [ ] Compilar y probar
- [ ] Si hay bugs, usar GDB
- [ ] `git commit -m "Day XX night: [nombre]"`

---

## 📊 Progreso

- [ ] Semana 1: Fundamentos
- [ ] Semana 2: Memoria y Punteros  
- [ ] Semana 3: OOP y Polimorfismo
- [ ] Semana 4: STL y Proyecto Final

---

## 🔗 Recursos

- [Curso FoC - UNIZAR](https://adolfomunoz.github.io/FoC/)
- [C++ Reference](https://en.cppreference.com/)
- [Compiler Explorer](https://godbolt.org/)

---

## 📝 Notas

Espacio para notas personales, dudas, y cosas aprendidas durante el challenge.

### Día 1
- ...

### Día 2
- ...