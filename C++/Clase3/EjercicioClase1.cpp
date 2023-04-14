#include <iostream>
#include <cmath>


using namespace std;

// Funciones para calcular el área
float areaRectangulo(float base, float altura) {
    return base * altura;
}

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2.0;
}

float areaCuadrado(float lado) {
    return lado * lado;
}

void CalculoArea(float (*funcion)(float, float)){

    float valor1, valor2;
    cin >> valor1;
    cin >> valor2;
    cout << "El resultado es:" << funcion(valor1, valor2) << endl;
}

int main(){
CalculoArea(areaCuadrado);
    return 0;
}

