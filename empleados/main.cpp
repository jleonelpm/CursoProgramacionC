#include <iostream>
#include <iomanip>

using namespace std;

struct Empleados {
    int folio;
    string nombre;
    float sueldo;
    int horas;
    float impuesto;

    float sueldo_bruto() { return sueldo * horas - impuesto; }

};

int main()
{
    int n;

    cout << "Cuantos empleados vas a procesar? ";
    cin >> n;

    Empleados lista_empleados[n];

    for (int i=0; i<n; i++){
        cout << "Introduce el Folio del Empleado ";
        cin >> lista_empleados[i].folio;
        cout << "Introduce el Nombre del Empleado ";
        cin >> lista_empleados[i].nombre;
        cout << "Introduce el Sueldo del Empleado ";
        cin >> lista_empleados[i].sueldo;
        cout << "Introduce las Horas Trabajadas ";
        cin >> lista_empleados[i].horas;
        cout << "Introduce el Impuesto ";
        cin >> lista_empleados[i].impuesto;

    }

    for (int i=0; i<n; i++){
        cout << lista_empleados[i].folio;
        cout << setw(20) << lista_empleados[i].nombre;
        cout << setw(20) << lista_empleados[i].sueldo_bruto() << endl;

    }



}
