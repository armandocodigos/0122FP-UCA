#include <iostream>
using namespace std;

void mostrar_iva(double precio);
double calculo_iva(double precio);

int main(void){
    double precio = 0;
    cout << "Favor digite el precio: $";
    cin >> precio;

    mostrar_iva(precio);//no devuelve el dato, solo lo muestra en consola

    double resultado = calculo_iva(precio);//devuelve el dato
    cout << "El IVA es: $" << resultado << endl;//aquí se muestra en consola

    return 0;
}

//funcion que calcula IVA (devuelve el dato)
//input: precio del artículo
//output: el iva
double calculo_iva(double precio){
    double iva = precio * 0.13;
    return iva;
}

//funcion que calcula IVA (no devuelve el dato)
//input: precio del artículo
//output: nada
void mostrar_iva(double precio){
    double iva = precio * 0.13;
    cout << "El IVA es: $" << iva << endl;
}