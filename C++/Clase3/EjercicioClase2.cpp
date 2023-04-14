#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int dia;
    int mes;
    int anio;
    int (*calcularEdad)(const Persona&, int, int);
};

int calcularEdad(const Persona& persona, int mesActual, int anioActual) {
    int edad = anioActual - persona.anio;
    int diaActual = 1;
    if (mesActual < persona.mes || (mesActual == persona.mes && diaActual < persona.dia)) {
        edad--;
    }
    return edad;
}

int main() {
    int mesActual, anioActual;
    std::cout << "Ingrese el mes actual (1-12): ";
    std::cin >> mesActual;
    std::cout << "Ingrese el año actual: ";
    std::cin >> anioActual;

    Persona persona = {"Josue", 23, 10, 2000, calcularEdad};

    int edad = persona.calcularEdad(persona, mesActual, anioActual);

    std::cout << persona.nombre << " tiene " << edad << " años." << std::endl;

    return 0;
}
