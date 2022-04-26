#include <iostream>
using namespace std;

int main() {
    //saludar al usuario
    cout << "Bienvenido!" << endl;
    
    //solicitar la base
    double base = 0;
    cout << "Por favor, digite la base: ";
    cin >> base;
    
    //solicitar la altura
    double altura = 0;
    cout << "Por favor, digite la altura: ";
    cin >> altura;
    
    //calcular el area (base*altura / 2)
    double area = base * altura / 2;
    
    //mostrar resultado al usuario
    cout << "El area es: " << area << " unidades." << endl;
    
    return 0;
}
