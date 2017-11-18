#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n; //filas
    int m; //columnas

    cout << "Introduce el tamaño de filas arreglo ";
    cin >> n;

    cout << "Introduce el tamaño de columnas arreglo ";
    cin >> m;


    int numeros[n][m];
    int i,j;

    //Ciclo para solicitar los datos del arreglo
    for (i=0; i<n; i++){
            for (j=0; j<m; j++) {
                cout << "Introduce el valor del arreglo ";
                cin >> numeros[i][j];
            }
    }

    //Ciclo para imprimir los datos del arreglo
    for (i=0; i<n; i++){
            for (j=0; j<m; j++){
                if (numeros[i][j] % 2 == 0) {
                    cout << setw(10) << numeros[i][j];
                }

            }
            cout << "\n";
    }

    return 0;
}
