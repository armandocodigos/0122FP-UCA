#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int a=0, b=0, c=0, d=0;
    cout << "Digite el valor para A: "; cin >> a;
    cout << "Digite el valor para B: "; cin >> b;
    cout << "Digite el valor para C: "; cin >> c;
    cout << "Digite el valor para D: "; cin >> d;

    if(a==b && c==d)
        cout << "dos parejas" << endl;
    else
        cout << "no son dos parejas" << endl;

    return 0;
}