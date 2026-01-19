#include <iostream>
#include <cmath>      // En C++ moderno se usa <cmath> en vez de <math.h>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;    // 1 y negativos no son primos
    if (n == 2) return true;     // 2 es primo
    if (n % 2 == 0) return false; // Pares no son primos
    
    // TODO: Checar divisores impares desde 3 hasta sqrt(n)
    // Si encuentras algún divisor, return false
    // Si no encuentras ninguno, return true
    
}

int main() {
    for (int i = 1; i <= 100; i++) {
        // TODO: Implementar la lógica
        // OJO: ¿Qué condición debe ir PRIMERO, FizzBuzz o Fizz?
        
        if (/* condición FizzBuzz */) {
            cout << "FizzBuzz" << endl;
        } 
        else if (/* condición Fizz */) {
            cout << "Fizz" << endl;
        }
        // ... continúa
    }
    return 0;
}