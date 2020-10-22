// Programa: ValorMaximoVector
// Entradas: nada
// Salidas: valor máximo encontrado en un vector

#include <iostream>
using namespace std;

int main() {
    // Defino en una constante el tamaño máximo del vector
    const int TAMA = 5;

    // Datos con los que voy a trabajar
    int valores[]={12,23,67,4,5};

    // La variable maximo guardará el valor más alto encontrado.
    // La inicializo al primer valor que haya en el vector.
    int maximo=valores[0];

    // Recorro el resto de elementos para ver si hay alguno mayor que el máximo encontrado hasta ahora.
    for(int i=1; i<TAMA; ++i) {
        if ( valores[i]>maximo ) {
            maximo=valores[i];
        }
    }

    cout << "El mayor valor encontrado es " << maximo << endl;
}

/*
Salida obtenida:
================

El mayor valor encontrado es 67.
*/
