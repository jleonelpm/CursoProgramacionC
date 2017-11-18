#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int base, altura;
    float perimetro, area, lado3;

    cout << "Escribe la base del triangulo\n";
    cin >> base;
    cout << "Escribe la altura del triangulo \n";
    cin >> altura;

    lado3 = sqrt (pow(base,2)+ pow(altura,2));
    perimetro = base + altura + lado3;
    area = base * altura / 2;

    if (area >= 100){
        cout << "\nEl perimetro del triangulo es : " << perimetro;
    } else {
        cout << "\nEl area del triangulo es : " << area;
    }

    return 0;
}
