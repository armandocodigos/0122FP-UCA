#include <iostream>
#include <cmath>
using namespace std;

double calculo_renta(double salario);

int main(void){
    cout << "Bienvenido a la calculadora de impuestos!" << endl;

    bool continuar = true;
    while(continuar){
        //Solicitar salario nominal
        double salario = 0;
        cout << endl << "Digite su salario nominal: $";
        cin >> salario;

        if(salario > 0){
            //Todo el cálculo de la renta está ENCAPSULADO
            double renta = calculo_renta(salario);
            cout << "Renta retenida: $" << renta << endl;
        }
        else
            cout << "El salario debe de ser positivo!" << endl;

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

double calculo_renta(double salario){
    double renta_retenida = 0;

            //calcular descuento por AFP
            double retencionAFP = 0.0625;
            double salarioRetenido =salario * retencionAFP;
            salarioRetenido = ceil(salarioRetenido * 100.0) / 100.0;
            
            double salarioConDescuento = salario - salarioRetenido;
            if(salarioConDescuento <= 487.60){
                renta_retenida = 0;//renta_retenida
            }
            else if(salarioConDescuento <= 642.85){
                double renta = 0.1*(salarioConDescuento-487.60) + 17.48;
                renta = ceil(renta * 100.0) / 100.0;
                renta_retenida = renta;//renta_retenida
            }
            else if(salarioConDescuento <= 915.81){
                double renta = 0.1*(salarioConDescuento-642.85) + 32.70;
                renta = ceil(renta * 100.0) / 100.0;
                renta_retenida = renta;//renta_retenida
            }
            else if(salarioConDescuento <= 2058.67){
                double renta = 0.2*(salarioConDescuento-915.81) + 60;
                renta = ceil(renta * 100.0) / 100.0;
                renta_retenida = renta;//renta_retenida
            }
            else{
                double renta = 0.3*(salarioConDescuento-2058.67) + 288.57;
                renta = ceil(renta * 100.0) / 100.0;
                renta_retenida = renta;//renta_retenida
            }
    
    return renta_retenida;
}