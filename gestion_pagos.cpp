#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 

using namespace std;

struct Empleado {
    int id;
    string nombre;
    double sueldoBase;
    int horasExtras;
    double adelanto; 
    double provista; 
};

int main() {
    // 2. Obligamos a C++ a usar numeros normales sin decimales extra
    cout << fixed << setprecision(0); 

    vector<Empleado> listaEmpleados; 
    int opcion;
    
    const double PAGO_POR_HORA_EXTRA = 50000.0; 

    do {
        cout << "\n--- Sistema de Gestion de Empleados ---\n";
        cout << "1. Registrar nuevo empleado\n";
        cout << "2. Calcular y mostrar sueldos\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            Empleado nuevoEmpleado;
            char respuestaAdelanto; 
            char respuestaprovista; 
            
            cout << "\nIngrese el ID del empleado: ";
            cin >> nuevoEmpleado.id;
            
            cout << "Ingrese el Nombre (sin espacios): ";
            cin >> nuevoEmpleado.nombre;
            
            cout << "Ingrese el Sueldo Base: ";
            cin >> nuevoEmpleado.sueldoBase;
            
            cout << "Ingrese la cantidad de Horas Extras: ";
            cin >> nuevoEmpleado.horasExtras;

            cout << "El empleado solicito provista? (s/n): ";
            cin >> respuestaprovista;

            cout << "El empleado solicito adelanto? (s/n): ";
            cin >> respuestaAdelanto;

            if (respuestaAdelanto == 's' || respuestaAdelanto == 'S') {
                cout << "Ingrese el monto del adelanto: ";
                cin >> nuevoEmpleado.adelanto;
            } else {
                nuevoEmpleado.adelanto = 0.0; 
            }

            
            if (respuestaprovista == 's' || respuestaprovista == 'S') {
                cout << "Ingrese el monto de la provista: ";
                cin >> nuevoEmpleado.provista;
            } else {
                nuevoEmpleado.provista = 0.0; 
            }

            listaEmpleados.push_back(nuevoEmpleado);
            cout << "-> Empleado registrado exitosamente.\n";

        } else if (opcion == 2) {
            cout << "\n--- Nomina de Pagos ---\n";
            
            if (listaEmpleados.empty()) {
                cout << "Aun no hay empleados registrados en el sistema.\n";
            } else {
                for (int i = 0; i < listaEmpleados.size(); i++) {
                    
                    double totalHorasExtras = listaEmpleados[i].horasExtras * PAGO_POR_HORA_EXTRA;
                    double sueldoNeto = (listaEmpleados[i].sueldoBase + totalHorasExtras) - (listaEmpleados[i].adelanto + listaEmpleados[i].provista);

                    // Ahora los numeros grandes se imprimiran perfectamente legibles
                    cout << "ID: " << listaEmpleados[i].id 
                         << " | Nombre: " << listaEmpleados[i].nombre 
                         << " | Base: " << listaEmpleados[i].sueldoBase 
                         << " | Extras: " << totalHorasExtras 
                         << " | Adelanto: -" << listaEmpleados[i].adelanto
                         << " | Adelanto: -" << listaEmpleados[i].provista  
                         << " | Total a Pagar: " << sueldoNeto << "\n";
                }
            }
            
        } else if (opcion == 3) {
            cout << "Optimizacion completada. Saliendo del sistema...\n";
        } else {
            cout << "Opcion no valida. Por favor, intente de nuevo.\n";
        }

    } while (opcion != 3);

    return 0;
}