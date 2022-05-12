#include <iostream>
using namespace std;

int main(void){
    /*for(<declaracion>; <condicion>; <incremento>){
        <instrucciones>
    }*/
    cout << "ANTES" << endl;
    for(int i = 50; i >= 0; i-=5){
        cout << "Valor de i = " << i << endl;
    }
    cout << "DESPUES" << endl;

    return 0;
}