#include <iostream>
using namespace std;
int main (){

// Ingresar 20 numeros y mostrarlos en pantalla
int arrayNumeros[20];
for (int i = 0; i < 20; i++) {
    cout << "Ingrese el numero " << i + 1 << ":";
    cin >> arrayNumeros[i];

  
}


for (int i = 0; i < 20; i++) {
    cout << "El numero " << i + 1 << " es: " << arrayNumeros[i] << endl;

}
int numero;
cout << "Ingrese un numero adicional: ";
cin >> numero;

//Determinar si el numero adicional esta o no en el arreglo

    bool encontrado = false;
    for (int i = 0; i < 20; i++) {

        if (numero == arrayNumeros[i]) {
            encontrado = true;
        }

    }

    
    if (encontrado == true) {
        cout << "El numero esta en el arreglo" << endl;
    } 
    else {
        cout << "El numero no esta en el arreglo" << endl;
    }
}