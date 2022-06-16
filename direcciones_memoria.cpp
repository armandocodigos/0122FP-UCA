#include <iostream>
using namespace std;

int main(void){
    int variableA = 3, variableB = 5;

    cout << "Valor contenido dentro de la variableA: " << variableA << endl;
    cout << "Direccion de memoria de la variableA: " << &variableA << endl;

    cout << "Valor contenido dentro de la variableB: " << variableB << endl;
    cout << "Direccion de memoria de la variableB: " << &variableB << endl;

    return 0;
}