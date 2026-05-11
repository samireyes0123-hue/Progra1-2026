#include <iostream>
using namespace std;
int main (){
//Matriz de 3 dimensiones
int MatrizNumeros [3][3];

for (int columnas = 0; columnas < 3; columnas++) {  
    for ( int filas = 0; filas < 3; filas++) {  
      cout << "Ingrese un numero de la coulumna " << columnas << " y de la fila " << filas << endl  ; 
      cin >> MatrizNumeros[columnas][filas]; 
    }  
}
 for (int columnas = 0; columnas < 3; columnas++) {  
    for ( int filas = 0; filas < 3; filas++) {  
      cout << MatrizNumeros [columnas][filas] << " " << endl;
      
}
cout << endl;
}

// sumatoria de filas

for (int fila = 0; fila < 3; fila++) {
        int sumaFila;
        sumaFila = 0;

        for (int columna = 0; columna < 3; columna++) {

            cout << MatrizNumeros[fila][columna] << " ";

            sumaFila += MatrizNumeros[fila][columna];
        }

        cout << " Suma de fila = " << sumaFila << endl;
    }

// sumatoria de columnas

for (int columna = 0; columna < 3; columna++) {
        int sumaColumna;
        sumaColumna = 0;

        for (int fila = 0; fila < 3; fila++) {  

            cout << MatrizNumeros[fila][columna] << " ";

            sumaColumna += MatrizNumeros[fila][columna];
        }

        cout << " Suma de columna = " << sumaColumna << endl;
    }
}