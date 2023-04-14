#include <iostream>
#include <cstring>

using namespace std;

struct Cliente
{
    int cedula;
    int telefono;
    char *nombre;
    char *empresa;
};

void llenarCliente(Cliente *cliente_reserva, char *nombre, int cedula, int telefono, char *empresa = nullptr)
{
    if (nombre == nullptr)
    {
        cout << "[Error] Debe ingresar el dato del cliente " << cedula << ": Nombre" << endl;
        exit(1);
    }
    if (cedula == 0)
    {
        cout << "[Error] Debe ingresar el dato del cliente " << cedula << ": Cédula" << endl;
        exit(1);
    }
    if (telefono == 0)
    {
        cout << "[Error] Debe ingresar el dato del cliente " << cedula << ": Teléfono" << endl;
        exit(1);
    }
    (*cliente_reserva).nombre = new char[strlen(nombre) + 1];
    strcpy((*cliente_reserva).nombre, nombre);
    (*cliente_reserva).cedula = cedula;
    (*cliente_reserva).telefono = telefono;
    if (empresa != nullptr)
    {
        (*cliente_reserva).empresa = new char[strlen(empresa) + 1];
        strcpy((*cliente_reserva).empresa, empresa);
    }
    else
    {
        (*cliente_reserva).empresa = nullptr;
    }
}

void mostrarCliente(Cliente *cliente)
{
    cout << "Cliente: " << (*cliente).nombre << endl;
    if ((*cliente).empresa != nullptr)
    {
        cout << "Empresa: " << (*cliente).empresa << endl;
    }
    cout << "Cédula: " << (*cliente).cedula << endl;
    cout << "Teléfono: " << (*cliente).telefono << endl;
}

Cliente *buscarCliente(Cliente *clientes, int cantidad, int cedula)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (clientes[i].cedula == cedula)
        {
            return &clientes[i];
        }
    }
    return nullptr;
}

void liberarCliente(Cliente *cliente)
{
    delete[] (*cliente).nombre;
    delete[] (*cliente).empresa;
}

int main()
{
    int cantidad = 5;
    Cliente *clientes = new Cliente[cantidad];

    llenarCliente(&clientes[0], "Juan", 123456, 1111111, "Empresa A");
    llenarCliente(&clientes[1], "Pedro", 234567, 2222222, "Empresa B");
    llenarCliente(&clientes[2], "María", 345678, 3333333);
    llenarCliente(&clientes[3], "Ricardo", 456789, 4444444, "Empresa C");
    llenarCliente(&clientes[4], "Luis", 567890, 5555555);

    for (int i = 0; i < cantidad; i++)
    {
        mostrarCliente(&clientes[i]);
        cout << endl;
    }

    int cedula_buscar = 345678;
    Cliente *cliente_encontrado = buscarCliente(clientes, cantidad, cedula_buscar);

    if (cliente_encontrado != nullptr)
    {
        mostrarCliente(cliente_encontrado);
    }
    else
    {
        cout << "No se encontró ningún cliente con cédula " << cedula_buscar << endl;
    }

    for (int i = 0; i < cantidad; i++)
    {
        liberarCliente(&clientes[i]);
    }
    delete[] clientes;
}
