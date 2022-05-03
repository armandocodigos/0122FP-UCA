#include <iostream>
using namespace std;

//Formula a utilizar: F = (9/5 * C) + 32
int main(void){
    //Saludar al usuario
    cout << "Bienvenidos al conversor de temperaturas!" << endl;

    //Solicitar temp en C
    float celsius = 0;
    cout << "Digite una temperatura en grados celsius: ";
    cin >> celsius;

    //Calcular temp en F
    cout << "Convirtiendo temperatura..." << endl;
    float fahrenheit = (9.0/5.0 * celsius) + 32;

    //Mostrar resultado al usuario
    cout << "Resultado: " << fahrenheit << " F.";
    
    //Salir
    return 0;
}
