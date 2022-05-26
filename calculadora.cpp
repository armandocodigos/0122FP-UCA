#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    //Saludar al usuario
    cout << "Bienvenido a la calculadora en C++!" << endl;

    //Mostrar un menú que se repita
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1)Suma\n2)Resta\n3)Producto\n4)Division\n";
        cout << "5)Raiz cuadrada\n6)Potencia\n";
        cout << "0)Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        double a = 0, b = 0;
        switch(opcion){
            case 1://suma
                cout << "Digite sumando A: "; cin >> a;
                cout << "Digite sumando B: "; cin >> b;
                cout << "Resultado (A+B): " << a+b << endl;
            break;
            case 2://resta
                cout << "Digite minuendo A: "; cin >> a;
                cout << "Digite sustraendo B: "; cin >> b;
                cout << "Resultado (A-B): " << a-b << endl;
            break;
            case 3://mult
                cout << "Digite factor A: "; cin >> a;
                cout << "Digite factor B: "; cin >> b;
                cout << "Resultado (A*B): " << a*b << endl;
            break;
            case 4://div
                cout << "Digite numerador A: "; cin >> a;
                cout << "Digite denominador B: "; cin >> b;
                if(b == 0)
                    cout << "Error! El denominador no puede ser 0!" << endl;
                else
                    cout << "Resultado (A/B): " << a/b << endl;
            break;
            case 5:
                cout << "Digite el termino A: "; cin >> a;
                if(a >= 0)
                    cout << "Raiz cuadrada de A: " << sqrt(a) << endl;
                else
                    cout << "Error! No se admiten negativos!" << endl;
            break;
            case 6:
                cout << "Digite base A: "; cin >> a;
                cout << "Digite exponente B: "; cin >> b;
                cout << "Resultado (A^B): " << pow(a, b) << endl;
            break;
            case 0://salir
                continuar = false;
            break;
        }
    }while(continuar);

    //Despedirnos del usuario
    cout << "Tenga un buen dia!" << endl;
    
    return 0;
}