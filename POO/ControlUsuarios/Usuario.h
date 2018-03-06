#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;


class Usuario
{
    public:
        Usuario();



        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getapellido() { return apellido; }
        void Setapellido(string val) { apellido = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }
        string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }

        bool entrar(string user, string pass);
        bool salir();
        void verPerfil();

    protected:

    private:
        unsigned int id;
        string nombre;
        string apellido;
        string email;
        string password;
};

#endif // USUARIO_H
