#include <iostream>

int main() {
    int n;

    // Solicitar al usuario un número entero
    std::cout << "Ingrese un numero entero: ";
    std::cin >> n;

    // Imprimir los valores pares menores que n
    std::cout << "Valores pares menores que " << n << ":\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
