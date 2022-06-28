#include <iostream>
using namespace std;

int main(void){
    //Declarando un arreglo de enteros de 5 casillas
    //Indices: 0, 1, 2, 3, 4
    int conjunto_numeros[5];

    //Declarando un arreglo de reales de 8 casillas
    //Indices: 0, 1, 2, 3, 4, 5, 6, 7
    double conjunto_reales[8];

    //Forma 1 para inicializar un arreglo.
    int forma1[4] = {8, 8, 8, 8};

    //Forma2 para inicializar un arreglo.
    //No es muy utilizada
    int forma2[] = {8, 8, 8, 8};

    //Forma 3: declarar y luego dar valores
    int forma3[4];//Ahorita tengo 4 casillas llenas de "basura"
    //Forma extendida (y nada eficiente) de darle valores a las casillas
    forma3[0] = 8;
    forma3[1] = 8;
    forma3[2] = 8;
    forma3[3] = 8;
    //Forma resumida (y recomendada) de darle valores a las casillas
    for (int i = 0; i < 4; i++)
    {
        cout << "Forma3[" << i << "] = ";
        cin >> forma3[i];
    }

    return 0;
}