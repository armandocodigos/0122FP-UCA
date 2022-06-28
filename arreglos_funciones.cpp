#include <iostream>
using namespace std;

double encontrar_maximo(double d[], int tamanio);
double encontrar_minimo(double d[], int tamanio);

int main(void){
    //Solicitar cantidad de datos (tamaño del arreglo)
    int cantidad = 0;
    cout << "Cantidad de datos a ingresar: ";
    cin >> cantidad;

    //Crear arreglo llamado "datos" de tamaño "cantidad"
    double datos[cantidad];

    //Poblar el arreglo (poblado = llenado con datos)
    for(int i=0; i<cantidad; i++){
        cout << "Digite dato #" << i << ": ";
        cin >> datos[i];
    }

    cout << "El maximo es: " << encontrar_maximo(datos, cantidad) << endl;
    cout << "El minimo es: " << encontrar_minimo(datos, cantidad) << endl;

    return 0;
}

double encontrar_maximo(double d[], int tamanio){
    //suponiendo que el maximo es el valor
    //contenido en la primer casilla (cuyo índice es 0)
    double maximo = d[0];
    
    for(int i=1; i<tamanio; i++){//visito desde la segunda casilla en adelante
        if(d[i] > maximo)//si el valor es mayor al que ya tengo como maximo
            maximo = d[i];//entonces "actualizo" el valor maximo
    }

    //al salir del for, la variable "maximo" contiene el mayor de todos
    return maximo;
}

double encontrar_minimo(double d[], int tamanio){
    double minimo = d[0];
    
    for(int i=1; i<tamanio; i++){
        if(d[i] < minimo)
            minimo = d[i];
    }

    return minimo;
}