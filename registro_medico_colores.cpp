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
    string amarillo = "\x1B[33m";
    string verde = "\x1B[32m";
    string rojo = "\x1B[31m";
    string negro = "\033[0m";

    int cantidad_pacientes = 0;
    cout << "Cantidad de pacientes a atender hoy: ";
    cin >> cantidad_pacientes; cin.ignore();

    expediente pacientes[cantidad_pacientes];
    int contador_pacientes = 0;

    bool continuar = true;
    while(continuar){
        cout << endl << amarillo << "Bienvenido a tu Consultorio Medico!" << negro << endl;

        int opcion = 0;
        cout << "Deseas atender a un nuevo paciente? (1:si|2:no)\nOpcion: ";
        cin >> opcion; cin.ignore();

        if(opcion == 1){
            if(contador_pacientes < cantidad_pacientes){
                cout << "Atendiendo pacientes..." << endl;

                cout << verde << "Digite su nombre: " << negro;
                getline(cin, pacientes[contador_pacientes].nombre);
                cout << verde <<  "Digite su apellido: " << negro;
                getline(cin, pacientes[contador_pacientes].apellido);
                cout << verde <<  "Digite su temperatura: " << negro;
                cin >> pacientes[contador_pacientes].temperatura; cin.ignore();
                cout << verde <<  "Digite su peso: " << negro;
                cin >> pacientes[contador_pacientes].peso; cin.ignore();

                cout << "Pasamos al consultorio con el medico----------" << endl;

                cout << rojo << "Diagnostico del paciente: " << negro;
                getline(cin, pacientes[contador_pacientes].diagnostico);
                cout << rojo << "Receta para el paciente: " << negro;
                getline(cin, pacientes[contador_pacientes].receta);
                cout << rojo << "Precio por la consulta: $" << negro;
                cin >> pacientes[contador_pacientes].precio; cin.ignore();

                cout << pacientes[contador_pacientes].nombre << " muchas gracias por su visita!" << endl;

                contador_pacientes++;//incrementando en 1 unidad
            }
            else{
                cout << "Lo sentimos, las citas para hoy han terminado." << endl;
                continuar = false;
            }
        }
        else if(opcion == 2)
            continuar = false;
        else
            cout << "Opcion no valida, favor intente de nuevo!!!" << endl;
    }

    cout << "Que tenga un buen dia!!" << endl << endl;

    cout << "Calculando ganancias del dia de hoy..." << endl;
    double ganancias_totales = 0;
    for(int i=0; i<cantidad_pacientes; i++){
        ganancias_totales += pacientes[i].precio;
    }
    cout << "Ganancias totales: $" << ganancias_totales << endl;

    return 0;
}