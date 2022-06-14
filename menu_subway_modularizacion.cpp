#include <iostream>
using namespace std;

bool usuario_desea_continuar();
string menu_choices();
string bread();
string cheese();
string veggies();
string more_variety();
string sauce();
string meal();

int main(void){
    cout << "Bienvenido a Subway!" << endl;
    while(usuario_desea_continuar()){
        string s_menu = menu_choices();//Mando a llamar por 1ra vez
        while(s_menu == ""){
            cout << "Error! Digite de nuevo su opcion!" << endl;
            s_menu = menu_choices();
        }

        /*string s_bread = bread();
        string s_cheese = cheese();
        string s_veggies = veggies();
        string s_variety = more_variety();
        string s_sauce = sauce();
        string s_meal = meal();*/

        cout << "Resumen de su pedido:" << endl;
        cout << s_menu << endl << endl;
    }
    cout << "Gracias por su preferencia!" << endl;
    return 0;
}

bool usuario_desea_continuar(){
    int opcion = 0;
    cout << "Desea ordenar? (1-si|2-no)" << endl;
    cout << "Opcion elegida: ";
    cin >> opcion;

    return (opcion == 1) ? true : false;
}

string menu_choices(){
    int opcion = 0;
    cout << "Elija su tipo de menu: (1-30cm|2-15cm|3-ensalada)" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    string resultado = "";
    int ensalada = 0;
    switch(opcion){
        case 1: resultado = "Footlong Sub"; break;
        case 2: resultado = "6 inches Sub"; break;
        case 3:
            cout << "Elija su tipo de ensalada (1-pollo|2-jamon|3-atun|4-vegetariana)" << endl;
            cout << "Opcion: ";
            cin >> ensalada;
            switch(ensalada){
                case 1: resultado = "Oven Roasted Chicken"; break;
                case 2: resultado = "Black Forest Ham"; break;
                case 3: resultado = "Tuna"; break;
                case 4: resultado = "Veggie Delite"; break;
            }
            break;
    }
    return resultado;
}

string bread(){
    //Cuerpo de la función
    return "";
}

string cheese(){
    //Cuerpo de la función
    return "";
}

string veggies(){
    //Cuerpo de la función
    return "";
}

string more_variety(){
    //Cuerpo de la función
    return "";
}

string sauce(){
    //Cuerpo de la función
    return "";
}

string meal(){
    //Cuerpo de la función
    return "";
}