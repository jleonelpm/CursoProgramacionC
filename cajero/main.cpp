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
    int operacion;

    //Uso de las Secuencias de Escape
    cout << " \" Banco el Cochinito S.A.\" \n " << cliente << " \n Bienvenido\n\n";

    cout << "¿QUE OPERACION DESEAS REALIZAR?\n\n";
    cout << "1.- Ver Saldo\n";
    cout << "2.- Retirar\n\n";

    //Ejemplo de Entrada de Datos
    cin >> operacion;

    if (operacion == 1){ //Ver Saldo
        cout << "Tu saldo es " << saldo;
    }else if (operacion == 2){ //Retiro
        cout << "Escribe el importe a retirar $ ";
        cin >> retiro;
        saldo = saldo - retiro;
        cout << "Tu saldo es " << saldo;
    }

    return 0;
}
