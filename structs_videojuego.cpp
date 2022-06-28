#include <iostream>
using namespace std;

struct videojuego{
    string nombre;
    char clasificacion;
    double precio;
    int rating;
};

int main(void){
    videojuego juego01;
    juego01.nombre = "Skyrim - The Elder Scrolls";
    juego01.clasificacion = 'A';
    juego01.precio = 15.50;
    juego01.rating = 5;

    cout << "Nombre: " << juego01.nombre << endl;
    cout << "Clasificacion: " << juego01.clasificacion << endl;
    cout << "Precio: $" << juego01.precio << endl;
    cout << "Estrellas: " << juego01.rating  << "/5 " << endl;

    return 0;
}