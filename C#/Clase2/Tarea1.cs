
// 1. Elabore un programa que tome 2 números enteros los sume y eleve ese resultado al cuadrado.
static void exercise_one()
{
    int n1, n2;

    Console.WriteLine("\nIngrese el primer número: ");
    n1 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\nIngrese el segundo número: ");
    n2 = Convert.ToInt32(Console.ReadLine());

    double res = Math.Pow(n1 + n2, 2);
    Console.Clear();
    Console.ForegroundColor = ConsoleColor.Red;
    Console.WriteLine("\nEl resultado es: " + res + "\n");
}

// 2. Elabore un programa que tome 2 números enteros y evalúe la operación guardada en una
// variable, elabore, sumas y restas. (Se utilizan if y else en lugar de switch por requerimiento)
static void exercise_two()
{
    int n1, n2, opr;
    double res = 0;

    Console.WriteLine("\nIngrese el primer número: ");
    n1 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\nIngrese el segundo número: ");
    n2 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\n1. Suma \n2. Resta \nIngrese la operación:\n");
    opr = Convert.ToInt16(Console.ReadLine());

    if (opr == 1)
    {
        res = n1 + n2;
    }
    else if (opr == 2)
    {
        res = n1 - n2;
    }
    else
    {
        Console.WriteLine("Operación inválida");
    }
    Console.Clear();
    Console.ForegroundColor = ConsoleColor.Red;
    Console.WriteLine("\nEl resultado es: " + res + "\n");
}


// 3. Elabore un programa que solicite al usuario su nombre y su edad, guarde ambos datos en una
// variable y lo muestre en pantalla como *Su nombre es <nombre> y tiene la edad de <edad>.*
static void exercise_three()
{
    Console.WriteLine("Ingrese su nombre: ");
    string name = Console.ReadLine() ?? string.Empty;;
    Console.WriteLine("Ingrese su edad: ");
    int age = Convert.ToInt32(Console.ReadLine());
    Console.Clear();
    Console.ForegroundColor = ConsoleColor.Red;
    Console.WriteLine("\nSu nombre es " + name + " y tiene la edad de " + age + ".\n");
}


// 4.Elabore un programa que haga la función de una calculadora, a partir de 2 números este debe:
static void exercise_four()
{
    int n1, n2, opr;
    double res = 0;

    Console.WriteLine("Ingrese el primer número: ");
    n1 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("Ingrese el segundo número: ");
    n2 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("\n1. Suma \n2. Resta \n3. Multiplicación \n4. División \nIngrese la operación:\n");
    opr = Convert.ToInt16(Console.ReadLine());

    switch (opr)
    {
        case 1:
            res = n1 + n2;
            break;
        case 2:
            res = n1 - n2;
            break;
        case 3:
            res = n1 * n2;
            break;
        case 4:
            res = n1 / n2;
            break;
        default:
            Console.WriteLine("Operación inválida\n");
            break;
    }
    Console.Clear();
    Console.ForegroundColor = ConsoleColor.Red;
    Console.WriteLine("El resultado es: " + res + "\n");
}


void main()
{
    string menu = "\nTarea 1 - CENFOTEC \n\n" +
                  "1. Ejercicio 1 \n" +
                  "2. Ejercicio 2 \n" +
                  "3. Ejercicio 3 \n" +
                  "4. Ejercicio 4 \n" +
                  "5. Salir \n" +
                  "Ingrese la opción:";
    int op = 0;

    while (op != 5)
    {
        Console.ForegroundColor = ConsoleColor.White;
        Console.WriteLine(menu);
        op = Convert.ToInt32(Console.ReadLine());

        Console.Clear();
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
                Console.WriteLine("Saliendo...\n");
                break;
            default:
                Console.WriteLine("Opción inválida\n");
                break;
        }
    }
}

main();
