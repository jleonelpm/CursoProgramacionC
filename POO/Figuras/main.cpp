#include <iostream>
#include "Triangulo.h"

using namespace std;

int main()
{
    Triangulo t;
    int b, h;

    cout << "Triangulo 1";
    cout << "\n Dame el valor de la base ";
    cin >> b;
    t.Setbase(b);
    cout << "\n Dame el valor de la altura ";
    cin >> h;
    t.Setaltura(h);

    cout << "\n\ņ El resultado del área es " << t.calcularArea();
    cout << "\n\ņ El resultado del área es " << t.calcularArea(b,h);
    cout << "\n\ņ El resultado del perímetro es " << t.calcularPerimetro();
    cout << "\n\ņ El resultado del área es " << t.calcularPerimetro(b,h);
    cout << "\n\n El resultado de la hipotenusa es " << t.calcularHipotenusa();


    Triangulo tt;
    cout << "Triangulo TT";
    cout << "\n Dame el valor de la base ";
    cin >> b;
    tt.Setbase(b);
    cout << "\n Dame el valor de la altura ";
    cin >> h;
    tt.Setaltura(h);

    cout << "\n\ņ El resultado del área es " << tt.calcularArea();
    cout << "\n\ņ El resultado del perímetro es " << tt.calcularPerimetro();
    cout << "\n\n El resultado de la hipotenusa es " << tt.calcularHipotenusa();




    cout << "\n\nTriangulo 3";
    cout << "\n Dame el valor de la base ";
    cin >> b;
    cout << "\n Dame el valor de la altura ";
    cin >> h;

    Triangulo t3(b, h);

    cout << "\n\ņ El resultado del área es " << t3.calcularArea();
    cout << "\n\ņ El resultado del área es " << t3.calcularArea(b,h);
    cout << "\n\ņ El resultado del perímetro es " << t3.calcularPerimetro();
    cout << "\n\ņ El resultado del perímetro es " << t3.calcularPerimetro(b,h);
    cout << "\n\n El resultado de la hipotenusa es " << t3.calcularHipotenusa();


    return 0;
}
