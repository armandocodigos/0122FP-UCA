#include <iostream>
using namespace std;

int main(void){
    //variable "común y corriente"
    int variable = 10;
    cout << "Direccion de memoria de variable: " << &variable << endl;
    cout << "Valor contenido dentro de variable: " << variable << endl;

    //le digo a C++ que esta variable contendrá direcciones de memoria
    int *mi_primer_puntero;//indirección
    mi_primer_puntero = &variable;
    cout << "Direccion: " << mi_primer_puntero << ". Valor: " << *mi_primer_puntero << endl;

    //declaracion y asignacion de una direccion de memoria
    int *mi_segundo_puntero = &variable;//con el & obtenemos la direccion
    cout << "Direccion de memoria de variable: " << mi_segundo_puntero << endl;
    cout << "Valor contenido dentro de la variable: " << *mi_segundo_puntero << endl;

    return 0;
}