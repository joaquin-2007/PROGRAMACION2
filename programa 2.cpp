#include <iostream>

// Funci�n que convierte una cantidad de d�lares a pesos
int ConvertirPesos(int cantidad) {
    const float FACTOR_CONVERSION = 420.00; // Factor de conversi�n de d�lares a pesos
    int resultado = cantidad * FACTOR_CONVERSION; // Multiplicar la cantidad por el factor de conversi�n
    return resultado; // Devolver el resultado en pesos
}

int main() {
    int cantidadDolares;
    std::cout << "Ingrese la cantidad en d�lares: ";
    std::cin >> cantidadDolares;

    // Llamada a la funci�n ConvertirPesos y mostrar el resultado
    int cantidadPesos = ConvertirPesos(cantidadDolares);
    std::cout << cantidadDolares << " d�lares equivalen a " << cantidadPesos << " pesos." << std::endl;

    return 0;
}

