#include <iostream>
using namespace std;

int main(void){
    //Saludar al usuario y pedir una letra
    char letra = 'f';
    cout << "Bienvenido! Digite una letra: ";
    cin >> letra;

    //Decir si la letra es vocal o no

    //1. Utilizando ifs anidados
    if(letra == 'a'){
        cout << "Es una vocal" << endl;
    }
    else{//eiou y las demas
        if(letra == 'e'){
            cout << "Es una vocal" << endl;
        }
        else{//iou y las demas
            if(letra == 'i'){
                cout << "Es una vocal" << endl;
            }
            else{//ou y otras
                if(letra == 'o'){
                    cout << "Es una vocal" << endl;
                }
                else{//u u otras
                    if(letra == 'u'){
                        cout << "Es una vocal" << endl;
                    }
                    else{
                        cout << "NO es una vocal" << endl;
                    }
                }
            }
        }
    }

    //2. Utilizando if-else-if
    if(letra == 'a'){
        cout << "Es una vocal" << endl;
    }
    else if(letra == 'e'){
        cout << "Es una vocal" << endl;
    }
    else if(letra == 'i'){
        cout << "Es una vocal" << endl;
    }
    else if(letra == 'o'){
        cout << "Es una vocal" << endl;
    }
    else if(letra == 'u'){
        cout << "Es una vocal" << endl;
    }
    else{
        cout << "NO es una vocal" << endl;
    }

    //3. Utilizando operadores lógicos OR
    //V or F or F or F = V (al menos 1 es V)
    //F or F or F or F = F (todas son falsas)
    //F or F or V or F = V (al menos 1 es V)
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        cout << "Es una vocal" << endl;
    }
    else{
        cout << "NO es una vocal" << endl;
    }

    //4. Utilizando un operador ternario
    //<condicion> ? <valor si V> : <valor si F>
    //cout << () << endl;
    string mensaje = (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u') ? "Es una vocal" : "NO es una vocal";
    cout << mensaje << endl;

    //5. Utilizando un switch con breaks
    switch(letra){
        case 'a':
            cout << "Es una vocal" << endl;
            break;//Break = ir al Final
        case 'e':
            cout << "Es una vocal" << endl;
            break;
        case 'i':
            cout << "Es una vocal" << endl;
            break;
        case 'o':
            cout << "Es una vocal" << endl;
            break;
        case 'u':
            cout << "Es una vocal" << endl;
            break;
        default://análogo al else
            cout << "NO es una vocal" << endl;
            break;
    }//FINAL

    //6. Utilizando un switch sin breaks*
    //Se dejan (intencionalmente) de usar breaks cuando queremos
    //realizar la MISMA acción, para distintos valores
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Es una vocal" << endl;
            break;
        default:
            cout << "NO es una vocal" << endl;
            break;
    }

    return 0;
}