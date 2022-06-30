#include <iostream>
using namespace std;

struct expediente{
    string nombre;
    string apellido;
    double temperatura;
    double peso;
    string diagnostico;
    string receta;
    double precio;
};

int main(void){
    cout << "Bienvenido a tu Consultorio Medico!" << endl;

    expediente paciente01;

    cout << "Digite su nombre: ";
    getline(cin, paciente01.nombre);
    cout << "Digite su apellido: ";
    getline(cin, paciente01.apellido);
    cout << "Digite su temperatura: ";
    cin >> paciente01.temperatura; cin.ignore();
    cout << "Digite su peso: ";
    cin >> paciente01.peso; cin.ignore();

    cout << "Pasamos al consultorio con el medico----------" << endl;

    cout << "Diagnostico del paciente: ";
    getline(cin, paciente01.diagnostico);
    cout << "Receta para el paciente: ";
    getline(cin, paciente01.receta);
    cout << "Precio por la consulta: $";
    cin >> paciente01.precio; cin.ignore();

    cout << paciente01.nombre << " muchas gracias por su visita!" << endl;

    return 0;
}