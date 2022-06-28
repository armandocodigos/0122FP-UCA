#include <iostream>
using namespace std;

int main(void){
    //Solicitar cantidad de casillas para mi arreglo
    int tamanio = 0;
    cout << "Cantidad de enteros a almacenar: ";
    cin >> tamanio;

    //Declarar mi arreglo con dicha cantidad de casillas
    int enteros[tamanio];

    //Recorrer mi arreglo, casilla por casilla, y darle un valor
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Entero #" << i << ": ";
        cin >> enteros[i];
    }

    //Accediendo a los valores contenidos en el arreglo
    //Tener cuidado de no acceder a índices que NO EXISTAN porque daría error
    if(tamanio >= 1)
        cout << "Valor contenido en casilla cuyo indice es 0 = " << enteros[0] << endl;

    if(tamanio >= 4){
        cout << "Valor contenido en casilla cuyo indice es 3 = " << enteros[3] << endl;

        cout << "Cambiando el valor de casilla #3..." << endl;
        enteros[3] = 10;

        cout << "Valor contenido en casilla cuyo indice es 3 = " << enteros[3] << endl;
    }

    return 0;
}