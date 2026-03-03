/*
Crea el archivo include/Matrix.h.
 
Necesito que definas la clase.
Debe tener:Miembros de datos: Para almacenar filas, columnas y el vector de datos.


Constructor: Que reciba rows y cols e inicialice el vector con ceros.

Acceso: Un método para obtener/modificar el valor en (row, col).

Aquí está el truco matemático: ¿Cuál es la fórmula para transformar coordenadas 2D $(i, j)$ a un índice 1D $idx$?

Método de multiplicación: Matrix multiply(const Matrix& other) const;


❓ Preguntas Socráticas (Responde con tu código)
Si tu matriz tiene width (columnas) y height (filas), y quieres acceder a la fila y columna x: ¿Cuántos elementos completos de "ancho" tienes que saltar para llegar a la fila y? 
Escribe la fórmula del índice: index = ...En la multiplicación $A \times B$, si $A$ es $M \times N$ y $B$ es $N \times P$, ¿cuál es el tamaño de la matriz resultante?

¿Qué keyword de C++ debes poner al final de la función multiply para asegurar que esa función NO modifica la matriz original ($A$)?


👉 TAREA: Escribe y pega aquí tu archivo include/Matrix.h (y si te animas, el constructor en src/Matrix.cpp). 
¡No implementes la multiplicación todavía, primero definamos la estructura y el acceso a memoria!

*/


#ifndef MATRIX_H
#define MATRIX_H
#include <iostream> 
#include <vector>
#include <stdexcept>


class Matrix {

    private: 
    int rows_; 
    int cols_; 
    std::vector<double> data_;

    public:
    // constructor de la clase
    Matrix(int rows, int cols);

    //Metodo para acceder a los elementos de la 
    //OPERADOR DE ACCESO (Lectura/Escritura)
    // Uso: mat(1, 2) = 5.0;
    double& operator()(int row, int col);
    //OPERADOR DE ACCESO (Solo lectura)
    double operator()(int row, int col) const; 

    //metodo para obtemer dimensiones 
    int rows() const ; 
    int cols()const ; 

    Matrix multiply(const Matrix& other) const;





}; 

#endif  // MATRIX_H