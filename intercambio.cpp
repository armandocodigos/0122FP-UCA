#include <iostream>
using namespace std;

void intercambio(int *a, int *b);
void intercambio_nofunciona(int a, int b);

int main(void){
    int variableA = 5;
    int variableB = 10;
    cout << "Variable A: " << variableA << ". ";
    cout << "Variable B: " << variableB << "." << endl;

    //intercambio(&variableA, &variableB);
    intercambio_nofunciona(variableA, variableB);
    cout << "Variable A: " << variableA << ". ";
    cout << "Variable B: " << variableB << "." << endl;
    return 0;
}

void intercambio(int *a, int *b){
    int pivote = *a;
    *a = *b;
    *b = pivote;
}

void intercambio_nofunciona(int a, int b){
    int pivote = a;
    a = b;
    b = pivote;
}