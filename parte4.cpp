#include <iostream>
using namespace std;
int main (){

// ingresar 10 nombres
string arrayNombres [10];
for (int i = 0; i < 10; i++){
    cout << "Ingrese el nombre: " << endl;
    cin >> arrayNombres[i];
    cout << "El nombre es: " << arrayNombres[i] << endl;
}

// mostrar los nombres en el orden ingresado
for (int i = 0; i < 10; i++){
    cout << "Los nombres en el orden ingresado son:" << endl;
    cout << "El nombre es: " << arrayNombres[i] << endl;
}   

// mostrar los nombres en el orden inverso
for (int i = 9; i >= 0; i--){
    cout << "Los nombres en el orden inverso son:" << endl;
    cout << "El nombre es: " << arrayNombres[i] << endl;
}
}