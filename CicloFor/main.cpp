#include <iostream>
using namespace std;

int main()
{
    int i,n;
    string numero;

    cout << "Cuantos Elefantes Deseas? ";
    cin >> n;

    if (n > 0 && n < 10) {

        for (i=1; i<=n; i++){
            switch (i)
            {
            case 1:
                numero = "Un";
                break;
            case 2:
                numero = "Dos";
                break;
            case 3:
                numero = "Tres";
                break;
            case 4:
                numero = "Cuatro";
                break;
            case 5:
                numero = "Cinco";
                break;
            case 6:
                numero = "Seis";
                break;
            case 7:
                numero = "Siete";
                break;
            case 8:
                numero = "Ocho";
                break;
            case 9:
                numero = "Nueve";
                break;
            } //fin de switch

            if (i == 1) { //Singular
                cout << numero << " Elefante se columpiaba sobre la tela de una araña...\n";
            }else{ //Plural
                cout << numero << " Elefantes se columpiaban sobre la tela de una araña...\n";
            }

        }
    }else{
        cout << "Cantidad de elefantes no permitida";
    }

}
