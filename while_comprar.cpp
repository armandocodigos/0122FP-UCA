#include <iostream>
using namespace std;

int main(void){
    bool continuar = true;

    while(continuar){
        char opcion = 'a';
        cout << endl << "Desea seguir comprando? (s|si) (n|no)" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 's'){//comprar
            cout << "Comprar!" << endl;
        }
        else if(opcion == 'n')//salir
            continuar = false;
        else//error
            cout << "Error, favor digite una opcion valida!" << endl;
    }

    cout << "Tenga un buen dia!" << endl;

    return 0;
}