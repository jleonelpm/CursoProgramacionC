#include <iostream>

using namespace std;

void imprimir(int matriz[3][3]);
void traspuesta(int matriz[3][3]);
int suma(int matriz[3][3]);

int main()
{
    int matriz1[3][3] = {{12,45,70},{82,43,91},{81,97,99}};
    imprimir(matriz1);
    cout << "\n";
    traspuesta(matriz1);

    return 0;
}

void traspuesta(int matriz[3][3]){

    int t[3][3];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            t[i][j] = matriz[j][i];
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
}

void imprimir(int matriz[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
             cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
}
