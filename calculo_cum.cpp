#include <iostream>
using namespace std;

//Prototipos de las funciones
bool usuario_desea_continuar();
double calculo_CUM();

//Función principal
int main(void){
    cout << "Bienvenido a la calculadora de CUM!" << endl;
    while(usuario_desea_continuar()){
        cout << "CUM: " << calculo_CUM() << endl << endl;
    }
    cout << "Que tenga un buen dia!" << endl;
    return 0;
}

//Implementación de las funciones
bool usuario_desea_continuar(){
    int opcion = 0;
    cout << "Desea calcular su CUM? (1-si|2-no)" << endl;
    cout << "Opcion elegida: ";
    cin >> opcion;

    /*bool respuesta = true;
    if(opcion == 1)
        respuesta = true;
    else
        respuesta =  false;
    return respuesta;*/

    return (opcion == 1) ? true : false;
}

double calculo_CUM(){
    int materias = 0;
    cout << "Cantidad de materias inscritas: ";
    cin >> materias;

    //Variables acumuladoras (para sumatorias)
    double sumatoriaUM = 0;
    int sumatoriaUV = 0;

    for(int i=1; i<=materias; i++){
        cout << "Datos Materia #" << i << ":" << endl;
        double nota = 0;
        cout << "Nota obtenida: ";
        cin >> nota;
        int UV = 0;
        cout << "Unidades valorativas: ";
        cin >> UV;

        //Calculo de unidades de merito
        double UM = nota * UV;
        //Acumular en contadores (sumatorias)
        sumatoriaUM = sumatoriaUM + UM;
        sumatoriaUV = sumatoriaUV + UV;
    }

    double CUM = sumatoriaUM / sumatoriaUV;
    return CUM;
}