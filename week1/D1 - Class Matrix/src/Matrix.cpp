#include <iostream>
#include "../include/Matrix.h"  
#include <stdexcept>

//Implementar el Constructor (Reservar memoria)


// Reservamos memoria para la matriz (inicializada con ceros)
Matrix::Matrix(int rows, int cols) : rows_(rows), cols_(cols) {

    if(rows <= 0 || cols <= 0) {
        throw std::invalid_argument("Rows and columns must be positive integers.");
    }
    
//Redimensionar el vector data_ 
    // El método .resize() de std::vector hace dos cosas:
    // 1. Reserva el espacio exacto en la memoria RAM.
    // 2. Rellena cada posición con un valor (en este caso 0.0).
    data_.resize(rows_*cols_, 0.0);
}
// Implementar el operator() (Fórmula del índice: i * cols + j)

// Esta versión es para leer y ESCRIBIR (retorna referencia &)
double& Matrix::operator()(int row, int col) {
    // 1. Paso de seguridad: ¿Qué pasa si el usuario pide la fila 10 en una matriz de 3x3?
    // Implementa un 'if' que lance una excepción si 'row' o 'col' están fuera de los límites.

    if (row < 0|| row >= rows_ || col < 0 || col>= cols_){
        throw std::out_of_range("Row or column index out of range.");
    }
    return data_[row * cols_ + col];
}

Matrix Matrix::multiply(const Matrix& other) const {
    // 1. Validar dimensiones: (M x N) * (N x P)
    if (this->cols_ != other.rows_) {
        throw std::invalid_argument("Incompatible dimensions for multiplication.");
    }

    // 2. Crear la matriz resultado: tendrá filas de A y columnas de B
    Matrix result(this->rows_, other.cols_);

    // 3. Triple bucle for
    for (int i = 0; i < this->rows_; i++) {
        for (int j = 0; j < other.cols_; j++) {
            double sum = 0.0;
            for (int k = 0; k < this->cols_; k++) {
                // Multiplicamos fila de A por columna de B
                sum += (*this)(i, k) * other(k, j);
            }
            // Guardamos el resultado en la posición (i, j)
            result(i, j) = sum;
        }
    }
    
    return result; // Se devuelve al final de los bucles
}

// Versión CONST (Solo lectura) - Indispensable para que 'multiply' funcione
double Matrix::operator()(int row, int col) const {
    if (row < 0 || row >= rows_ || col < 0 || col >= cols_) {
        throw std::out_of_range("Row or column index out of range.");
    }
    // Misma fórmula de traducción 2D -> 1D
    return data_[row * cols_ + col];
}
    
int Matrix::rows() const{return rows_;}
int Matrix::cols() const{return cols_;}
    
    // 2. La Traducción:
    // Tienes el ancho de la matriz guardado en 'cols_'.
    // Si cada fila tiene 'cols_' elementos, para llegar a la fila 'row', 
    // ¿cuántos elementos te has saltado?










// TODO: Implementar multiply (Triple bucle for)