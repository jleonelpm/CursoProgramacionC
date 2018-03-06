#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

int main()
{
    Usuario admin;
    string user, pass;

    admin.Setid(1);
    admin.Setnombre("Leonel");
    admin.Setapellido("Pech");
    admin.Setemail("jleonelpm@hotmail.com");
    admin.Setpassword("123456");

    cout << "INGRESO AL SISTEMA\n";
    cout << "Introduce tu Correo:\n ";
    cin >> user;
    cout << "Introduce tu Contraseña\n";
    cin >> pass;

    if (admin.entrar(user,pass)){
        cout << "\n\n Has ingresado al Sistema \n\n";
        admin.verPerfil();
    }else{
        cout << "\n\n Usuario no válido \n\n";
    }

    return 0;
}
