#include <iostream>
#include <string>

#include "Usuario.h"

using namespace std;

Usuario::Usuario()
{
    //Constructor
}

bool Usuario::entrar(string user, string pass){
    if (Usuario::email == user && Usuario::password == pass){
        return true;
    }else{
        return false;
    }
}

bool Usuario::salir() {
    return true;
}

void Usuario::verPerfil(){
    cout << "DATOS DEL USUARIO\n";
    cout << "-----------------------------------------------\n";
    cout << "ID : " << Usuario::Getid() << "\n";
    cout << "Nombre : " << Usuario::Getnombre() << "\n";
    cout << "Apellido : " << Usuario::Getapellido() << "\n";
    cout << "Email : " << Usuario::Getemail() << "\n";
    cout << "Password : " << Usuario::Getpassword() << "\n";
    cout << "-----------------------------------------------\n";
}



