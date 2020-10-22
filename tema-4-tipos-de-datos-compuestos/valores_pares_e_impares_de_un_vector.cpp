// Programa: ValoresParesImparesVector
// Entradas: nada (un vector de datos predefinido)
// Salidas: dos vectores; uno con los datos pares y otro con los impares encontrados en el de entrada.

#include <iostream>
using namespace std;

int main() {
    // Defino en una constante el tamaño máximo del vector
    const int TAMA = 5;

    // Datos con los que voy a trabajar
    int valores[]={12,23,67,4,5};

   // Datos pares encontrados
    int pares[TAMA];
    // Contador de datos impartes encontrados
    int contador_pares=0;

   // Datos impares encontrados
    int impares[TAMA];
    // Contador de datos impartes encontrados
    int contador_impares=0;

    // Recorro el vector discriminando los datos pares de los impares
    for(int i=0; i<TAMA; ++i) {
        if ( valores[i]%2==1 ) {
            impares[contador_impares]=valores[i];
            ++contador_impares;
        } else {
            pares[contador_pares]=valores[i];
            ++contador_pares;
        }
    }

    // Muestro en pantalla los datos pares encontrados.
    cout << "Los datos pares encontrados son: " << endl;
    for ( int i=0; i<contador_pares; ++i ) {
        cout << pares[i] << " ";
    }
    cout << endl;

    // Muestro en pantalla los datos impares encontrados.
    cout << "Los datos impares encontrados son: " << endl;
    for ( int i=0; i<contador_impares; ++i ) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Salida obtenida:
================

Los datos impares encontrados son:
23 67 5
*/
