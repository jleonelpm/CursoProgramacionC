#include <iostream>

using namespace std;

//Prototipos de Funciones
int suma(int a, int b);
int resta (int a, int b);
int divide (int a, int b);
int maximo (int num1, int num2);
int esPar (int n1);
void imprimeMenu();
void saludar(char nombre[]);

//PROGRAMA PRINCIPAL
int main()
{

    int opcion;
    int numero1, numero2, resultado;

    imprimeMenu();
    cin >> opcion;

    switch (opcion){
    case 1:
        cout << "Dame el primer numero ";
        cin >> numero1;
        cout << "Dame el segundo numero ";
        cin >> numero2;
        resultado = suma(numero1, numero2);
        cout << "El resultado es " << resultado;
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    }

    return 0;
}

int suma(int a, int b){
    return a + b;
}

int resta (int a, int b){
    return a - b;
}

int divide (int a, int b){
    return a / b;
}

int maximo (int num1, int num2){
    if (num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int esPar(int n1){
    if (n1 % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

void imprimeMenu(){
    cout << "MENU PRINCIPAL\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. División\n";
    cout << "4. Máximo\n";
    cout << "5. Par\n\n";
    cout << "Selecciona tu opción: \n";
}

void saludar(char nombre[]){
    cout << "Hola " << nombre;
}

