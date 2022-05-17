#include <iostream>
using namespace std;

int main(void){
    int acumulador = 0;

    for(int i = 1; i <= 10; i++){
        int valor = 0;
        cout << "Ingrese un valor: ";
        cin >> valor;

        acumulador = acumulador + valor;
        //acumulador += valor;
    }

    cout << "Total = " << acumulador << endl;

    return 0;
}