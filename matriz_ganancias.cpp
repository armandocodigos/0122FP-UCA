#include <iostream>
using namespace std;

int main(void){
    //inicializar la matriz
    double ganancias[2][5];

    //poblar la matriz con las ganancias iniciales (es decir, llenarla de 0's)
    for(int fila=0; fila<2; fila++){
        for(int columna=0; columna<5; columna++){
            ganancias[fila][columna] = 0;
        }
    }
    
    int opcion = 0;
    while (opcion != 4)
    {
        cout << "\n1)Mostrar ganancias\n2)Agregar ganancias\n";
        cout << "3)Calcular total\n4)Salir\nOpcion: ";
        cin >> opcion;

        if(opcion == 1){//Mostrar ganancias
            int dia = 0;
            cout << "Digite dia (0:lun|1:mar|2:mie|3:jue|4:vie): ";
            cin >> dia;

            int jornada = 0;
            cout << "Digite una jornada (0:matutina|1:vespertina): ";
            cin >> jornada;

            cout << "Ganancias: $" << ganancias[jornada][dia] << endl;
        }
        else if(opcion == 2){//Agregar ganancias
            int dia = 0;
            cout << "Digite dia (0:lun|1:mar|2:mie|3:jue|4:vie): ";
            cin >> dia;

            int jornada = 0;
            cout << "Digite una jornada (0:matutina|1:vespertina): ";
            cin >> jornada;

            double monto = 0;
            cout << "Digite el monto a agregar: $";
            cin >> monto;

            ganancias[jornada][dia] += monto;
        }
        else if(opcion == 3){//calcular ganancias totales
            double total = 0;//acumulador

            for(int fila=0; fila<2; fila++)
                for(int columna=0; columna<5; columna++)
                    total += ganancias[fila][columna];
            
            cout << "Ganancias totales: $" << total << endl;
        }
        else if(opcion == 4){//Salir
            cout << "Muchas gracias, tenga un buen dia!" << endl;
        }
        else{//Error
            cout << "Favor digite una opcion valida!" << endl;
        }
    }
    return 0;
}