/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
// Ejemplo de variables, constantes, identificadores y expresiones
// Escrito y compilado con https://www.onlinegdb.com/online_c++_compiler

#include <iostream>
using namespace std;

int main()
{
    // Defino variables de tipo real:
    // double es el tipo de estas variables
    // precioSinIva y precioConIva son INDENTIFICADORES
    double precioSinIva, precioConIva;
    
    // Defino una constante de tipo real.
    // double es el tipo de esta constante
    // 21 es el valor literal que le asigno
    const double porcentajeIva = 21;
    
    // Utilizo una instrucción para asignar un valor al precio sin iva
    // 2.99 es el valor literal que le asigno
    precioSinIva = 2.99;
    
    // Utilizo otra instrucción para asignar un valor al precio con iva
    // 100 es un valor literal
    // precioSinIva+precioSinIva*porcentajeIva/100 es una expresión
    precioConIva = precioSinIva+precioSinIva*porcentajeIva/100;
    
    
    // Utilizo la instrucción para mostrar el resultado en pantalla.
    cout << "Si un producto cuesta " << precioSinIva << " euros "
         << " y se le añade un IVA del " << porcentajeIva <<"%"
         << " el precio final de ese producto es " << precioConIva << " euros"
         << endl;
         
    // utilizo una instrucción para terminar el programa indicando que no ha habido problemas.
    return 0;
}

// ------------------------------------------------------------------------------------
// El resultado que se obtiene es:
/*
Si un producto cuesta 2.99 euros  y se le añade un IVA del 21% el precio final de ese producto es 3.6179 euros                                                    
                                                                                                                                                                  
...Program finished with exit code 0                                                                                                                              
*/
