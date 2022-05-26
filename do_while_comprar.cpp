#include <iostream>
using namespace std;

int main(void){
    //características del do-while:
    //siempre se ejecuta 1 vez (mínimo 1 vez)
    //es una sentencia de repetición muy parecida al while
    //la diferencia con el while, es que el while podría no ejecutarse

    int numero = 3;
    while(numero > 10){
        //esto nunca se ejecutará
        //el while primero pregunta y luego ejecuta
        cout << "Esto no se ejecuta" << endl;
    }

    do{
       //sentencias
       //el do-while primero ejecuta y luego pregunta
       cout << "Al menos se ejecuta 1 vez" << endl;
    } while (numero > 10);

    //realizar un menú con un do-while
    bool continuar = true;

    do{
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
    } while(continuar);

    cout << "Tenga un buen dia!" << endl;

    return 0;
}