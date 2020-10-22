// Programa: ValoresImparesVector
// Entradas: nada (un vector de datos predefinido)
// Salidas: un vector con los datos impares encontrados en el anterior.

#include <iostream>
using namespace std;

int main() {
    // Defino en una constante el tamaño máximo del vector
    const int TAMA = 5;

    // Datos con los que voy a trabajar
    int valores[]={12,23,67,4,5};

   // Datos impares encontrados
    int impares[TAMA];

    // Contador de datos impartes encontrados
    int contador_impares=0;


    // Recorro el vector buscando los datos impares
    for(int i=0; i<TAMA; ++i) {
        if ( valores[i]%2==1 ) {
            impares[contador_impares]=valores[i];
            ++contador_impares;
        }
    }

    // Muestro en pantalla los datos impares encontrados.
    cout << "Los datos impares encontrados son: " << endl;
    for ( int i=0; i<contador_impares; ++i ) {
        cout << impares[i] << " ";
    }

    return 0;
}

/*
Salida obtenida:
================

Los datos impares encontrados son:
23 67 5
*/
