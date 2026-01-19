/*
**Puntos clave que aprendiste hoy:**

1. **Orden de condiciones**: FizzBuzz debe ir ANTES que Fizz/Buzz porque es más específico (15, 30, 45... cumplen ambas condiciones)
2. **Optimización de primos**: Solo checas hasta √n porque los divisores vienen en pares
3. **Incremento eficiente**: `i += 2` para saltar pares en el loop de primos
4. **Headers modernos**: `<cmath>` en vez de `<math.h>`

**Output esperado (primeros números):**
*/


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
    int limite = sqrt(n);
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        // TODO: Implementar la lógica
        // OJO: ¿Qué condición debe ir PRIMERO, FizzBuzz o Fizz?
        
        if (i %3 == 0 && i %5 == 0) { // condición FizzBuzz
            cout << "FizzBuzz" << endl;
        } 
        else if (i %3 == 0) { // condición Fizz
            cout << "Fizz" << endl;
        }
        
        else if (i %5 == 0) { // condición Buzz
            cout << "Buzz" << endl;
        } 
        else if (esPrimo(i)) { // condición Primo
            cout << "Primo" << endl;
        } 
        else {
            cout << i << endl; // ningún caso anterior se cumplió
        }
    }
    return 0;
}