// Ejemplo de la diapositiva 17, modificando un poco la parte de la entrada de datos

// Programa: OrdenaSeleccion
// Entradas: Una secuencia de números
// Salidas: La secuencia de números ordenada ascendentemente.
#include <iostream>
using namespace std;
int main() {
    int a[10],i,j, dato_usuario, tam,aux,pmin;

    // Primero pedimos los datos:
    // como máximo serán 10, aunque si el usuario escribe 0, ya no se piden más.
    tam=0;
    do {
        cout << "Introduce un número (0 para acabar): "<<endl;
        cin >> dato_usuario;
        if (dato_usuario!=0) {
            a[tam]=dato_usuario;
            ++tam;
        }
    } while (dato_usuario!=0 && tam<10);


    // A continuación, ordenamos los datos.
    // Esta parte es igual al original que había en los apuntes.
    for ( i=0; i<tam-1; i++ ) {
        pmin=i;
        for( j=i+1; j<tam; j++ ) {
            if (a[j]<a[pmin]) {
             pmin=j;
            }
        } // fin de for j

        // Intercambiamos los datos que hay en las posiciones pmin e i.
        // Para ello hace falta una variable auxiliar: aux
        aux = a[pmin];
        a[pmin]=a[i];
        a[i]=aux;
    }

    // Por último, mostramos los datos.
    cout << "Números ordenados " << endl;
    for( i=0; i<tam; i++)
        cout << a[i] << " ";
}


/*
El programa original era este:

using namespace std;
int main() {
    int a[10], i ,j,tam,aux,pmin;
    i=-1;
    do {
        cout << "Introduce un número (0 para acabar): "<<endl;
        i++;
        cin >> a[i];
    } while (a[i]!=0 && i<9);
    if ( a[i]==0 ) {
        tam=i;
    } else {
        tam=i+1;
    }

    for ( i=0; i<tam-1; i++ ) {
        pmin=i;
        for( j=i+1; j<tam; j++ ) {
            if (a[j]<a[pmin])
             pmin=j;
        } // fin de for j
        aux = a[pmin];
        a[pmin]=a[i];
        a[i]=aux;
    }

    cout << "Números ordenados " << endl;
    for( i=0; i<tam; i++)
        cout << a[i] << " ";
}

*/
