using System;

class Program
{
    static int Fibonacci(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

    static void PrintFibonacci(int n, int i = 0)
    {
        if (i == n)
            return;

        Console.Write($"{Fibonacci(i)} ");
        PrintFibonacci(n, i + 1);
    }

    static void Main(string[] args)
    {
        Console.Write("Ingrese un número para calcular la secuencia de Fibonacci: ");
        int n = int.Parse(Console.ReadLine() ?? throw new InvalidOperationException());

        Console.Write($"La secuencia de Fibonacci para {n} es: ");
        PrintFibonacci(n);
    }
}
