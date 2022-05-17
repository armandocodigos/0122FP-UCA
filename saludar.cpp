#include <iostream>
using namespace std;

int main(void){
    /*for(<declaracion>; <condicion>; <incremento>){
        <instrucciones>
    }*/
    cout << "ANTES" << endl;
    int i = 1;
    for(i = 1; i >= 1; i++){//i++ equivale a i = i+1
        cout << "Valor de i = " << i << endl;
        //cualquier codigo
        //llamadas a funciones
    }
    cout << "DESPUES i=" << i << endl;

    return 0;
}