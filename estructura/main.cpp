#include <iostream>

using namespace std;

struct Numeros{
    int a;
    int b;
    int resultado() { return a+b; }
};

int main()
{
    cout << "introduce el valor de a ";
    cin >> num.a;
    cout << "introduce el valor de b ";
    cin >> num.b;

    cout << "El resultado de la suma es " <<  num.resultado();
    return 0;
}
