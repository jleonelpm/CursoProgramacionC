//Directivas del Preprocesador
#include <iostream>

using namespace std;

/*  Cajero Automático V1.0
    Realizado por: José Leonel Pech May
    Fecha: 12/09/2017
*/

//Cabecera de la función main
int main()
{

    //Declaración de variables y tipos de datos
    int numero_cliente = 1454;
    char cliente [100] = "JOSE LEONEL PECH MAY";
    float saldo = 10000.0;
    float retiro;
    float deposito;
    float transferencia;
    int operacion;
    char numero_cuenta [20];

    //Uso de las Secuencias de Escape
    cout << " \" Banco el Cochinito S.A.\" \n " << cliente << " \n Bienvenido\n\n";

    cout << "\¿QUE OPERACION DESEAS REALIZAR?\n\n";
    cout << "1.- Ver Saldo\n";
    cout << "2.- Retirar\n";
    cout << "3.- Depositar\n";
    cout << "4.- Transferir\n";

    //Ejemplo de Entrada de Datos
    cin >> operacion;

    //Operaciones a realizar de acuerdo al valor de operacion
    switch (operacion){
        case 1:
            cout << "Tu saldo es " << saldo;
            break;
        case 2:
            cout << "Escribe el importe a Retirar $ ";
            cin >> retiro;
            saldo = saldo - retiro;
            cout << "Tu saldo es " << saldo;
            break;
        case 3:
            cout << "Escribe el monto a Depositar $ ";
            cin >> deposito;
            saldo = saldo + deposito;
            cout << "Tu saldo es " << saldo;
            break;
        case 4:
            cout << "Escribe el número de cuenta de la Transferencia : ";
            cin >> numero_cuenta;
            cout << "Escribe el importe a Transferir $ ";
            cin >> transferencia;
            saldo = saldo - transferencia;
            cout << "Tu saldo es " << saldo;
            break;
        default:
            cout << "¡¡OPCION SELECCIONADA NO VALIDA!!";
    }

    return 0;
}
