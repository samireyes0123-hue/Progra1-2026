#include <iostream>
using namespace std;

int main () {
cout<< "Bienvedido a Buscaminas" << endl;    
    // Busca minas
    int MatrizMinas[4][4];

    // Llenar matriz con 0
    for (int columna = 0;columna < 4; columna++) {

        for (int fila = 0; fila < 4; fila++) {

            MatrizMinas[columna][fila] = 0;
        }
    }

    
    MatrizMinas[2][2] = 1;

    int fila, columna;
    bool mina = false;

    for (int turno = 1; turno < 6; turno++) {

        cout << "Turno " << turno << endl;

        cout << "Ingrese la columna (0-3): ";
        cin >> fila;

        cout << "Ingrese la fila (0-3): ";
        cin >> columna;

        if (MatrizMinas[columna][fila] == 1) {
            cout << "Mina encontrada, Fin del Juego " << endl;
            mina = true;
            break ;
        }

        else {
            cout << "Mina no encontrada" << endl;
        }
    }

    if (mina == false) {
        cout << "Ganaste el juego" << endl;
    }
}