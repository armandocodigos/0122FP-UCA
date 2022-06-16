#include <iostream>
using namespace std;

void funcion_valor(int a);
void funcion_referencia(int *p);

int main(void){
    int variable = 5;

    funcion_valor(variable);
    funcion_referencia(&variable);

    return 0;
}

void funcion_valor(int a){
    cout << "Valor contenido en a: " << a << endl;
}

void funcion_referencia(int *p){
    cout << "Direccion de memoria recibida: " << p << endl;
    cout << "Valor contenido en esa direccion: " << *p << endl;
}