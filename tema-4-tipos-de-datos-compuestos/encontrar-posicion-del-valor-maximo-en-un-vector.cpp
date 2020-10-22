// Programa: PosicionValorMaximoVector
// Entradas: nada
// Salidas: Posicion en el vector del valor máximo encontrado en dicho vector

#include <iostream>
using namespace std;

int main() {
    // Defino en una constante el tamaño máximo del vector
    const int TAMA = 5;

    // Datos con los que voy a trabajar
    int valores[]={12,23,67,4,5};

    // La variable posicion guardará la posición del valor más alto encontrado.
    // La inicializo a 0, para que tome el primer valor del vector
    int posicion=0;

    // Recorro el resto de elementos para ver si hay alguno mayor que el máximo encontrado hasta ahora.
    for(int i=1; i<TAMA; ++i) {
        if ( valores[i]>valores[posicion]) {
            posicion=i;
        }
    }

    cout << "El mayor valor encontrado está en la posición " << posicion
            << " y es " << valores[posicion] << endl;
}

/*
Salida obtenida:
================

El mayor valor encontrado está en la posición 2 y es 67.
*/
