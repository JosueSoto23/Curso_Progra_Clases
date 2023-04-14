#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n, int i = 0)
{
    if (i == n)
        return;

    std::cout << fibonacci(i) << " ";
    printFibonacci(n, i + 1);
}

int main()
{
    int n;
    std::cout << "Ingrese un número para calcular la secuencia de Fibonacci: ";
    std::cin >> n;

    std::cout << "La secuencia de Fibonacci para " << n << " es: ";
    printFibonacci(n);

    return 0;
}
