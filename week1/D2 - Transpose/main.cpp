#include <iostream>
#include "include/Matrix.h" // El compilador lo buscará en /include gracias al flag -I

int main() {
    try {
        // Creamos una matriz A de 2x2
        Matrix A(2, 3);
        A(0, 0) = 1.0; A(0, 1) = 2.0;
        A(1, 0) = 3.0; A(1, 1) = 4.0;
        A(0, 2) = 5.0; A(1, 2) = 6.0;

        // Obtenemos la transpuesta de A
        Matrix aT = A.transpose();
        std::cout << "original A (2x3), Transpuesta es : (" << aT.rows() << "x" << aT.cols() << ")" << std::endl;
        std::cout << "aT(2, 1) [debe ser 6.0]: " << aT(2, 1) << std::endl; // Debería imprimir 6.0

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}