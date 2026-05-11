#include <iostream>
using namespace std;
int main (){
// numeros par o impares

// Guardar 10 numeros enteros
cout << "Ingrese 10 numeros enteros para determinar si son pares o impares" << endl;
int arrayNumeros[10];

for (int i = 0; i < 10; i++) {
    cout << "Ingrese el numero " << i + 1 << ": ";
    cin >> arrayNumeros[i];

}
for (int i = 0; i < 10; i++) {
    cout << "El numero " << i + 1 << " es: " << arrayNumeros[i] << endl;
 
    // Determinar numeros pares e impares
    if (arrayNumeros[i] % 2 == 0) {
    cout << "El numero " << arrayNumeros[i] << " es par" << endl;
} else {
    cout << "El numero " << arrayNumeros[i] << " es impar" << endl;
}   
}


}