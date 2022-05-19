#include <iostream>
using namespace std;

int main(void){
    //Se le pedirá una letra al usuario
    //c -> continuar
    //s -> salir

    bool continuar = true;

    while(continuar){
        //saludar al usuario
        cout << endl << "Hola, buenos dias!" << endl;

        //pedir la letra
        char opcion = 'a';
        cout << "Digite <c> para continuar o <s> para salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 'c')
            continuar = true;
        else if(opcion == 's')
            continuar = false;
        else{
            cout << "Error! Usted digito una letra no valida!" << endl;
            cout << "Intente de nuevo." << endl;
        }
    }

    cout << "Saludos!" << endl;

    return 0;
}