#include <iostream>
#include <cmath>


// 1. Elabore un programa que tome 2 números enteros los sume y eleve ese resultado al cuadrado.
void exercise_one()
{
    int n1, n2;

    std::cout << "\nIngrese el primer número: ";
    std::cin >> n1;
    std::cout << "\nIngrese el segundo número: ";
    std::cin >> n2;

    double res = pow(n1 + n2, 2);
    std::cout << "\033[1;31m\nEl resultado es: " << res << "\n";
}


// 2. Elabore un programa que tome 2 números enteros y evalúe la operación guardada en una
// variable, elabore, sumas y restas. (Se utilizan if y else en lugar de switch por requerimiento)
void exercise_two()
{
    int n1, n2, op;

    std::cout << "\nIngrese el primer número: ";
    std::cin >> n1;
    std::cout << "\nIngrese el segundo número: ";
    std::cin >> n2;
    std::cout << "\n1. Suma \n2. Resta \nIngrese la operación:\n";
    std::cin >> op;

    if (op == 1)
    {
        std::cout << "\033[1;31m\nEl resultado es: " << n1 + n2 << "\n";
    }
    else if (op == 2)
    {
        std::cout << "\033[1;31m\nEl resultado es: " << n1 - n2 << "\n";
    }
    else
    {
        std::cout << "\033[1;31m\nOpción inválida\n";
    }
}


// 3. Elabore un programa que solicite al usuario su nombre y su edad, guarde ambos datos en una
// variable y lo muestre en pantalla como *Su nombre es <nombre> y tiene la edad de <edad>.*
void exercise_three()
{
    std::string name;
    int age;

    std::cout << "\nIngrese su nombre: ";
    std::cin >> name;
    std::cout << "\nIngrese su edad: ";
    std::cin >> age;

    std::cout << "\033[1;31m\nSu nombre es " << name << " y tiene la edad de " << age << "\n";
}


// 4.Elabore un programa que haga la función de una calculadora, a partir de 2 números
void exercise_four()
{
    int n1, n2, op;

    std::cout << "\nIngrese el primer número: ";
    std::cin >> n1;
    std::cout << "\nIngrese el segundo número: ";
    std::cin >> n2;
    std::cout << "\n1. Suma \n2. Resta \n3. Multiplicación \n4. División \nIngrese la operación:\n";
    std::cin >> op;

    switch (op)
    {
    case 1:
        std::cout << "\033[1;31m\nEl resultado es: " << n1 + n2 << "\n";
        break;
    case 2:
        std::cout << "\033[1;31m\nEl resultado es: " << n1 - n2 << "\n";
        break;
    case 3:
        std::cout << "\033[1;31m\nEl resultado es: " << n1 * n2 << "\n";
        break;
    case 4:
        std::cout << "\033[1;31m\nEl resultado es: " << n1 / n2 << "\n";
        break;
    default:
        std::cout << "\033[1;31m\nOpción inválida\n";
        break;
    }
}


int main()
{
    int op;

    while (op != 5)
    {
        std::cout << "\x1B[37m\nTarea 1 - CENFOTEC\n\n"
                  << "1. Ejercicio 1\n" 
                  << "2. Ejercicio 2\n"
                  << "3. Ejercicio 3\n"
                  << "4. Ejercicio 4\n"
                  << "5. Salir\n"
                  << "Ingrese una opción: ";
        std::cin >> op;

        switch (op)
        {
        case 1:
            exercise_one();
            break;
        case 2:
            exercise_two();
            break;
        case 3:
            exercise_three();
            break;
        case 4:
            exercise_four();
            break;
        case 5:
            std::cout << "Saliendo...\n";
            break;
        } 
        
    }
    return 0;
}
