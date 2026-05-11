#include <iostream>
using namespace std;
int main (){
//Cree un programa que:
//Declare un arreglo de 5 posiciones.
//Solicite al usuario ingresar 5 notas.
cout << "Ingrese el valor de sus 5 notas:" << endl;
    float arrayNotas[5];

    for (int i = 1; i < 6; i++) {
        cout << "Ingrese la nota: "<< endl;
        cin >> arrayNotas[i];

// Mostrar las notas en pantalla.
        cout << "Nota en la posicion " << i << " : " << arrayNotas[i] << endl;
    }
// mostrar el promedio de las notas.
    float promedio = 0;
    for (int i = 1; i < 6; i++){
        promedio = promedio + arrayNotas[i];
    }
    promedio = promedio / 5;
    cout << "El promedio de las notas es: " << promedio << endl;

// mostrar la nota mayor y menor.
    float mayor = arrayNotas[1];
    float menor = arrayNotas[1];
    for (int i = 1; i < 6; i++){
        if (mayor < arrayNotas[i]){
            mayor = arrayNotas[i];
        }
        if (menor > arrayNotas[i]){
            menor = arrayNotas[i];
        }
    }
    cout << "La nota mayor es: " << mayor << endl;
    cout << "La nota menor es: " << menor << endl;
    }   
