#ifndef MATRIX_H
#define MATRIX_H


/*
    * Matrix.h
    *
    * Created on: 2026-03-04
    * Last update on: 2026-03-04
    * Author: [Diego Méndez]
    * Day 2 - Implementing Tranpose of a Matrix in C++
    * 
    * 
    * Añadiendo operador de asignación para evitar problemas de gestión de memoria al copiar objetos Matrix.
    * Añadiendo métodos para obtener la transpuesta de una matriz. 

*/

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


    //Sobrescritura del operador de asignación
    /*
    Si no se define, implica que estas haciendo una copia superficial 
    tendrias dos objectos apuntado a la misma memoria, lo que puede causar problemas de gestión de memoria (double free, memory leaks, etc.)
    */
    Matrix& operator=(const Matrix& other);

    //metodo para obtemer dimensiones 
    int rows() const ; 
    int cols() const ; 

    Matrix multiply(const Matrix& other) const;

    //No se pasa nada en el argumento porque se va a operar sobre la propia matriz
    Matrix transpose() const;





}; 

#endif  // MATRIX_H