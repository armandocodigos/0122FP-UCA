#include <iostream>
using namespace std;

string pedir_nombre();
string pos_neg_cero(int numero);

int main(void){
    string nombre_usuario = pedir_nombre();
    cout << "El nombre del usuario es: " << nombre_usuario << endl;

    int n = 0;
    cout << "Digite un numero: ";
    cin >> n;
    string caracteristica_n = pos_neg_cero(n);
    cout << caracteristica_n << endl;

    cout << pos_neg_cero(n) << endl;

    return 0;
}

string pedir_nombre(){
    string nombre = "";
    cout << "Digite su nombre: ";
    getline(cin, nombre);
    return nombre;//aqui devuelvo
}

string pos_neg_cero(int numero){
    string resultado = "";
    if(numero == 0)
        resultado = "El numero es cero.";
    else if(numero > 0)
        resultado = "El numero es positivo.";
    else
        resultado = "El numero es negativo.";
    return resultado;//aqui devuelvo
}