#include <iostream>

// Función que convierte una cantidad de dólares a pesos
int ConvertirPesos(int cantidad) {
    const float FACTOR_CONVERSION = 420.00; // Factor de conversión de dólares a pesos
    int resultado = cantidad * FACTOR_CONVERSION; // Multiplicar la cantidad por el factor de conversión
    return resultado; // Devolver el resultado en pesos
}

int main() {
    int cantidadDolares;
    std::cout << "Ingrese la cantidad en dólares: ";
    std::cin >> cantidadDolares;

    // Llamada a la función ConvertirPesos y mostrar el resultado
    int cantidadPesos = ConvertirPesos(cantidadDolares);
    std::cout << cantidadDolares << " dólares equivalen a " << cantidadPesos << " pesos." << std::endl;

    return 0;
}

