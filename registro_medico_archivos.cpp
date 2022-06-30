#include <iostream>
#include <fstream>
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
    int cantidad_pacientes = 0;
    cout << "Cantidad de pacientes a atender hoy: ";
    cin >> cantidad_pacientes; cin.ignore();

    expediente pacientes[cantidad_pacientes];
    int contador_pacientes = 0;

    bool continuar = true;
    while(continuar){
        cout << endl << "Bienvenido a tu Consultorio Medico!" << endl;

        int opcion = 0;
        cout << "Deseas atender a un nuevo paciente? (1:si|2:no)\nOpcion: ";
        cin >> opcion; cin.ignore();

        if(opcion == 1){
            if(contador_pacientes < cantidad_pacientes){
                cout << "Atendiendo pacientes..." << endl;

                cout << "Digite su nombre: ";
                getline(cin, pacientes[contador_pacientes].nombre);
                cout << "Digite su apellido: ";
                getline(cin, pacientes[contador_pacientes].apellido);
                cout << "Digite su temperatura: ";
                cin >> pacientes[contador_pacientes].temperatura; cin.ignore();
                cout << "Digite su peso: ";
                cin >> pacientes[contador_pacientes].peso; cin.ignore();

                cout << "Pasamos al consultorio con el medico----------" << endl;

                cout << "Diagnostico del paciente: ";
                getline(cin, pacientes[contador_pacientes].diagnostico);
                cout << "Receta para el paciente: ";
                getline(cin, pacientes[contador_pacientes].receta);
                cout << "Precio por la consulta: $";
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

    //////////////////////////////////////////////////////////////////////////
    cout << "Calculando ganancias del dia de hoy..." << endl;
    double ganancias_totales = 0;
    for(int i=0; i<cantidad_pacientes; i++){
        ganancias_totales += pacientes[i].precio;
    }
    cout << "Ganancias totales: $" << ganancias_totales << endl;

    //////////////////////////////////////////////////////////////////////////
    cout << "Almacenando datos en el archivo expedientes_medicos.txt" << endl;
    ofstream archivo("expedientes_medicos.txt");
    //archivo << "Hola mundo!!" << endl;
    for(int i=0; i<cantidad_pacientes; i++){
        archivo << "Datos del paciente #" << i << endl;
        archivo << "Nombre completo: " << pacientes[i].nombre << " " << pacientes[i].apellido << endl;
        archivo << "Temperatura: " << pacientes[i].temperatura << " . Peso: " << pacientes[i].peso << endl;
        archivo << "Diagnostico: " << pacientes[i].diagnostico << endl;
        archivo << "Receta: " << pacientes[i].receta << endl << endl;
    }
    archivo.close();

    return 0;
}