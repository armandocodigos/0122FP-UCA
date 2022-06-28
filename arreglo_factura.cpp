#include <iostream>
using namespace std;

int main(void){
    //Saludo
    cout << "Bienvenido a la Cafeteria UCA!" << endl;

    //Solicitar al usuario la cantida de casillas del arreglo
    int platillos = 0;
    cout << "Cantidad de platillos consumidos: ";
    cin >> platillos;

    //Crear arreglo que simboliza la factura
    double factura[platillos];

    //Solicitar precio de cada uno de los platillos
    for (int i = 0; i < platillos; i++)
    {
        cout << "Precio del platillo #" << i << ": $";
        cin >> factura[i];
    }

    //Aplicando promoción de todo a mitad de precio
    cout << "Promocion de 50% de descuento!!!" << endl;
    for (int i = 0; i < platillos; i++)
    {
        factura[i] = factura[i] / 2;
        //Equivalente a: factura[i] /= 2;
    }

    //Calculando el monto total a pagar
    double monto_total = 0;
    for (int i = 0; i < platillos; i++)
    {
        monto_total += factura[i];
        //Equivalente a: monto_total = monto_total + factura[i];
    }
    cout << "Monto total: $" << monto_total << endl;

    //Calculando cantidad de casillas
    //Se obtiene de la siguiente división:
    //#casillad = sizeof(<nombre del arreglo>) / sizeof(<tipo de dato>)
    int cantidad = sizeof(factura) / sizeof(double);
    cout << "Gracias por consumir " << cantidad << " platillos!" << endl;
    
    return 0;
}