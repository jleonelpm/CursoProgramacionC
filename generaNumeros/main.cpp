#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char opcion;
    int numero;
    cout << "Deseas generar un número?\n";
    cin >> opcion;
    while (opcion == 'S' || opcion == 's'){
        srand (time(NULL)); //initialize random seed:
        numero = rand() % 100 + 1; //generate a number between 1 to 100
        cout << numero << "\n";
        cout << "Deseas generar un número?\n";
        cin >> opcion;
    }
}
