# 🚀 C++ 30 Days Challenge: From Zero to Robotics & Vision

**Objetivo:** Dominar C++ moderno en 30 días para preparar el examen de **PACS** y fortalecer las bases de programación para el **Máster en Robótica, Gráficos y Visión por Computadora (UNIZAR)**.

Este repositorio es un entrenamiento intensivo de traducción de modelos matemáticos a código eficiente, siguiendo el programa de [Fundamentals on Computing (FoC)](https://adolfomunoz.github.io/FoC/).

---

## 📋 Estructura del Repositorio

```text
cpp-30-days-challenge/
├── README.md
├── week1/           # Fundamentos & Imperativa (Subprograms)
│   ├── day01/       # FizzBuzz / Simulador de Sensor (Histéresis)
│   ├── day02/       # Swap / Calculadora Matrices 3x3
│   └── ...
├── week2/           # Gestión de Memoria y Punteros
├── week3/           # OOP y Polimorfismo
└── week4/           # STL, Templates y Proyecto Final (RayTracer)
```
## 📅 PROGRESIÓN: mini-linalg (30 Días)

| Semana | Día | Tema / Ejercicio | Conceptos Clave & Matemáticas |
| :---: | :---: | :--- | :--- |
| **1** | | **ALGEBRA LINEAL BÁSICA** | *Objetivo: Estructuras sin fugas de memoria* |
| | 01 | Clase Matrix y Multiplicación | $C_{ij} = \sum_{k} A_{ik} B_{kj}$ |
| | 02 | Transpuesta y Memoria Caché | $A^T$, Row-major vs Col-major |
| | 03 | Determinante | Expansión de cofactores / Descomposición |
| | 04 | Matriz Inversa | Método de la Adjunta o Gauss-Jordan |
| | 05 | Eliminación Gaussiana | Resolver sistemas $Ax = b$ |
| | 06 | Descomposición LU o Cholesky | Factorización (Base para Kalman) |
| | 07 | **Review & Refactor** | Move semantics, Smart Pointers, Tests |
| **2** | | **GEOMETRÍA COMPUTACIONAL** | *Objetivo: Mover puntos en el espacio 3D* |
| | 08 | Clase Vector3D | Producto Cruz ($\times$) y Punto ($\cdot$) |
| | 09 | Rotaciones 2D y 3D | Matrices de Rotación, Rodrigues' Formula |
| | 10 | Transformaciones Homogéneas | Matrices $4\times4$ (SE3), Cambios de base |
| | 11 | Quaterniones I | Definición $q = w + xi + yj + zk$ |
| | 12 | Quaterniones II | Rotación de vectores $v' = q v q^*$ |
| | 13 | Modelo de Cámara Pinhole | Proyección perspectiva 3D $\to$ 2D |
| | 14 | **Mini-Proyecto: Wireframe** | Proyectar un cubo 3D a pantalla |
| **3** | | **OPTIMIZACIÓN Y ESTIMACIÓN** | *Objetivo: Minimizar el error (Cerebro del SLAM)* |
| | 15 | Derivadas Numéricas | Diferencias Finitas (Central, Forward) |
| | 16 | Descenso de Gradiente (1D) | $x_{new} = x_{old} - \alpha \nabla f(x)$ |
| | 17 | Gradiente Multivariable | Jacobianos ($J$) y Hessianos ($H$) |
| | 18 | Mínimos Cuadrados Lineales | Normal Equation: $(A^TA)^{-1}A^Tb$ |
| | 19 | Gauss-Newton | Optimización No Lineal Iterativa |
| | 20 | Filtro de Kalman (1D) | Predicción y Corrección escalar |
| | 21 | Filtro de Kalman Multivariable | Matrices de Covarianza $P$ y Ganancia $K$ |
| **4** | | **PROYECTO INTEGRADOR** | *Objetivo: Aplicación en Visión y Robótica* |
| | 22-24 | **ICP Básico** | Iterative Closest Point (SVD) |
| | 25-27 | **EKF-SLAM Simplificado** | Robot móvil + Landmarks en mapa |
| | 28-29 | **Bundle Adjustment Mini** | Refinamiento de Grafo (Graph SLAM) |
| | 30 | **Demo Final & Docs** | Visualización de resultados y README |
