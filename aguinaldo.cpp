#include <iostream>
using namespace std;

int main(void){
    //Saludar al usuario
    cout << "Buenos dias!" << endl;

    //Solicitar datos al usuario: sueldo y años de antiguedad
    double sueldo = 0;
    cout << "Digite su salario: ";
    cin >> sueldo;

    int antiguedad = 0;
    cout << "Digite los anios cumplidos en la empresa: ";
    cin >> antiguedad;

    //Calcular el aguinaldo: 30% si tiene menos de 5 años, sino 50%
    /*double aguinaldo = 0;
    if(antiguedad < 5){
        aguinaldo = sueldo * 0.30;
    }
    else{
        aguinaldo = sueldo * 0.50;
    }*/

    double aguinaldo = (antiguedad < 5) ? sueldo * 0.30 : sueldo * 0.50;

    //Mostrar el resultado y despedirse
    cout << "Su aguinaldo es de $" << aguinaldo << endl;

    return 0;
}
