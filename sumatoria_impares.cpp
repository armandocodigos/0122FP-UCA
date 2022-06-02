#include <iostream>
using namespace std;

int main(void){
    //pedir a y b al usuario (incluyendo los limites)

    //realizar la sumatoria de los impares
    //ej1. a=1 b=5 -> 1, 2, 3, 4, 5 -> impares: 1, 3, 5 -> suma: 9
    //ej1. a=2 b=8 -> 2, 3, 4, 5, 6, 7, 8 -> impares: 3, 5, 7 -> suma: 15
    
    //sumatoria multiplos de 5
    //a=1 b=20 -> mult5: 5, 10, 15, 20 -> suma: 50
    //a=10 b=30 -> mult5: 10, 15, 20, 25, 30 -> suma: 100

    //pares: num%2==0
    //impares: num%2==1
    //multiplo de 3: num%3==0
    //multiplo de 5: num%5==0
    //multiplo de N: num%N==0

    int a = 0;
    cout << "Favor digite a: "; cin >> a;
    
    int b = 0;
    cout << "Favor digite b: "; cin >> b;

    int sumatoria_impares = 0;
    int sumatoria_multp_5 = 0;

    for(int i = a; i <= b; i++){
        if(i % 2 == 1){
            sumatoria_impares += i;
        }

        if(i % 5 == 0){
            sumatoria_multp_5 += i;
        }
    }

    cout << "La suma de los impares es: " << sumatoria_impares << endl;
    cout << "La suma de los mult. de 5 es: " << sumatoria_multp_5 << endl;

    return 0;
}
