#include <iostream>
using namespace std;

int calcular_doble(int a);
int calcular_triple(int a);
int calcular_cuadruple(int a);
void calcular_doble_triple_cuadruple(int a, int *doble, int *triple, int *cuadruple);

int main(void){
    int variable = 10;

    //sin punteros sería así:
    /*int doble = calcular_doble(variable);
    int triple = calcular_triple(variable);
    int cuadruple = calcular_cuadruple(variable);
    cout << "Doble: " << doble << " Triple: " << triple << " Cuadruple: " << cuadruple << endl;*/

    //con punteros sería así:
    int doble = 0, triple = 0, cuadruple = 0;
    calcular_doble_triple_cuadruple(variable, &doble, &triple, &cuadruple);
    cout << "Doble: " << doble << " Triple: " << triple << " Cuadruple: " << cuadruple << endl;

    return 0;
}

//sin punteros sería así: (enviando parametros por valor)
int calcular_doble(int a){
    return a * 2;
}
int calcular_triple(int a){
    return a * 3;
}
int calcular_cuadruple(int a){
    return a * 4;
}

//con punteros sería así: (enviando parametros por referencia)
void calcular_doble_triple_cuadruple(int a, int *doble, int *triple, int *cuadruple){
    *doble = a * 2;
    *triple = a * 3;
    *cuadruple = a * 4;
}