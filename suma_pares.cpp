#include <iostream>
using namespace std;

int main(void){
    int acumulador = 0;

    //Alternativa 1 (se ejecuta 5 veces: 1, 2, 3, 4, 5)
    for(int i=1; i<=5; i++){
        int valor = 0;
        cout << "Ingrese un valor: ";
        cin >> valor;

        //Si valor es par, entonces se suma
        //sino no (si valor no es par, no hacer nada)
        //valor % 2 == 0 se utiliza para saber si un numero es par
        //valor % 2 == 1 se utiliza para saber si un numero es impar
        if(valor % 2 == 0){
            acumulador = acumulador + valor;
        }
    }

    cout << "Suma de los pares = " << acumulador << endl;

    //Alternativa 2 (se ejecuta 5 veces: 0, 1, 2, 3, 4)
    //Cuando usemos arreglos, string, matrices, etc.
    //for(int i=0; i<5; i++){}

    return 0;
}