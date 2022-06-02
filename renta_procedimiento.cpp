#include <iostream>
#include <cmath>
using namespace std;

void calculo_renta(double salario);

int main(void){
    cout << "Bienvenido a la calculadora de impuestos!" << endl;

    bool continuar = true;
    while(continuar){
        //Solicitar salario nominal
        double salario = 0;
        cout << endl << "Digite su salario nominal: $";
        cin >> salario;

        //Todo el cálculo de la renta está ENCAPSULADO
        calculo_renta(salario);

        //Preguntarle al usuario si desea hacer otro mas
        char letra = 'a';
        cout << "Digite s si desea regresar al inicio, otra tecla para salir: ";
        cin >> letra;

        if(letra != 's')//Para interrumpir el ciclo while
            continuar = false;
    }

    cout << "Tenga un buen dia!" << endl;

    return 0;
}

void calculo_renta(double salario){
    if(salario > 0){
            //calcular descuento por AFP
            double retencionAFP = 0.0625;
            double salarioRetenido =salario * retencionAFP;
            //utilizando el siguiente artificio de C++
            //ceil(value * 100.0) / 100.0
            salarioRetenido = ceil(salarioRetenido * 100.0) / 100.0;
            cout << "Retencion por AFP: $" << salarioRetenido << endl;

            //calcular el valor que compararemos con la tabla
            double salarioConDescuento = salario - salarioRetenido;
            if(salarioConDescuento <= 487.60){//tramo 1
                cout << "Aplicar TRAMO I" << endl;
                cout << "No paga renta" << endl;
            }
            else if(salarioConDescuento <= 642.85){//tramo 2
                cout << "Aplicar TRAMO II" << endl;
                double renta = 0.1*(salarioConDescuento-487.60) + 17.48;
                renta = ceil(renta * 100.0) / 100.0;
                cout << "Retencion a aplicar: $" << renta << endl;
                cout << "Salario liquido: $" << salarioConDescuento-renta << endl;
            }
            else if(salarioConDescuento <= 915.81){//tramo 3
                cout << "Aplicar TRAMO III" << endl;
                double renta = 0.1*(salarioConDescuento-642.85) + 32.70;
                renta = ceil(renta * 100.0) / 100.0;
                cout << "Retencion a aplicar: $" << renta << endl;
                cout << "Salario liquido: $" << salarioConDescuento-renta << endl;
            }
            else if(salarioConDescuento <= 2058.67){//tramo 4
                cout << "Aplicar TRAMO IV" << endl;
                double renta = 0.2*(salarioConDescuento-915.81) + 60;
                renta = ceil(renta * 100.0) / 100.0;
                cout << "Retencion a aplicar: $" << renta << endl;
                cout << "Salario liquido: $" << salarioConDescuento-renta << endl;
            }
            else{//tramo 5
                cout << "Aplicar TRAMO V" << endl;
                double renta = 0.3*(salarioConDescuento-2058.67) + 288.57;
                renta = ceil(renta * 100.0) / 100.0;
                cout << "Retencion a aplicar: $" << renta << endl;
                cout << "Salario liquido: $" << salarioConDescuento-renta << endl;
            }
        }
        else
            cout << "El salario debe de ser positivo!" << endl;
}