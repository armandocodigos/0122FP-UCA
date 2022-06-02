#include <iostream>
using namespace std;

//declaraciones de las funciones (la "firma")
void saludar(string nombre, string apellido);

int main(void){
    //las funciones se "mandan a llamar" (ejecutarlas)
    //<nombre de la funcion>(<valores, no poner el tipo de dato>);
    string nombre = "";
    cout << "Digite su nombre: ";
    getline(cin, nombre);

    string apellido = "";
    cout << "Digite su apellido: ";
    getline(cin, apellido);

    saludar(nombre, apellido);
    return 0;
}

//definiciones de las funciones ("completo")
void saludar(string nombre, string apellido){
    cout << "Hola " << nombre << " " << apellido << "!" << endl;
}