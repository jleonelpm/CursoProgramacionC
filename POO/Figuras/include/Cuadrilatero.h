#ifndef CUADRILATERO_H
#define CUADRILATERO_H


class Cuadrilatero
{
    public:
        Cuadrilatero();

        unsigned int Getlado1() { return lado1; }
        void Setlado1(unsigned int val) { lado1 = val; }
        unsigned int Getlado2() { return lado2; }
        void Setlado2(unsigned int val) { lado2 = val; }

    protected:

    private:
        unsigned int lado1;
        unsigned int lado2;
};

#endif // CUADRILATERO_H
