#include <iostream>
using namespace std;

int main(void){
    char opcion = 'c';
    //char opcion = 's';//Esto haría que nuestro while NUNCA se ejecute

    /*while(<condicion>){
        <conjunto de instrucciones>
    }*/

    //Se le pedirá una letra al usuario
    //c -> continuar
    //s -> salir
    while(opcion == 'c'){
        //saludar al usuario
        cout << endl << "Hola, buenos dias!" << endl;

        //pedir la letra
        cout << "Digite <c> para continuar o <s> para salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
    }

    cout << "Saludos!" << endl;

    return 0;
}