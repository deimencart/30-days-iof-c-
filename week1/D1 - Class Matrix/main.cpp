#include <iostream>
#include "../include/Matrix.h" // El compilador lo buscará en /include gracias al flag -I

int main() {
    try {
        // Creamos una matriz A de 2x2
        Matrix A(2, 2);
        A(0, 0) = 1.0; A(0, 1) = 2.0;
        A(1, 0) = 3.0; A(1, 1) = 4.0;

        // Creamos una matriz B de 2x2
        Matrix B(2, 2);
        B(0, 0) = 5.0; B(0, 1) = 6.0;
        B(1, 0) = 7.0; B(1, 1) = 8.0;

        // Multiplicamos C = A * B
        // El resultado esperado para C(0,0) es (1*5 + 2*7) = 19
        Matrix C = A.multiply(B);

        std::cout << "--- Prueba de Matrix ---" << std::endl;
        std::cout << "C(0,0) esperado: 19 | Resultado: " << C(0, 0) << std::endl;
        std::cout << "C(1,1) esperado: 50 | Resultado: " << C(1, 1) << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }

    return 0;
}