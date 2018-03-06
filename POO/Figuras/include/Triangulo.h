#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>


class Triangulo
{
    public:
        //Constructor
        Triangulo() {}

        //Constructor Sobrecargado
        Triangulo(int b, int a){
            base = b;
            altura = a;
        }

        //Destructor
        ~Triangulo() {}

        //getters y setters
        unsigned int Getbase() { return base; }
        void Setbase(unsigned int val) { base = val; }
        unsigned int Getaltura() { return altura; }
        void Setaltura(unsigned int val) { altura = val; }



        float calcularArea() {
            return base * altura / 2;
        }

        //Método sobrecargado
        float calcularArea(int b, int h){
            return b * h / 2;
        }


        float calcularPerimetro() {
            return base + altura + calcularHipotenusa();
        }

        //Método sobrecargado
        float calcularPerimetro(int b, int h){
            base = b;
            altura = h;
            float perimetro;
            perimetro = b + h + calcularHipotenusa();
            return perimetro;
        }




        float calcularHipotenusa(){
            float c;
            c = sqrt(pow(base,2) + pow(altura,2));
            return c;
        }




    protected:

    private:
        //Atributos
        unsigned int base;
        unsigned int altura;
};

#endif // TRIANGULO_H
