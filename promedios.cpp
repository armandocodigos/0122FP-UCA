#include <iostream>
#include <string>
using namespace std;

int main(void){
    for(int i=1; i<=5; i++){
        cout << endl << "Estudiante #" << i << endl;

        //solicitar nombre (string)
        string nombre = "";
        cout << "Digite su nombre: ";
        getline(cin, nombre);

        //solicitar 3 notas (double) y calcular promedio (double)
        double nota1=0.0, nota2=0.0, nota3=0.0;
        cout << "Digite Nota#1: \t";
        cin >> nota1; cin.ignore();
        cout << "Digite Nota#2: \t";
        cin >> nota2; cin.ignore();
        cout << "Digite Nota#3: \t";
        cin >> nota3; cin.ignore();

        double promedio = (nota1+nota2+nota3) / 3;

        //imprimir resultados
        cout << "Promedio = \t" << promedio << endl;
    }

    return 0;
}