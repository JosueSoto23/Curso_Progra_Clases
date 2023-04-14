#include <iostream>

void CambiarSigno(int* numeros, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(numeros + i) < 0)
        {
            *(numeros + i) *= -1;
        }
    }
}

int main()
{
    int n = 10;
    int* numeros = new int[n];

    // Inicializar el vector con algunos números negativos
    for (int i = 0; i < n; i++)
    {
        *(numeros + i) = (i - 5) * 2;
    }

    std::cout << "Antes de cambiar el signo: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << *(numeros + i) << " ";
    }
    std::cout << std::endl;

    CambiarSigno(numeros, n);

    std::cout << "Después de cambiar el signo: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << *(numeros + i) << " ";
    }
    std::cout << std::endl;

    delete[] numeros;

    return 0;
}
