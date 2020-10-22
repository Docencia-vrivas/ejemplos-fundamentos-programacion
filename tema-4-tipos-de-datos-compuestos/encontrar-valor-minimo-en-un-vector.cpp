// Programa: ValorMinimoVector
// Entradas: nada
// Salidas: valor mínimo encontrado en un vector

#include <iostream>
using namespace std;

int main() {
    // Defino en una constante el tamaño máximo del vector
    const int TAMA = 5;

    // Datos con los que voy a trabajar
    int valores[]={12,23,67,4,5};

    // La variable minimo guardará el valor más bajo encontrado.
    // La inicializo al primer valor que haya en el vector.
    int minimo=valores[0];

    // Recorro el resto de elementos para ver si hay alguno menor que el minimo encontrado hasta ahora.
    for(int i=1; i<TAMA; ++i) {
        if ( valores[i]<minimo ) {
            minimo=valores[i];
        }
    }

    cout << "El menor valor encontrado es " << minimo << endl;
}

/*
Salida obtenida:
================

El menor valor encontrado es 4.
*/
