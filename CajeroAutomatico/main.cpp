#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int numero_cliente = 1454;
    char cliente[100] = "JOSE LEONEL PECH MAY";
    float saldo = 10000.0;
    float retiro;
    float deposito;
    float transferencia;
    int operacion;
    char numero_cuenta[20];
    char respuesta;

    do {

        cout << "\n\n \" Banco el Cochinito S.A. \" \n "
             << cliente
             << " \n Bienvenido \n\n ";

        cout << "QUE OPERACION DESEAS REALIZAR?\n\n";
        cout << "1.- Ver saldo\n";
        cout << "2.- Retirar \n";
        cout << "3.- Depositar \n";
        cout << "4.- Transferir \n";
        cout << "5.- Salir\n";

        cin >> operacion;

        switch (operacion){

        case 1:
            cout << "Tu saldo es " << saldo;
            break;
        case 2:
            cout << "Escribe el importe a Retirar $ ";
            cin >> retiro;
            if (retiro <= saldo) {
                saldo = saldo - retiro;
                cout << "Tu nuevo saldo es " << saldo;
            }else{
                cout << "Su saldo es insuficiente";
            }
            break;
        case 3:
            cout << "Escribe el monto a Depositar";
            cin >> deposito;
            if (deposito >= 100) {
                saldo = saldo + deposito;
                cout << "Tu nuevo saldo es " << saldo;
            }else{
                cout << "El depósito debe ser a partir de 100";
            }
            break;
        case 4:
            cout << "Escribe el numero de cuenta de la Transferencia: ";
            cin >> numero_cuenta;
            cout << "Escribe el importe a transferir $ ";
            cin >> transferencia;
            if (transferencia <= saldo) {
                saldo = saldo - transferencia;
                cout << "Tu nuevo saldo es " << saldo;
            }else{
                cout << "Saldo insuficiente para realizar la transferencia";
            }
            break;
        case 5:
            cout << "\nGracias por su Visita";
        }

        if (operacion != 5){
            cout << "\n Deseas realizar otra operacion (S/N) \n";
            cin >> respuesta;

            if (respuesta == 'S' || respuesta == 's'){
                system("cls"); //Linux
            }else{
                operacion = 5;
            }
        }

    } while (operacion != 5);

    return 0;
}
